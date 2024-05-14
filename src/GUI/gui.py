import sys
import subprocess
import os

# 1. Import `QApplication` and all the required widgets
from PyQt5.QtWidgets import QApplication, QLabel, QWidget, QFileDialog, QPushButton, QHBoxLayout, QVBoxLayout, QMainWindow, QLineEdit, QTextEdit, QGridLayout
from PyQt5.QtGui import QColor, QIcon
from PyQt5 import QtWidgets, QtGui, QtCore
from PyQt5.QtWidgets import QSplitter

from PyQt5.QtGui import QSyntaxHighlighter, QTextCharFormat, QColor
from PyQt5.QtCore import QRegExp

class QuadHighlighter(QSyntaxHighlighter):
    def __init__(self, parent=None):
        super(QuadHighlighter, self).__init__(parent)

        self.highlightingRules = []

        keywordPatterns = ["\\bproc\\b", "\\bcall\\b", "\\bjmp\\b", "L.*:", "\\breturn\\b"]

        keywordFormat = QTextCharFormat()
        keywordFormat.setForeground(QColor("green"))
        self.highlightingRules.append((QRegExp(keywordPatterns[0]), keywordFormat))

        keywordFormat = QTextCharFormat()
        keywordFormat.setForeground(QColor("red"))
        self.highlightingRules.append((QRegExp(keywordPatterns[1]), keywordFormat))

        keywordFormat = QTextCharFormat()
        keywordFormat.setForeground(QColor("blue"))
        self.highlightingRules.append((QRegExp(keywordPatterns[2]), keywordFormat))

        keywordFormat = QTextCharFormat()
        keywordFormat.setForeground(QColor("purple"))
        self.highlightingRules.append((QRegExp(keywordPatterns[3]), keywordFormat))

        keywordFormat = QTextCharFormat()
        keywordFormat.setForeground(QColor("green"))
        self.highlightingRules.append((QRegExp(keywordPatterns[4]), keywordFormat))

    def highlightBlock(self, text):
        for pattern, format in self.highlightingRules:
            expression = QRegExp(pattern)
            index = expression.indexIn(text)
            while index >= 0:
                length = expression.matchedLength()
                self.setFormat(index, length, format)
                index = expression.indexIn(text, index + length)


class MyWindow(QWidget):
    def __init__(self):
        super(MyWindow,self).__init__()
        self.file = ""
        self.output = ""
        self.output_dir = "./output/"
        self.initUI()

    def initUI(self):
        # self.setGeometry(700, 700, 800, 800)
        self.setWindowTitle("FAAM language Compiler")
        self.layout = QVBoxLayout()

        # input file browse section
        self.inBrowseButton = QPushButton('Choose your input file')
        self.inBrowseButton.setStyleSheet("""
            QPushButton{
                  background-color: #be66f1; /* Green */
                border: none;
                color: white;
                padding: 5px 5px;
                text-align: center;
                text-decoration: none;
                font-size: 16px;
                border-radius: 5px;
            }
            QPushButton:hover {
                background-color: #E5E4E2; /* Green */
                color: #be66f1;
                }
            """)
        self.inBrowseButton.clicked.connect(self.browseFile)

        # input directory browse section
        self.outBrowseButton = QPushButton('Choose a directory for the output files')
        self.outBrowseButton.setStyleSheet("""
            QPushButton{
                  background-color: #be66f1; /* Green */
                border: none;
                color: white;
                padding: 5px 5px;
                text-align: center;
                text-decoration: none;
                font-size: 16px;
                border-radius: 5px;
            }
            QPushButton:hover {
                background-color: #E5E4E2; /* Green */
                color: #be66f1;
                }
            """)
        self.outBrowseButton.clicked.connect(self.browseDir)

        # browse layouts
        self.browseLayout = QGridLayout()
        self.browseLayout.addWidget(self.inBrowseButton, 0, 0)
        # self.browseLayout.addWidget(self.outBrowseButton, 1, 0)
        self.layout.addLayout(self.browseLayout)


        # compile
        self.compileButton = QPushButton('')
        self.compileButton.setIcon(QIcon("./src/GUI/compile.png")) #icon
        self.compileButton.setStyleSheet("""
            QPushButton{
                  background-color: #be66f1; /* Green */
                border: none;
                padding: 5px 5px;
                text-align: center;
                text-decoration: none;
                font-size: 13px;
            }
            QPushButton:hover {
                background-color: #E5E4E2; /* Green */
                }
            """)

        self.layout.addWidget(self.compileButton)
        self.compileButton.clicked.connect(self.compile)

        # ============= Input File Viewer
        self.inputFileLabel = QLabel('Input File:', self)
        self.layout.addWidget(self.inputFileLabel)

        self.inputFileViewer = QTextEdit()
        self.layout.addWidget(self.inputFileViewer)

        # ============= Symbol table && QUAD files
        self.splitter = QSplitter(QtCore.Qt.Horizontal)
        self.splitter2 = QSplitter(QtCore.Qt.Vertical)

        # Symbol Table
        self.symbolTableLabel = QLabel('Symbol Table:', self)
        self.symbolTableWidget = QWidget()
        self.symbolTableLayout = QVBoxLayout(self.symbolTableWidget)
        self.symbolTableLayout.addWidget(self.symbolTableLabel)

        self.scrollArea1 = QtWidgets.QScrollArea(self)
        self.scrollArea1.setWidgetResizable(True)
        self.scrollWidget1 = QtWidgets.QWidget()
        self.scrollLayout1 = QVBoxLayout(self.scrollWidget1)
        self.symbolTable = QTextEdit()
        self.symbolTable.setReadOnly(True)
        self.symbolTable.setTextColor(QColor(0,0,0))
        self.scrollLayout1.addWidget(self.symbolTable)
        self.scrollArea1.setWidget(self.scrollWidget1)
        self.symbolTableLayout.addWidget(self.scrollArea1)

        self.splitter.addWidget(self.symbolTableWidget)

        # Quad Output
        self.quadOutputLabel = QLabel('Quad Output:', self)
        self.quadOutputWidget = QWidget()
        self.quadOutputLayout = QVBoxLayout(self.quadOutputWidget)
        self.quadOutputLayout.addWidget(self.quadOutputLabel)

        self.scrollArea2 = QtWidgets.QScrollArea(self)
        self.scrollArea2.setWidgetResizable(True)
        self.scrollWidget2 = QtWidgets.QWidget()
        self.scrollLayout2 = QVBoxLayout(self.scrollWidget2)
        self.quadOutput = QTextEdit()
        self.quadOutput.setReadOnly(True)
        self.quadOutput.setTextColor(QColor(0,0,0))
        self.scrollLayout2.addWidget(self.quadOutput)
        self.scrollArea2.setWidget(self.scrollWidget2)
        self.quadOutputLayout.addWidget(self.scrollArea2)

        self.splitter.addWidget(self.quadOutputWidget)
        self.splitter2.addWidget(self.splitter)


        # # ============= ERRORS
        self.errorsLabel = QLabel('Errors or Warnings', self)
        self.errorsWidget = QWidget()
        self.errorsLayout = QVBoxLayout(self.errorsWidget)
        self.errorsLayout.addWidget(self.errorsLabel)

        self.scrollArea2 = QtWidgets.QScrollArea(self)
        self.scrollArea2.setWidgetResizable(True)
        self.scrollWidget2 = QtWidgets.QWidget()
        self.scrollLayout2 = QVBoxLayout(self.scrollWidget2)
        self.errorsText = QTextEdit()
        self.errorsText.setReadOnly(True)
        self.errorsText.setTextColor(QColor(255,0,0))
        self.errorsText.setFixedHeight(50)  # Set the height of the error box to 50 pixels
        self.scrollLayout2.addWidget(self.errorsText)
        self.scrollArea2.setWidget(self.scrollWidget2)
        self.errorsLayout.addWidget(self.scrollArea2)

        self.splitter2.addWidget(self.errorsWidget)


        self.layout.addWidget(self.splitter2)
        self.setLayout(self.layout)


    def browseFile(self):

        qfd = QFileDialog()
        path = "./"
        filter = "faam(*.faam)"
        self.file = QFileDialog.getOpenFileName(qfd, "", path, filter)[0]
        with open(self.file, 'r') as file:
            self.inputFileViewer.setText(file.read())

    def browseDir(self):
        filter = "(*)"
        dialog = QtWidgets.QFileDialog(self, 'Folders', "./", filter)
        dialog.setFileMode(QtWidgets.QFileDialog.DirectoryOnly)
        if dialog.exec_() == QtWidgets.QDialog.Accepted:
            self.output_dir = dialog.selectedFiles()[0]
        self.outFileBox.setText(self.output_dir)

    def compile(self):
        self.saveInputToFile()
        self.symbolTable.setPlainText("")
        self.errorsText.setPlainText("")
        output = subprocess.run(["./bin/faam.exe", self.file, self.output_dir], capture_output=True, universal_newlines=True)
        output_lines = str(output.stdout).split('\n')
        errors = []
        symbols = []
        for i in output_lines:
            if "Warning:" in i:
                self.errorsText.setTextColor(QColor(0,0,255))  # Set text color to blue for warnings
                self.errorsText.append(i)
            elif "Error:" in i:
                self.errorsText.setTextColor(QColor(255,0,0))  # Set text color to red for errors
                self.errorsText.append(i)
            else:
                symbols.append(i)
        for i in symbols:
            self.symbolTable.append(i)
        self.updateQuadOutput()

    def updateQuadOutput(self):
        quad_file_path = os.path.join(self.output_dir, 'quad.faam')
        if os.path.exists(quad_file_path):
            with open(quad_file_path, 'r') as file:
                self.quadOutput.setPlainText(file.read())
                self.quadHighlighter = QuadHighlighter(self.quadOutput.document())
        else:
            self.quadOutput.setText("Quad output file not found.")

    def saveInputToFile(self):
        # check if the self.file is not found
        if self.file == "":
            self.file = "./input/program.faam"
        with open(self.file, 'w') as file:
            file.write(self.inputFileViewer.toPlainText())


app = QApplication(sys.argv)
win = MyWindow()

win.setStyleSheet("""
    QWidget {
        background-color: #2b2b2b;
    }
    QPushButton {
        background-color: #5dc97d;
        border: none;
        color: white;
        padding: 5px 5px;
        text-align: center;
        text-decoration: none;
        font-size: 16px;
        border-radius: 5px;
    }
    QPushButton:hover {
        background-color: #E5E4E2;
        color: #E5E4E2;
    }
    QLabel {
        color: white;
    }
    QLineEdit {
        background-color: white;
        color: black;
    }
    QTextEdit {
        background-color: #E5E4E2;
        color: black;
    }
""")
win.show()
sys.exit(app.exec_())
