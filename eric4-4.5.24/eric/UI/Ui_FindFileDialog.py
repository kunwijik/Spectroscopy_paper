# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'eric/UI/FindFileDialog.ui'
#
# Created: Mon Sep 22 18:05:25 2014
#      by: PyQt4 UI code generator 4.11.2
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_FindFileDialog(object):
    def setupUi(self, FindFileDialog):
        FindFileDialog.setObjectName(_fromUtf8("FindFileDialog"))
        FindFileDialog.resize(600, 750)
        self.verticalLayout = QtGui.QVBoxLayout(FindFileDialog)
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.gridLayout_3 = QtGui.QGridLayout()
        self.gridLayout_3.setObjectName(_fromUtf8("gridLayout_3"))
        self.TextLabel1 = QtGui.QLabel(FindFileDialog)
        self.TextLabel1.setObjectName(_fromUtf8("TextLabel1"))
        self.gridLayout_3.addWidget(self.TextLabel1, 0, 0, 1, 1)
        self.findtextCombo = QtGui.QComboBox(FindFileDialog)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.findtextCombo.sizePolicy().hasHeightForWidth())
        self.findtextCombo.setSizePolicy(sizePolicy)
        self.findtextCombo.setEditable(True)
        self.findtextCombo.setInsertPolicy(QtGui.QComboBox.InsertAtTop)
        self.findtextCombo.setAutoCompletion(False)
        self.findtextCombo.setDuplicatesEnabled(False)
        self.findtextCombo.setObjectName(_fromUtf8("findtextCombo"))
        self.gridLayout_3.addWidget(self.findtextCombo, 0, 1, 1, 1)
        self.replaceLabel = QtGui.QLabel(FindFileDialog)
        self.replaceLabel.setObjectName(_fromUtf8("replaceLabel"))
        self.gridLayout_3.addWidget(self.replaceLabel, 1, 0, 1, 1)
        self.replacetextCombo = QtGui.QComboBox(FindFileDialog)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.replacetextCombo.sizePolicy().hasHeightForWidth())
        self.replacetextCombo.setSizePolicy(sizePolicy)
        self.replacetextCombo.setEditable(True)
        self.replacetextCombo.setInsertPolicy(QtGui.QComboBox.InsertAtTop)
        self.replacetextCombo.setAutoCompletion(False)
        self.replacetextCombo.setDuplicatesEnabled(False)
        self.replacetextCombo.setObjectName(_fromUtf8("replacetextCombo"))
        self.gridLayout_3.addWidget(self.replacetextCombo, 1, 1, 1, 1)
        self.verticalLayout.addLayout(self.gridLayout_3)
        self.horizontalLayout_2 = QtGui.QHBoxLayout()
        self.horizontalLayout_2.setObjectName(_fromUtf8("horizontalLayout_2"))
        self.caseCheckBox = QtGui.QCheckBox(FindFileDialog)
        self.caseCheckBox.setObjectName(_fromUtf8("caseCheckBox"))
        self.horizontalLayout_2.addWidget(self.caseCheckBox)
        self.wordCheckBox = QtGui.QCheckBox(FindFileDialog)
        self.wordCheckBox.setObjectName(_fromUtf8("wordCheckBox"))
        self.horizontalLayout_2.addWidget(self.wordCheckBox)
        self.regexpCheckBox = QtGui.QCheckBox(FindFileDialog)
        self.regexpCheckBox.setObjectName(_fromUtf8("regexpCheckBox"))
        self.horizontalLayout_2.addWidget(self.regexpCheckBox)
        self.feelLikeCheckBox = QtGui.QCheckBox(FindFileDialog)
        self.feelLikeCheckBox.setObjectName(_fromUtf8("feelLikeCheckBox"))
        self.horizontalLayout_2.addWidget(self.feelLikeCheckBox)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.groupBox = QtGui.QGroupBox(FindFileDialog)
        self.groupBox.setObjectName(_fromUtf8("groupBox"))
        self.gridLayout = QtGui.QGridLayout(self.groupBox)
        self.gridLayout.setObjectName(_fromUtf8("gridLayout"))
        self.sourcesCheckBox = QtGui.QCheckBox(self.groupBox)
        self.sourcesCheckBox.setChecked(True)
        self.sourcesCheckBox.setObjectName(_fromUtf8("sourcesCheckBox"))
        self.gridLayout.addWidget(self.sourcesCheckBox, 0, 0, 1, 1)
        self.resourcesCheckBox = QtGui.QCheckBox(self.groupBox)
        self.resourcesCheckBox.setObjectName(_fromUtf8("resourcesCheckBox"))
        self.gridLayout.addWidget(self.resourcesCheckBox, 0, 1, 1, 1)
        self.formsCheckBox = QtGui.QCheckBox(self.groupBox)
        self.formsCheckBox.setObjectName(_fromUtf8("formsCheckBox"))
        self.gridLayout.addWidget(self.formsCheckBox, 1, 0, 1, 1)
        self.interfacesCheckBox = QtGui.QCheckBox(self.groupBox)
        self.interfacesCheckBox.setObjectName(_fromUtf8("interfacesCheckBox"))
        self.gridLayout.addWidget(self.interfacesCheckBox, 1, 1, 1, 1)
        self.line = QtGui.QFrame(self.groupBox)
        self.line.setFrameShape(QtGui.QFrame.HLine)
        self.line.setFrameShadow(QtGui.QFrame.Sunken)
        self.line.setObjectName(_fromUtf8("line"))
        self.gridLayout.addWidget(self.line, 2, 0, 1, 2)
        self.filterCheckBox = QtGui.QCheckBox(self.groupBox)
        self.filterCheckBox.setObjectName(_fromUtf8("filterCheckBox"))
        self.gridLayout.addWidget(self.filterCheckBox, 3, 0, 1, 1)
        self.filterEdit = QtGui.QLineEdit(self.groupBox)
        self.filterEdit.setEnabled(False)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.filterEdit.sizePolicy().hasHeightForWidth())
        self.filterEdit.setSizePolicy(sizePolicy)
        self.filterEdit.setObjectName(_fromUtf8("filterEdit"))
        self.gridLayout.addWidget(self.filterEdit, 3, 1, 1, 1)
        self.horizontalLayout.addWidget(self.groupBox)
        self.groupBox_2 = QtGui.QGroupBox(FindFileDialog)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.groupBox_2.sizePolicy().hasHeightForWidth())
        self.groupBox_2.setSizePolicy(sizePolicy)
        self.groupBox_2.setObjectName(_fromUtf8("groupBox_2"))
        self.verticalLayout_2 = QtGui.QVBoxLayout(self.groupBox_2)
        self.verticalLayout_2.setObjectName(_fromUtf8("verticalLayout_2"))
        self.horizontalLayout_3 = QtGui.QHBoxLayout()
        self.horizontalLayout_3.setObjectName(_fromUtf8("horizontalLayout_3"))
        self.projectButton = QtGui.QRadioButton(self.groupBox_2)
        self.projectButton.setChecked(True)
        self.projectButton.setObjectName(_fromUtf8("projectButton"))
        self.horizontalLayout_3.addWidget(self.projectButton)
        self.dirButton = QtGui.QRadioButton(self.groupBox_2)
        self.dirButton.setObjectName(_fromUtf8("dirButton"))
        self.horizontalLayout_3.addWidget(self.dirButton)
        self.verticalLayout_2.addLayout(self.horizontalLayout_3)
        self.horizontalLayout_4 = QtGui.QHBoxLayout()
        self.horizontalLayout_4.setObjectName(_fromUtf8("horizontalLayout_4"))
        self.dirCombo = QtGui.QComboBox(self.groupBox_2)
        self.dirCombo.setEnabled(False)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.dirCombo.sizePolicy().hasHeightForWidth())
        self.dirCombo.setSizePolicy(sizePolicy)
        self.dirCombo.setEditable(True)
        self.dirCombo.setInsertPolicy(QtGui.QComboBox.InsertAtTop)
        self.dirCombo.setSizeAdjustPolicy(QtGui.QComboBox.AdjustToMinimumContentsLength)
        self.dirCombo.setObjectName(_fromUtf8("dirCombo"))
        self.horizontalLayout_4.addWidget(self.dirCombo)
        self.dirSelectButton = QtGui.QPushButton(self.groupBox_2)
        self.dirSelectButton.setEnabled(False)
        self.dirSelectButton.setObjectName(_fromUtf8("dirSelectButton"))
        self.horizontalLayout_4.addWidget(self.dirSelectButton)
        self.verticalLayout_2.addLayout(self.horizontalLayout_4)
        self.horizontalLayout_5 = QtGui.QHBoxLayout()
        self.horizontalLayout_5.setObjectName(_fromUtf8("horizontalLayout_5"))
        self.openFilesButton = QtGui.QRadioButton(self.groupBox_2)
        self.openFilesButton.setObjectName(_fromUtf8("openFilesButton"))
        self.horizontalLayout_5.addWidget(self.openFilesButton)
        self.verticalLayout_2.addLayout(self.horizontalLayout_5)
        self.horizontalLayout.addWidget(self.groupBox_2)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.findProgressLabel = E4SqueezeLabelPath(FindFileDialog)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.findProgressLabel.sizePolicy().hasHeightForWidth())
        self.findProgressLabel.setSizePolicy(sizePolicy)
        self.findProgressLabel.setText(_fromUtf8(""))
        self.findProgressLabel.setObjectName(_fromUtf8("findProgressLabel"))
        self.verticalLayout.addWidget(self.findProgressLabel)
        self.findProgress = QtGui.QProgressBar(FindFileDialog)
        self.findProgress.setProperty("value", 0)
        self.findProgress.setOrientation(QtCore.Qt.Horizontal)
        self.findProgress.setObjectName(_fromUtf8("findProgress"))
        self.verticalLayout.addWidget(self.findProgress)
        self.findList = QtGui.QTreeWidget(FindFileDialog)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(3)
        sizePolicy.setHeightForWidth(self.findList.sizePolicy().hasHeightForWidth())
        self.findList.setSizePolicy(sizePolicy)
        self.findList.setAlternatingRowColors(True)
        self.findList.setColumnCount(2)
        self.findList.setObjectName(_fromUtf8("findList"))
        self.verticalLayout.addWidget(self.findList)
        self.replaceButton = QtGui.QPushButton(FindFileDialog)
        self.replaceButton.setObjectName(_fromUtf8("replaceButton"))
        self.verticalLayout.addWidget(self.replaceButton)
        self.buttonBox = QtGui.QDialogButtonBox(FindFileDialog)
        self.buttonBox.setOrientation(QtCore.Qt.Horizontal)
        self.buttonBox.setStandardButtons(QtGui.QDialogButtonBox.Close)
        self.buttonBox.setObjectName(_fromUtf8("buttonBox"))
        self.verticalLayout.addWidget(self.buttonBox)
        self.TextLabel1.setBuddy(self.findtextCombo)
        self.replaceLabel.setBuddy(self.findtextCombo)

        self.retranslateUi(FindFileDialog)
        QtCore.QObject.connect(self.dirButton, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.dirSelectButton.setEnabled)
        QtCore.QObject.connect(self.buttonBox, QtCore.SIGNAL(_fromUtf8("rejected()")), FindFileDialog.close)
        QtCore.QObject.connect(self.filterCheckBox, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.filterEdit.setEnabled)
        QtCore.QObject.connect(self.dirButton, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.dirCombo.setEnabled)
        QtCore.QMetaObject.connectSlotsByName(FindFileDialog)
        FindFileDialog.setTabOrder(self.findtextCombo, self.replacetextCombo)
        FindFileDialog.setTabOrder(self.replacetextCombo, self.caseCheckBox)
        FindFileDialog.setTabOrder(self.caseCheckBox, self.wordCheckBox)
        FindFileDialog.setTabOrder(self.wordCheckBox, self.regexpCheckBox)
        FindFileDialog.setTabOrder(self.regexpCheckBox, self.feelLikeCheckBox)
        FindFileDialog.setTabOrder(self.feelLikeCheckBox, self.sourcesCheckBox)
        FindFileDialog.setTabOrder(self.sourcesCheckBox, self.formsCheckBox)
        FindFileDialog.setTabOrder(self.formsCheckBox, self.resourcesCheckBox)
        FindFileDialog.setTabOrder(self.resourcesCheckBox, self.interfacesCheckBox)
        FindFileDialog.setTabOrder(self.interfacesCheckBox, self.filterCheckBox)
        FindFileDialog.setTabOrder(self.filterCheckBox, self.filterEdit)
        FindFileDialog.setTabOrder(self.filterEdit, self.projectButton)
        FindFileDialog.setTabOrder(self.projectButton, self.dirButton)
        FindFileDialog.setTabOrder(self.dirButton, self.dirCombo)
        FindFileDialog.setTabOrder(self.dirCombo, self.dirSelectButton)
        FindFileDialog.setTabOrder(self.dirSelectButton, self.openFilesButton)
        FindFileDialog.setTabOrder(self.openFilesButton, self.findList)
        FindFileDialog.setTabOrder(self.findList, self.replaceButton)
        FindFileDialog.setTabOrder(self.replaceButton, self.buttonBox)

    def retranslateUi(self, FindFileDialog):
        FindFileDialog.setWindowTitle(_translate("FindFileDialog", "Find in Files", None))
        self.TextLabel1.setText(_translate("FindFileDialog", "Find &text:", None))
        self.findtextCombo.setToolTip(_translate("FindFileDialog", "Enter the search text or regular expression", None))
        self.replaceLabel.setText(_translate("FindFileDialog", "Replace te&xt:", None))
        self.replacetextCombo.setToolTip(_translate("FindFileDialog", "Enter the replacement text or regular expression", None))
        self.caseCheckBox.setToolTip(_translate("FindFileDialog", "Select to match case sensitive", None))
        self.caseCheckBox.setText(_translate("FindFileDialog", "&Match upper/lower case", None))
        self.wordCheckBox.setToolTip(_translate("FindFileDialog", "Select to match whole words only", None))
        self.wordCheckBox.setText(_translate("FindFileDialog", "Whole &word", None))
        self.regexpCheckBox.setToolTip(_translate("FindFileDialog", "Select if the searchtext is a regular expression", None))
        self.regexpCheckBox.setText(_translate("FindFileDialog", "Regular &Expression", None))
        self.feelLikeCheckBox.setToolTip(_translate("FindFileDialog", "Select to open the first occurence automatically", None))
        self.feelLikeCheckBox.setText(_translate("FindFileDialog", "Feeling Like", None))
        self.groupBox.setTitle(_translate("FindFileDialog", "File type", None))
        self.sourcesCheckBox.setToolTip(_translate("FindFileDialog", "Search in source files", None))
        self.sourcesCheckBox.setText(_translate("FindFileDialog", "&Sources", None))
        self.resourcesCheckBox.setToolTip(_translate("FindFileDialog", "Search in resources", None))
        self.resourcesCheckBox.setText(_translate("FindFileDialog", "&Resources", None))
        self.formsCheckBox.setToolTip(_translate("FindFileDialog", "Search in forms", None))
        self.formsCheckBox.setText(_translate("FindFileDialog", "&Forms", None))
        self.interfacesCheckBox.setToolTip(_translate("FindFileDialog", "Search in interfaces", None))
        self.interfacesCheckBox.setText(_translate("FindFileDialog", "&Interfaces", None))
        self.filterCheckBox.setToolTip(_translate("FindFileDialog", "Select to filter the files by a given filename pattern", None))
        self.filterCheckBox.setText(_translate("FindFileDialog", "Fi&lter", None))
        self.filterEdit.setToolTip(_translate("FindFileDialog", "Enter the filename wildcards separated by \';\'", None))
        self.groupBox_2.setTitle(_translate("FindFileDialog", "Find in", None))
        self.projectButton.setToolTip(_translate("FindFileDialog", "Search in files of the current project", None))
        self.projectButton.setText(_translate("FindFileDialog", "&Project", None))
        self.dirButton.setToolTip(_translate("FindFileDialog", "Search in files of a directory tree to be entered below", None))
        self.dirButton.setText(_translate("FindFileDialog", "&Directory tree", None))
        self.dirCombo.setToolTip(_translate("FindFileDialog", "Enter the directory to search in", None))
        self.dirSelectButton.setToolTip(_translate("FindFileDialog", "Select the directory via a directory selection dialog", None))
        self.dirSelectButton.setText(_translate("FindFileDialog", "...", None))
        self.openFilesButton.setToolTip(_translate("FindFileDialog", "Search in open files only ", None))
        self.openFilesButton.setText(_translate("FindFileDialog", "&Open files only", None))
        self.findProgress.setToolTip(_translate("FindFileDialog", "Shows the progress of the search action", None))
        self.findList.setSortingEnabled(True)
        self.findList.headerItem().setText(0, _translate("FindFileDialog", "File/Line", None))
        self.findList.headerItem().setText(1, _translate("FindFileDialog", "Text", None))
        self.replaceButton.setToolTip(_translate("FindFileDialog", "Press to apply the selected replacements", None))
        self.replaceButton.setText(_translate("FindFileDialog", "Replace", None))

from E4Gui.E4SqueezeLabels import E4SqueezeLabelPath
