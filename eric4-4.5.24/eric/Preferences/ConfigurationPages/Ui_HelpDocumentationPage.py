# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'eric/Preferences/ConfigurationPages/HelpDocumentationPage.ui'
#
# Created: Mon Sep 22 18:05:24 2014
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

class Ui_HelpDocumentationPage(object):
    def setupUi(self, HelpDocumentationPage):
        HelpDocumentationPage.setObjectName(_fromUtf8("HelpDocumentationPage"))
        HelpDocumentationPage.resize(526, 594)
        self.verticalLayout = QtGui.QVBoxLayout(HelpDocumentationPage)
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.headerLabel = QtGui.QLabel(HelpDocumentationPage)
        self.headerLabel.setObjectName(_fromUtf8("headerLabel"))
        self.verticalLayout.addWidget(self.headerLabel)
        self.line17 = QtGui.QFrame(HelpDocumentationPage)
        self.line17.setFrameShape(QtGui.QFrame.HLine)
        self.line17.setFrameShadow(QtGui.QFrame.Sunken)
        self.line17.setFrameShape(QtGui.QFrame.HLine)
        self.line17.setFrameShadow(QtGui.QFrame.Sunken)
        self.line17.setObjectName(_fromUtf8("line17"))
        self.verticalLayout.addWidget(self.line17)
        self.groupBox_4 = QtGui.QGroupBox(HelpDocumentationPage)
        self.groupBox_4.setObjectName(_fromUtf8("groupBox_4"))
        self.gridlayout = QtGui.QGridLayout(self.groupBox_4)
        self.gridlayout.setObjectName(_fromUtf8("gridlayout"))
        self.pythonDocDirButton = QtGui.QPushButton(self.groupBox_4)
        self.pythonDocDirButton.setObjectName(_fromUtf8("pythonDocDirButton"))
        self.gridlayout.addWidget(self.pythonDocDirButton, 0, 1, 1, 1)
        self.pythonDocDirEdit = QtGui.QLineEdit(self.groupBox_4)
        self.pythonDocDirEdit.setObjectName(_fromUtf8("pythonDocDirEdit"))
        self.gridlayout.addWidget(self.pythonDocDirEdit, 0, 0, 1, 1)
        self.textLabel1_8_2 = QtGui.QLabel(self.groupBox_4)
        self.textLabel1_8_2.setObjectName(_fromUtf8("textLabel1_8_2"))
        self.gridlayout.addWidget(self.textLabel1_8_2, 1, 0, 1, 2)
        self.verticalLayout.addWidget(self.groupBox_4)
        self.groupBox_6 = QtGui.QGroupBox(HelpDocumentationPage)
        self.groupBox_6.setObjectName(_fromUtf8("groupBox_6"))
        self.gridlayout1 = QtGui.QGridLayout(self.groupBox_6)
        self.gridlayout1.setObjectName(_fromUtf8("gridlayout1"))
        self.qt4DocDirButton = QtGui.QPushButton(self.groupBox_6)
        self.qt4DocDirButton.setObjectName(_fromUtf8("qt4DocDirButton"))
        self.gridlayout1.addWidget(self.qt4DocDirButton, 0, 1, 1, 1)
        self.qt4DocDirEdit = QtGui.QLineEdit(self.groupBox_6)
        self.qt4DocDirEdit.setObjectName(_fromUtf8("qt4DocDirEdit"))
        self.gridlayout1.addWidget(self.qt4DocDirEdit, 0, 0, 1, 1)
        self.textLabel1_8_2_2_2 = QtGui.QLabel(self.groupBox_6)
        self.textLabel1_8_2_2_2.setObjectName(_fromUtf8("textLabel1_8_2_2_2"))
        self.gridlayout1.addWidget(self.textLabel1_8_2_2_2, 1, 0, 1, 2)
        self.verticalLayout.addWidget(self.groupBox_6)
        self.groupBox_7 = QtGui.QGroupBox(HelpDocumentationPage)
        self.groupBox_7.setObjectName(_fromUtf8("groupBox_7"))
        self.gridlayout2 = QtGui.QGridLayout(self.groupBox_7)
        self.gridlayout2.setObjectName(_fromUtf8("gridlayout2"))
        self.pyqt4DocDirButton = QtGui.QPushButton(self.groupBox_7)
        self.pyqt4DocDirButton.setObjectName(_fromUtf8("pyqt4DocDirButton"))
        self.gridlayout2.addWidget(self.pyqt4DocDirButton, 0, 1, 1, 1)
        self.pyqt4DocDirEdit = QtGui.QLineEdit(self.groupBox_7)
        self.pyqt4DocDirEdit.setObjectName(_fromUtf8("pyqt4DocDirEdit"))
        self.gridlayout2.addWidget(self.pyqt4DocDirEdit, 0, 0, 1, 1)
        self.textLabel1_8_2_2_3 = QtGui.QLabel(self.groupBox_7)
        self.textLabel1_8_2_2_3.setObjectName(_fromUtf8("textLabel1_8_2_2_3"))
        self.gridlayout2.addWidget(self.textLabel1_8_2_2_3, 1, 0, 1, 2)
        self.verticalLayout.addWidget(self.groupBox_7)
        self.pykde4Group = QtGui.QGroupBox(HelpDocumentationPage)
        self.pykde4Group.setObjectName(_fromUtf8("pykde4Group"))
        self.gridlayout3 = QtGui.QGridLayout(self.pykde4Group)
        self.gridlayout3.setObjectName(_fromUtf8("gridlayout3"))
        self.pykde4DocDirButton = QtGui.QPushButton(self.pykde4Group)
        self.pykde4DocDirButton.setObjectName(_fromUtf8("pykde4DocDirButton"))
        self.gridlayout3.addWidget(self.pykde4DocDirButton, 0, 1, 1, 1)
        self.pykde4DocDirEdit = QtGui.QLineEdit(self.pykde4Group)
        self.pykde4DocDirEdit.setObjectName(_fromUtf8("pykde4DocDirEdit"))
        self.gridlayout3.addWidget(self.pykde4DocDirEdit, 0, 0, 1, 1)
        self.textLabel1_8_2_2_4 = QtGui.QLabel(self.pykde4Group)
        self.textLabel1_8_2_2_4.setObjectName(_fromUtf8("textLabel1_8_2_2_4"))
        self.gridlayout3.addWidget(self.textLabel1_8_2_2_4, 1, 0, 1, 2)
        self.verticalLayout.addWidget(self.pykde4Group)
        self.pysideGroup = QtGui.QGroupBox(HelpDocumentationPage)
        self.pysideGroup.setObjectName(_fromUtf8("pysideGroup"))
        self.gridlayout4 = QtGui.QGridLayout(self.pysideGroup)
        self.gridlayout4.setObjectName(_fromUtf8("gridlayout4"))
        self.pysideDocDirButton = QtGui.QPushButton(self.pysideGroup)
        self.pysideDocDirButton.setObjectName(_fromUtf8("pysideDocDirButton"))
        self.gridlayout4.addWidget(self.pysideDocDirButton, 0, 1, 1, 1)
        self.pysideDocDirEdit = QtGui.QLineEdit(self.pysideGroup)
        self.pysideDocDirEdit.setObjectName(_fromUtf8("pysideDocDirEdit"))
        self.gridlayout4.addWidget(self.pysideDocDirEdit, 0, 0, 1, 1)
        self.textLabel1_8_2_2 = QtGui.QLabel(self.pysideGroup)
        self.textLabel1_8_2_2.setObjectName(_fromUtf8("textLabel1_8_2_2"))
        self.gridlayout4.addWidget(self.textLabel1_8_2_2, 1, 0, 1, 2)
        self.verticalLayout.addWidget(self.pysideGroup)
        spacerItem = QtGui.QSpacerItem(479, 41, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout.addItem(spacerItem)

        self.retranslateUi(HelpDocumentationPage)
        QtCore.QMetaObject.connectSlotsByName(HelpDocumentationPage)
        HelpDocumentationPage.setTabOrder(self.pythonDocDirEdit, self.pythonDocDirButton)
        HelpDocumentationPage.setTabOrder(self.pythonDocDirButton, self.qt4DocDirEdit)
        HelpDocumentationPage.setTabOrder(self.qt4DocDirEdit, self.qt4DocDirButton)
        HelpDocumentationPage.setTabOrder(self.qt4DocDirButton, self.pyqt4DocDirEdit)
        HelpDocumentationPage.setTabOrder(self.pyqt4DocDirEdit, self.pyqt4DocDirButton)
        HelpDocumentationPage.setTabOrder(self.pyqt4DocDirButton, self.pykde4DocDirEdit)
        HelpDocumentationPage.setTabOrder(self.pykde4DocDirEdit, self.pykde4DocDirButton)
        HelpDocumentationPage.setTabOrder(self.pykde4DocDirButton, self.pysideDocDirEdit)
        HelpDocumentationPage.setTabOrder(self.pysideDocDirEdit, self.pysideDocDirButton)

    def retranslateUi(self, HelpDocumentationPage):
        self.headerLabel.setText(_translate("HelpDocumentationPage", "<b>Configure help documentation</b>", None))
        self.groupBox_4.setTitle(_translate("HelpDocumentationPage", "Python Documentation", None))
        self.pythonDocDirButton.setToolTip(_translate("HelpDocumentationPage", "Press to select the Python documentation directory via a dialog", None))
        self.pythonDocDirButton.setText(_translate("HelpDocumentationPage", "...", None))
        self.pythonDocDirEdit.setToolTip(_translate("HelpDocumentationPage", "Enter the Python documentation directory", None))
        self.textLabel1_8_2.setText(_translate("HelpDocumentationPage", "<b>Note</b>: Leave empty to use the PYTHONDOCDIR environment variable, if set.", None))
        self.groupBox_6.setTitle(_translate("HelpDocumentationPage", "Qt4 Documentation", None))
        self.qt4DocDirButton.setToolTip(_translate("HelpDocumentationPage", "Press to select the Qt4 documentation directory via a dialog", None))
        self.qt4DocDirButton.setText(_translate("HelpDocumentationPage", "...", None))
        self.qt4DocDirEdit.setToolTip(_translate("HelpDocumentationPage", "Enter the Qt4 documentation directory", None))
        self.textLabel1_8_2_2_2.setText(_translate("HelpDocumentationPage", "<b>Note</b>: Leave empty to use the QT4DOCDIR environment variable, if set.", None))
        self.groupBox_7.setTitle(_translate("HelpDocumentationPage", "PyQt4 Documentation", None))
        self.pyqt4DocDirButton.setToolTip(_translate("HelpDocumentationPage", "Press to select the PyQt4 documentation directory via a dialog", None))
        self.pyqt4DocDirButton.setText(_translate("HelpDocumentationPage", "...", None))
        self.pyqt4DocDirEdit.setToolTip(_translate("HelpDocumentationPage", "Enter the PyQt4 documentation directory", None))
        self.textLabel1_8_2_2_3.setText(_translate("HelpDocumentationPage", "<b>Note</b>: Leave empty to use the PYQT4DOCDIR environment variable, if set.", None))
        self.pykde4Group.setTitle(_translate("HelpDocumentationPage", "PyKDE4 Documentation", None))
        self.pykde4DocDirButton.setToolTip(_translate("HelpDocumentationPage", "Press to select the PyKDE4 documentation directory via a dialog", None))
        self.pykde4DocDirButton.setText(_translate("HelpDocumentationPage", "...", None))
        self.pykde4DocDirEdit.setToolTip(_translate("HelpDocumentationPage", "Enter the PyKDE4 documentation directory", None))
        self.textLabel1_8_2_2_4.setText(_translate("HelpDocumentationPage", "<b>Note</b>: Leave empty to use the PYKDE4DOCDIR environment variable, if set.", None))
        self.pysideGroup.setTitle(_translate("HelpDocumentationPage", "PySide Documentation", None))
        self.pysideDocDirButton.setToolTip(_translate("HelpDocumentationPage", "Press to select the PySide documentation directory via a dialog", None))
        self.pysideDocDirButton.setText(_translate("HelpDocumentationPage", "...", None))
        self.pysideDocDirEdit.setToolTip(_translate("HelpDocumentationPage", "Enter the PySide documentation directory", None))
        self.textLabel1_8_2_2.setText(_translate("HelpDocumentationPage", "<b>Note</b>: Leave empty to use the PYSIDEDOCDIR environment variable, if set.", None))
