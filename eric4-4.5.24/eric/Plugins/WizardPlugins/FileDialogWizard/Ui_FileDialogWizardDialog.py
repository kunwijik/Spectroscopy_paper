# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'eric/Plugins/WizardPlugins/FileDialogWizard/FileDialogWizardDialog.ui'
#
# Created: Mon Sep 22 18:05:22 2014
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

class Ui_FileDialogWizardDialog(object):
    def setupUi(self, FileDialogWizardDialog):
        FileDialogWizardDialog.setObjectName(_fromUtf8("FileDialogWizardDialog"))
        FileDialogWizardDialog.resize(529, 487)
        FileDialogWizardDialog.setSizeGripEnabled(True)
        self.vboxlayout = QtGui.QVBoxLayout(FileDialogWizardDialog)
        self.vboxlayout.setObjectName(_fromUtf8("vboxlayout"))
        self.groupBox = QtGui.QGroupBox(FileDialogWizardDialog)
        self.groupBox.setObjectName(_fromUtf8("groupBox"))
        self.hboxlayout = QtGui.QHBoxLayout(self.groupBox)
        self.hboxlayout.setObjectName(_fromUtf8("hboxlayout"))
        self.rOpenFile = QtGui.QRadioButton(self.groupBox)
        self.rOpenFile.setChecked(True)
        self.rOpenFile.setObjectName(_fromUtf8("rOpenFile"))
        self.hboxlayout.addWidget(self.rOpenFile)
        self.rOpenFiles = QtGui.QRadioButton(self.groupBox)
        self.rOpenFiles.setObjectName(_fromUtf8("rOpenFiles"))
        self.hboxlayout.addWidget(self.rOpenFiles)
        self.rSaveFile = QtGui.QRadioButton(self.groupBox)
        self.rSaveFile.setObjectName(_fromUtf8("rSaveFile"))
        self.hboxlayout.addWidget(self.rSaveFile)
        self.rDirectory = QtGui.QRadioButton(self.groupBox)
        self.rDirectory.setObjectName(_fromUtf8("rDirectory"))
        self.hboxlayout.addWidget(self.rDirectory)
        self.vboxlayout.addWidget(self.groupBox)
        self.TextLabel1 = QtGui.QLabel(FileDialogWizardDialog)
        self.TextLabel1.setObjectName(_fromUtf8("TextLabel1"))
        self.vboxlayout.addWidget(self.TextLabel1)
        self.eCaption = QtGui.QLineEdit(FileDialogWizardDialog)
        self.eCaption.setObjectName(_fromUtf8("eCaption"))
        self.vboxlayout.addWidget(self.eCaption)
        self.cSymlinks = QtGui.QCheckBox(FileDialogWizardDialog)
        self.cSymlinks.setChecked(True)
        self.cSymlinks.setObjectName(_fromUtf8("cSymlinks"))
        self.vboxlayout.addWidget(self.cSymlinks)
        self.filePropertiesGroup = QtGui.QGroupBox(FileDialogWizardDialog)
        self.filePropertiesGroup.setObjectName(_fromUtf8("filePropertiesGroup"))
        self.gridlayout = QtGui.QGridLayout(self.filePropertiesGroup)
        self.gridlayout.setObjectName(_fromUtf8("gridlayout"))
        self.cFilters = QtGui.QCheckBox(self.filePropertiesGroup)
        self.cFilters.setObjectName(_fromUtf8("cFilters"))
        self.gridlayout.addWidget(self.cFilters, 3, 1, 1, 1)
        self.eFilters = QtGui.QLineEdit(self.filePropertiesGroup)
        self.eFilters.setObjectName(_fromUtf8("eFilters"))
        self.gridlayout.addWidget(self.eFilters, 3, 0, 1, 1)
        self.cStartWith = QtGui.QCheckBox(self.filePropertiesGroup)
        self.cStartWith.setObjectName(_fromUtf8("cStartWith"))
        self.gridlayout.addWidget(self.cStartWith, 1, 1, 1, 1)
        self.eStartWith = QtGui.QLineEdit(self.filePropertiesGroup)
        self.eStartWith.setObjectName(_fromUtf8("eStartWith"))
        self.gridlayout.addWidget(self.eStartWith, 1, 0, 1, 1)
        self.TextLabel2 = QtGui.QLabel(self.filePropertiesGroup)
        self.TextLabel2.setObjectName(_fromUtf8("TextLabel2"))
        self.gridlayout.addWidget(self.TextLabel2, 2, 0, 1, 2)
        self.cConfirmOverwrite = QtGui.QCheckBox(self.filePropertiesGroup)
        self.cConfirmOverwrite.setEnabled(False)
        self.cConfirmOverwrite.setObjectName(_fromUtf8("cConfirmOverwrite"))
        self.gridlayout.addWidget(self.cConfirmOverwrite, 4, 0, 1, 2)
        self.TextLabel3 = QtGui.QLabel(self.filePropertiesGroup)
        self.TextLabel3.setObjectName(_fromUtf8("TextLabel3"))
        self.gridlayout.addWidget(self.TextLabel3, 0, 0, 1, 2)
        self.vboxlayout.addWidget(self.filePropertiesGroup)
        self.dirPropertiesGroup = QtGui.QGroupBox(FileDialogWizardDialog)
        self.dirPropertiesGroup.setEnabled(False)
        self.dirPropertiesGroup.setObjectName(_fromUtf8("dirPropertiesGroup"))
        self.gridlayout1 = QtGui.QGridLayout(self.dirPropertiesGroup)
        self.gridlayout1.setObjectName(_fromUtf8("gridlayout1"))
        self.eWorkDir = QtGui.QLineEdit(self.dirPropertiesGroup)
        self.eWorkDir.setObjectName(_fromUtf8("eWorkDir"))
        self.gridlayout1.addWidget(self.eWorkDir, 1, 0, 1, 1)
        self.TextLabel4 = QtGui.QLabel(self.dirPropertiesGroup)
        self.TextLabel4.setObjectName(_fromUtf8("TextLabel4"))
        self.gridlayout1.addWidget(self.TextLabel4, 0, 0, 1, 2)
        self.cWorkDir = QtGui.QCheckBox(self.dirPropertiesGroup)
        self.cWorkDir.setObjectName(_fromUtf8("cWorkDir"))
        self.gridlayout1.addWidget(self.cWorkDir, 1, 1, 1, 1)
        self.cDirOnly = QtGui.QCheckBox(self.dirPropertiesGroup)
        self.cDirOnly.setChecked(True)
        self.cDirOnly.setObjectName(_fromUtf8("cDirOnly"))
        self.gridlayout1.addWidget(self.cDirOnly, 2, 0, 1, 2)
        self.vboxlayout.addWidget(self.dirPropertiesGroup)
        self.buttonBox = QtGui.QDialogButtonBox(FileDialogWizardDialog)
        self.buttonBox.setOrientation(QtCore.Qt.Horizontal)
        self.buttonBox.setStandardButtons(QtGui.QDialogButtonBox.Cancel|QtGui.QDialogButtonBox.Ok)
        self.buttonBox.setObjectName(_fromUtf8("buttonBox"))
        self.vboxlayout.addWidget(self.buttonBox)

        self.retranslateUi(FileDialogWizardDialog)
        QtCore.QObject.connect(self.buttonBox, QtCore.SIGNAL(_fromUtf8("accepted()")), FileDialogWizardDialog.accept)
        QtCore.QObject.connect(self.buttonBox, QtCore.SIGNAL(_fromUtf8("rejected()")), FileDialogWizardDialog.reject)
        QtCore.QMetaObject.connectSlotsByName(FileDialogWizardDialog)
        FileDialogWizardDialog.setTabOrder(self.rOpenFile, self.rOpenFiles)
        FileDialogWizardDialog.setTabOrder(self.rOpenFiles, self.rSaveFile)
        FileDialogWizardDialog.setTabOrder(self.rSaveFile, self.rDirectory)
        FileDialogWizardDialog.setTabOrder(self.rDirectory, self.eCaption)
        FileDialogWizardDialog.setTabOrder(self.eCaption, self.cSymlinks)
        FileDialogWizardDialog.setTabOrder(self.cSymlinks, self.eStartWith)
        FileDialogWizardDialog.setTabOrder(self.eStartWith, self.cStartWith)
        FileDialogWizardDialog.setTabOrder(self.cStartWith, self.eFilters)
        FileDialogWizardDialog.setTabOrder(self.eFilters, self.cFilters)
        FileDialogWizardDialog.setTabOrder(self.cFilters, self.cConfirmOverwrite)
        FileDialogWizardDialog.setTabOrder(self.cConfirmOverwrite, self.eWorkDir)
        FileDialogWizardDialog.setTabOrder(self.eWorkDir, self.cWorkDir)
        FileDialogWizardDialog.setTabOrder(self.cWorkDir, self.cDirOnly)

    def retranslateUi(self, FileDialogWizardDialog):
        FileDialogWizardDialog.setWindowTitle(_translate("FileDialogWizardDialog", "QFileDialog Wizard", None))
        self.groupBox.setTitle(_translate("FileDialogWizardDialog", "Type", None))
        self.rOpenFile.setToolTip(_translate("FileDialogWizardDialog", "Select to create an \'Open File\' dialog", None))
        self.rOpenFile.setText(_translate("FileDialogWizardDialog", "Open File", None))
        self.rOpenFiles.setToolTip(_translate("FileDialogWizardDialog", "Select to create an \'Open Files\' dialog", None))
        self.rOpenFiles.setText(_translate("FileDialogWizardDialog", "Open Files", None))
        self.rSaveFile.setToolTip(_translate("FileDialogWizardDialog", "Select to create a \'Save File\' dialog", None))
        self.rSaveFile.setText(_translate("FileDialogWizardDialog", "Save File", None))
        self.rDirectory.setToolTip(_translate("FileDialogWizardDialog", "Select to create a \'Select Directory\' dialog", None))
        self.rDirectory.setText(_translate("FileDialogWizardDialog", "Select Directory", None))
        self.TextLabel1.setText(_translate("FileDialogWizardDialog", "Caption", None))
        self.eCaption.setToolTip(_translate("FileDialogWizardDialog", "Enter the caption text", None))
        self.cSymlinks.setToolTip(_translate("FileDialogWizardDialog", "Check to resolve symbolic links", None))
        self.cSymlinks.setText(_translate("FileDialogWizardDialog", "Resolve Symlinks", None))
        self.filePropertiesGroup.setTitle(_translate("FileDialogWizardDialog", "File Dialog Properties", None))
        self.cFilters.setToolTip(_translate("FileDialogWizardDialog", "Check this if the contents of the edit names a variable or variable function", None))
        self.cFilters.setText(_translate("FileDialogWizardDialog", "Is Variable", None))
        self.eFilters.setToolTip(_translate("FileDialogWizardDialog", "Enter the filter specifications separated by \';;\'", None))
        self.cStartWith.setToolTip(_translate("FileDialogWizardDialog", "Check this if the contents of the edit names a variable or variable function", None))
        self.cStartWith.setText(_translate("FileDialogWizardDialog", "Is Variable", None))
        self.eStartWith.setToolTip(_translate("FileDialogWizardDialog", "Enter the working directory or a filename", None))
        self.TextLabel2.setText(_translate("FileDialogWizardDialog", "Filters", None))
        self.cConfirmOverwrite.setToolTip(_translate("FileDialogWizardDialog", "Select to show an overwrite confirmation dialog", None))
        self.cConfirmOverwrite.setText(_translate("FileDialogWizardDialog", "Show overwrite confirmation", None))
        self.TextLabel3.setText(_translate("FileDialogWizardDialog", "Start With / Working Directory", None))
        self.dirPropertiesGroup.setTitle(_translate("FileDialogWizardDialog", "Directory Dialog Properties", None))
        self.eWorkDir.setToolTip(_translate("FileDialogWizardDialog", "Enter the working directory", None))
        self.TextLabel4.setText(_translate("FileDialogWizardDialog", "Working Directory", None))
        self.cWorkDir.setToolTip(_translate("FileDialogWizardDialog", "Check this if the contents of the edit names a variable or variable function", None))
        self.cWorkDir.setText(_translate("FileDialogWizardDialog", "Is Variable", None))
        self.cDirOnly.setToolTip(_translate("FileDialogWizardDialog", "Check to display directories only", None))
        self.cDirOnly.setText(_translate("FileDialogWizardDialog", "Show Directories Only", None))

