# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'eric/Preferences/ConfigurationPages/EditorTypingPage.ui'
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

class Ui_EditorTypingPage(object):
    def setupUi(self, EditorTypingPage):
        EditorTypingPage.setObjectName(_fromUtf8("EditorTypingPage"))
        EditorTypingPage.resize(537, 531)
        EditorTypingPage.setWindowTitle(_fromUtf8(""))
        self.verticalLayout_3 = QtGui.QVBoxLayout(EditorTypingPage)
        self.verticalLayout_3.setObjectName(_fromUtf8("verticalLayout_3"))
        self.headerLabel = QtGui.QLabel(EditorTypingPage)
        self.headerLabel.setObjectName(_fromUtf8("headerLabel"))
        self.verticalLayout_3.addWidget(self.headerLabel)
        self.line1 = QtGui.QFrame(EditorTypingPage)
        self.line1.setFrameShape(QtGui.QFrame.HLine)
        self.line1.setFrameShadow(QtGui.QFrame.Sunken)
        self.line1.setFrameShape(QtGui.QFrame.HLine)
        self.line1.setFrameShadow(QtGui.QFrame.Sunken)
        self.line1.setObjectName(_fromUtf8("line1"))
        self.verticalLayout_3.addWidget(self.line1)
        self.hboxlayout = QtGui.QHBoxLayout()
        self.hboxlayout.setObjectName(_fromUtf8("hboxlayout"))
        self.TextLabel1_3 = QtGui.QLabel(EditorTypingPage)
        self.TextLabel1_3.setToolTip(_fromUtf8(""))
        self.TextLabel1_3.setObjectName(_fromUtf8("TextLabel1_3"))
        self.hboxlayout.addWidget(self.TextLabel1_3)
        self.languageCombo = QtGui.QComboBox(EditorTypingPage)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.languageCombo.sizePolicy().hasHeightForWidth())
        self.languageCombo.setSizePolicy(sizePolicy)
        self.languageCombo.setObjectName(_fromUtf8("languageCombo"))
        self.hboxlayout.addWidget(self.languageCombo)
        self.verticalLayout_3.addLayout(self.hboxlayout)
        self.stackedWidget = QtGui.QStackedWidget(EditorTypingPage)
        self.stackedWidget.setObjectName(_fromUtf8("stackedWidget"))
        self.emptyPage = QtGui.QWidget()
        self.emptyPage.setObjectName(_fromUtf8("emptyPage"))
        self.stackedWidget.addWidget(self.emptyPage)
        self.pythonPage = QtGui.QWidget()
        self.pythonPage.setObjectName(_fromUtf8("pythonPage"))
        self.verticalLayout_2 = QtGui.QVBoxLayout(self.pythonPage)
        self.verticalLayout_2.setObjectName(_fromUtf8("verticalLayout_2"))
        self.pythonGroup = QtGui.QGroupBox(self.pythonPage)
        self.pythonGroup.setFocusPolicy(QtCore.Qt.TabFocus)
        self.pythonGroup.setCheckable(True)
        self.pythonGroup.setObjectName(_fromUtf8("pythonGroup"))
        self.verticalLayout = QtGui.QVBoxLayout(self.pythonGroup)
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.pythonInsertClosingBraceCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonInsertClosingBraceCheckBox.setObjectName(_fromUtf8("pythonInsertClosingBraceCheckBox"))
        self.verticalLayout.addWidget(self.pythonInsertClosingBraceCheckBox)
        self.hboxlayout1 = QtGui.QHBoxLayout()
        self.hboxlayout1.setObjectName(_fromUtf8("hboxlayout1"))
        spacerItem = QtGui.QSpacerItem(20, 20, QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Minimum)
        self.hboxlayout1.addItem(spacerItem)
        self.pythonSkipBraceCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonSkipBraceCheckBox.setEnabled(False)
        self.pythonSkipBraceCheckBox.setObjectName(_fromUtf8("pythonSkipBraceCheckBox"))
        self.hboxlayout1.addWidget(self.pythonSkipBraceCheckBox)
        spacerItem1 = QtGui.QSpacerItem(131, 21, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.hboxlayout1.addItem(spacerItem1)
        self.verticalLayout.addLayout(self.hboxlayout1)
        self.pythonColonDetectionCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonColonDetectionCheckBox.setObjectName(_fromUtf8("pythonColonDetectionCheckBox"))
        self.verticalLayout.addWidget(self.pythonColonDetectionCheckBox)
        self.pythonIndentBraceCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonIndentBraceCheckBox.setObjectName(_fromUtf8("pythonIndentBraceCheckBox"))
        self.verticalLayout.addWidget(self.pythonIndentBraceCheckBox)
        self.pythonInsertQuoteCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonInsertQuoteCheckBox.setObjectName(_fromUtf8("pythonInsertQuoteCheckBox"))
        self.verticalLayout.addWidget(self.pythonInsertQuoteCheckBox)
        self.pythonDedentElseCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonDedentElseCheckBox.setObjectName(_fromUtf8("pythonDedentElseCheckBox"))
        self.verticalLayout.addWidget(self.pythonDedentElseCheckBox)
        self.pythonDedentExceptCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonDedentExceptCheckBox.setObjectName(_fromUtf8("pythonDedentExceptCheckBox"))
        self.verticalLayout.addWidget(self.pythonDedentExceptCheckBox)
        self.hboxlayout2 = QtGui.QHBoxLayout()
        self.hboxlayout2.setObjectName(_fromUtf8("hboxlayout2"))
        spacerItem2 = QtGui.QSpacerItem(20, 20, QtGui.QSizePolicy.Fixed, QtGui.QSizePolicy.Minimum)
        self.hboxlayout2.addItem(spacerItem2)
        self.pythonDedentExceptPy24CheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonDedentExceptPy24CheckBox.setEnabled(False)
        self.pythonDedentExceptPy24CheckBox.setObjectName(_fromUtf8("pythonDedentExceptPy24CheckBox"))
        self.hboxlayout2.addWidget(self.pythonDedentExceptPy24CheckBox)
        spacerItem3 = QtGui.QSpacerItem(261, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.hboxlayout2.addItem(spacerItem3)
        self.verticalLayout.addLayout(self.hboxlayout2)
        self.pythonInsertImportCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonInsertImportCheckBox.setObjectName(_fromUtf8("pythonInsertImportCheckBox"))
        self.verticalLayout.addWidget(self.pythonInsertImportCheckBox)
        self.pythonInsertSelfCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonInsertSelfCheckBox.setObjectName(_fromUtf8("pythonInsertSelfCheckBox"))
        self.verticalLayout.addWidget(self.pythonInsertSelfCheckBox)
        self.pythonInsertBlankCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonInsertBlankCheckBox.setObjectName(_fromUtf8("pythonInsertBlankCheckBox"))
        self.verticalLayout.addWidget(self.pythonInsertBlankCheckBox)
        self.pythonDedentDefCheckBox = QtGui.QCheckBox(self.pythonGroup)
        self.pythonDedentDefCheckBox.setObjectName(_fromUtf8("pythonDedentDefCheckBox"))
        self.verticalLayout.addWidget(self.pythonDedentDefCheckBox)
        self.verticalLayout_2.addWidget(self.pythonGroup)
        spacerItem4 = QtGui.QSpacerItem(507, 20, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout_2.addItem(spacerItem4)
        self.stackedWidget.addWidget(self.pythonPage)
        self.rubyPage = QtGui.QWidget()
        self.rubyPage.setObjectName(_fromUtf8("rubyPage"))
        self.vboxlayout = QtGui.QVBoxLayout(self.rubyPage)
        self.vboxlayout.setContentsMargins(0, -1, 0, -1)
        self.vboxlayout.setObjectName(_fromUtf8("vboxlayout"))
        self.rubyGroup = QtGui.QGroupBox(self.rubyPage)
        self.rubyGroup.setFocusPolicy(QtCore.Qt.TabFocus)
        self.rubyGroup.setCheckable(True)
        self.rubyGroup.setObjectName(_fromUtf8("rubyGroup"))
        self.vboxlayout1 = QtGui.QVBoxLayout(self.rubyGroup)
        self.vboxlayout1.setObjectName(_fromUtf8("vboxlayout1"))
        self.rubyInsertClosingBraceCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubyInsertClosingBraceCheckBox.setObjectName(_fromUtf8("rubyInsertClosingBraceCheckBox"))
        self.vboxlayout1.addWidget(self.rubyInsertClosingBraceCheckBox)
        self.rubySkipBraceCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubySkipBraceCheckBox.setObjectName(_fromUtf8("rubySkipBraceCheckBox"))
        self.vboxlayout1.addWidget(self.rubySkipBraceCheckBox)
        self.rubyIndentBraceCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubyIndentBraceCheckBox.setObjectName(_fromUtf8("rubyIndentBraceCheckBox"))
        self.vboxlayout1.addWidget(self.rubyIndentBraceCheckBox)
        self.rubyInsertQuoteCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubyInsertQuoteCheckBox.setObjectName(_fromUtf8("rubyInsertQuoteCheckBox"))
        self.vboxlayout1.addWidget(self.rubyInsertQuoteCheckBox)
        self.rubyInsertBlankCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubyInsertBlankCheckBox.setObjectName(_fromUtf8("rubyInsertBlankCheckBox"))
        self.vboxlayout1.addWidget(self.rubyInsertBlankCheckBox)
        self.rubyInsertHereDocCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubyInsertHereDocCheckBox.setObjectName(_fromUtf8("rubyInsertHereDocCheckBox"))
        self.vboxlayout1.addWidget(self.rubyInsertHereDocCheckBox)
        self.rubyInsertInlineDocCheckBox = QtGui.QCheckBox(self.rubyGroup)
        self.rubyInsertInlineDocCheckBox.setObjectName(_fromUtf8("rubyInsertInlineDocCheckBox"))
        self.vboxlayout1.addWidget(self.rubyInsertInlineDocCheckBox)
        self.vboxlayout.addWidget(self.rubyGroup)
        spacerItem5 = QtGui.QSpacerItem(20, 40, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.vboxlayout.addItem(spacerItem5)
        self.stackedWidget.addWidget(self.rubyPage)
        self.verticalLayout_3.addWidget(self.stackedWidget)
        spacerItem6 = QtGui.QSpacerItem(519, 20, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout_3.addItem(spacerItem6)

        self.retranslateUi(EditorTypingPage)
        self.stackedWidget.setCurrentIndex(0)
        QtCore.QObject.connect(self.pythonInsertClosingBraceCheckBox, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.pythonSkipBraceCheckBox.setEnabled)
        QtCore.QObject.connect(self.pythonInsertClosingBraceCheckBox, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.pythonSkipBraceCheckBox.setChecked)
        QtCore.QObject.connect(self.pythonDedentExceptCheckBox, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.pythonDedentExceptPy24CheckBox.setEnabled)
        QtCore.QMetaObject.connectSlotsByName(EditorTypingPage)
        EditorTypingPage.setTabOrder(self.languageCombo, self.pythonGroup)
        EditorTypingPage.setTabOrder(self.pythonGroup, self.pythonInsertClosingBraceCheckBox)
        EditorTypingPage.setTabOrder(self.pythonInsertClosingBraceCheckBox, self.pythonSkipBraceCheckBox)
        EditorTypingPage.setTabOrder(self.pythonSkipBraceCheckBox, self.pythonColonDetectionCheckBox)
        EditorTypingPage.setTabOrder(self.pythonColonDetectionCheckBox, self.pythonIndentBraceCheckBox)
        EditorTypingPage.setTabOrder(self.pythonIndentBraceCheckBox, self.pythonInsertQuoteCheckBox)
        EditorTypingPage.setTabOrder(self.pythonInsertQuoteCheckBox, self.pythonDedentElseCheckBox)
        EditorTypingPage.setTabOrder(self.pythonDedentElseCheckBox, self.pythonDedentExceptCheckBox)
        EditorTypingPage.setTabOrder(self.pythonDedentExceptCheckBox, self.pythonDedentExceptPy24CheckBox)
        EditorTypingPage.setTabOrder(self.pythonDedentExceptPy24CheckBox, self.pythonInsertImportCheckBox)
        EditorTypingPage.setTabOrder(self.pythonInsertImportCheckBox, self.pythonInsertSelfCheckBox)
        EditorTypingPage.setTabOrder(self.pythonInsertSelfCheckBox, self.pythonInsertBlankCheckBox)
        EditorTypingPage.setTabOrder(self.pythonInsertBlankCheckBox, self.pythonDedentDefCheckBox)
        EditorTypingPage.setTabOrder(self.pythonDedentDefCheckBox, self.rubyGroup)
        EditorTypingPage.setTabOrder(self.rubyGroup, self.rubyInsertClosingBraceCheckBox)
        EditorTypingPage.setTabOrder(self.rubyInsertClosingBraceCheckBox, self.rubySkipBraceCheckBox)
        EditorTypingPage.setTabOrder(self.rubySkipBraceCheckBox, self.rubyIndentBraceCheckBox)
        EditorTypingPage.setTabOrder(self.rubyIndentBraceCheckBox, self.rubyInsertQuoteCheckBox)
        EditorTypingPage.setTabOrder(self.rubyInsertQuoteCheckBox, self.rubyInsertBlankCheckBox)
        EditorTypingPage.setTabOrder(self.rubyInsertBlankCheckBox, self.rubyInsertHereDocCheckBox)
        EditorTypingPage.setTabOrder(self.rubyInsertHereDocCheckBox, self.rubyInsertInlineDocCheckBox)

    def retranslateUi(self, EditorTypingPage):
        self.headerLabel.setText(_translate("EditorTypingPage", "<b>Configure typing</b>", None))
        self.TextLabel1_3.setText(_translate("EditorTypingPage", "Programming Language:", None))
        self.languageCombo.setToolTip(_translate("EditorTypingPage", "Select the programming language to be configured.", None))
        self.pythonGroup.setToolTip(_translate("EditorTypingPage", "Select to enable Python typing aids", None))
        self.pythonGroup.setTitle(_translate("EditorTypingPage", "Enable Python typing aids", None))
        self.pythonInsertClosingBraceCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert a closing parenthesis", None))
        self.pythonInsertClosingBraceCheckBox.setText(_translate("EditorTypingPage", "Automatic parenthesis insertion", None))
        self.pythonSkipBraceCheckBox.setToolTip(_translate("EditorTypingPage", "Select to skip matching braces when typing", None))
        self.pythonSkipBraceCheckBox.setText(_translate("EditorTypingPage", "Automatically skip matching braces when typing", None))
        self.pythonColonDetectionCheckBox.setToolTip(_translate("EditorTypingPage", "Select to skip a \':\', if typed next to another \':\'", None))
        self.pythonColonDetectionCheckBox.setText(_translate("EditorTypingPage", "Automatic colon detection", None))
        self.pythonIndentBraceCheckBox.setToolTip(_translate("EditorTypingPage", "Select to indent to the brace level after typing \'return\'", None))
        self.pythonIndentBraceCheckBox.setText(_translate("EditorTypingPage", "After \'(\' indent to its level", None))
        self.pythonInsertQuoteCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert the matching quote character", None))
        self.pythonInsertQuoteCheckBox.setText(_translate("EditorTypingPage", "Automatic quote insertion", None))
        self.pythonDedentElseCheckBox.setToolTip(_translate("EditorTypingPage", "Select to dedent \'else:\' and \'elif\' to the matching \'if\'", None))
        self.pythonDedentElseCheckBox.setText(_translate("EditorTypingPage", "Automatic dedent of \'else:\' and \'elif\'", None))
        self.pythonDedentExceptCheckBox.setToolTip(_translate("EditorTypingPage", "Select to dedent \'except\' and \'finally\' to the matching \'try:\'", None))
        self.pythonDedentExceptCheckBox.setText(_translate("EditorTypingPage", "Automatic dedent of \'except\' and \'finally\'", None))
        self.pythonDedentExceptPy24CheckBox.setToolTip(_translate("EditorTypingPage", "Select to treat code as Python 2.4 code", None))
        self.pythonDedentExceptPy24CheckBox.setText(_translate("EditorTypingPage", "Python 2.4 style \'try:\' blocks", None))
        self.pythonInsertImportCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert the \'import\' string", None))
        self.pythonInsertImportCheckBox.setText(_translate("EditorTypingPage", "Automatic insertion of the \'import\' string on \'from xxx\'", None))
        self.pythonInsertSelfCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert the \'self\' string when declaring a method", None))
        self.pythonInsertSelfCheckBox.setText(_translate("EditorTypingPage", "Automatic insertion of \'self\' when declaring methods", None))
        self.pythonInsertBlankCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert a blank after \',\'", None))
        self.pythonInsertBlankCheckBox.setText(_translate("EditorTypingPage", "Automatic insertion of \' \' (blank) after \',\'", None))
        self.pythonDedentDefCheckBox.setToolTip(_translate("EditorTypingPage", "Select to dedent \'def\' statements to the last \'def\' or \'class\'", None))
        self.pythonDedentDefCheckBox.setText(_translate("EditorTypingPage", "Automatic dedent of \'def\' statements", None))
        self.rubyGroup.setToolTip(_translate("EditorTypingPage", "Select to enable Ruby typing aids", None))
        self.rubyGroup.setTitle(_translate("EditorTypingPage", "Enable Ruby typing aids", None))
        self.rubyInsertClosingBraceCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert a closing parenthesis", None))
        self.rubyInsertClosingBraceCheckBox.setText(_translate("EditorTypingPage", "Automatic parenthesis insertion", None))
        self.rubySkipBraceCheckBox.setToolTip(_translate("EditorTypingPage", "Select to skip matching braces when typing", None))
        self.rubySkipBraceCheckBox.setText(_translate("EditorTypingPage", "Automatically skip matching braces when typing", None))
        self.rubyIndentBraceCheckBox.setToolTip(_translate("EditorTypingPage", "Select to indent to the brace level after typing \'return\'", None))
        self.rubyIndentBraceCheckBox.setText(_translate("EditorTypingPage", "After \'(\' indent to its level", None))
        self.rubyInsertQuoteCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert the matching quote character", None))
        self.rubyInsertQuoteCheckBox.setText(_translate("EditorTypingPage", "Automatic quote insertion", None))
        self.rubyInsertBlankCheckBox.setToolTip(_translate("EditorTypingPage", "Select to insert a blank after \',\'", None))
        self.rubyInsertBlankCheckBox.setText(_translate("EditorTypingPage", "Automatic insertion of \' \' (blank) after \',\'", None))
        self.rubyInsertHereDocCheckBox.setToolTip(_translate("EditorTypingPage", "Select to automatically complete a here document", None))
        self.rubyInsertHereDocCheckBox.setText(_translate("EditorTypingPage", "Automatic completion of here document", None))
        self.rubyInsertInlineDocCheckBox.setToolTip(_translate("EditorTypingPage", "Select to automatically insert \'=end\' after entering \'=begin\'", None))
        self.rubyInsertInlineDocCheckBox.setText(_translate("EditorTypingPage", "Automatic insertion of \'=end\' after \'=begin\'", None))
