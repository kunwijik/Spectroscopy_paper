# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'eric/Preferences/ConfigurationPages/EditorExportersPage.ui'
#
# Created: Mon Sep 22 18:05:23 2014
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

class Ui_EditorExportersPage(object):
    def setupUi(self, EditorExportersPage):
        EditorExportersPage.setObjectName(_fromUtf8("EditorExportersPage"))
        EditorExportersPage.resize(537, 531)
        EditorExportersPage.setWindowTitle(_fromUtf8(""))
        self.verticalLayout = QtGui.QVBoxLayout(EditorExportersPage)
        self.verticalLayout.setObjectName(_fromUtf8("verticalLayout"))
        self.headerLabel = QtGui.QLabel(EditorExportersPage)
        self.headerLabel.setObjectName(_fromUtf8("headerLabel"))
        self.verticalLayout.addWidget(self.headerLabel)
        self.line1 = QtGui.QFrame(EditorExportersPage)
        self.line1.setFrameShape(QtGui.QFrame.HLine)
        self.line1.setFrameShadow(QtGui.QFrame.Sunken)
        self.line1.setFrameShape(QtGui.QFrame.HLine)
        self.line1.setFrameShadow(QtGui.QFrame.Sunken)
        self.line1.setObjectName(_fromUtf8("line1"))
        self.verticalLayout.addWidget(self.line1)
        self.hboxlayout = QtGui.QHBoxLayout()
        self.hboxlayout.setObjectName(_fromUtf8("hboxlayout"))
        self.TextLabel1_3 = QtGui.QLabel(EditorExportersPage)
        self.TextLabel1_3.setObjectName(_fromUtf8("TextLabel1_3"))
        self.hboxlayout.addWidget(self.TextLabel1_3)
        self.exportersCombo = QtGui.QComboBox(EditorExportersPage)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.exportersCombo.sizePolicy().hasHeightForWidth())
        self.exportersCombo.setSizePolicy(sizePolicy)
        self.exportersCombo.setObjectName(_fromUtf8("exportersCombo"))
        self.hboxlayout.addWidget(self.exportersCombo)
        self.verticalLayout.addLayout(self.hboxlayout)
        self.stackedWidget = QtGui.QStackedWidget(EditorExportersPage)
        self.stackedWidget.setObjectName(_fromUtf8("stackedWidget"))
        self.emptyPage = QtGui.QWidget()
        self.emptyPage.setObjectName(_fromUtf8("emptyPage"))
        self.stackedWidget.addWidget(self.emptyPage)
        self.htmlPage = QtGui.QWidget()
        self.htmlPage.setObjectName(_fromUtf8("htmlPage"))
        self.vboxlayout = QtGui.QVBoxLayout(self.htmlPage)
        self.vboxlayout.setMargin(0)
        self.vboxlayout.setObjectName(_fromUtf8("vboxlayout"))
        self.htmlWysiwygCheckBox = QtGui.QCheckBox(self.htmlPage)
        self.htmlWysiwygCheckBox.setObjectName(_fromUtf8("htmlWysiwygCheckBox"))
        self.vboxlayout.addWidget(self.htmlWysiwygCheckBox)
        self.htmlFoldingCheckBox = QtGui.QCheckBox(self.htmlPage)
        self.htmlFoldingCheckBox.setObjectName(_fromUtf8("htmlFoldingCheckBox"))
        self.vboxlayout.addWidget(self.htmlFoldingCheckBox)
        self.htmlStylesCheckBox = QtGui.QCheckBox(self.htmlPage)
        self.htmlStylesCheckBox.setObjectName(_fromUtf8("htmlStylesCheckBox"))
        self.vboxlayout.addWidget(self.htmlStylesCheckBox)
        self.htmlTitleCheckBox = QtGui.QCheckBox(self.htmlPage)
        self.htmlTitleCheckBox.setObjectName(_fromUtf8("htmlTitleCheckBox"))
        self.vboxlayout.addWidget(self.htmlTitleCheckBox)
        self.htmlTabsCheckBox = QtGui.QCheckBox(self.htmlPage)
        self.htmlTabsCheckBox.setObjectName(_fromUtf8("htmlTabsCheckBox"))
        self.vboxlayout.addWidget(self.htmlTabsCheckBox)
        spacerItem = QtGui.QSpacerItem(507, 21, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.vboxlayout.addItem(spacerItem)
        self.stackedWidget.addWidget(self.htmlPage)
        self.pdfPage = QtGui.QWidget()
        self.pdfPage.setObjectName(_fromUtf8("pdfPage"))
        self.gridLayout = QtGui.QGridLayout(self.pdfPage)
        self.gridLayout.setMargin(0)
        self.gridLayout.setObjectName(_fromUtf8("gridLayout"))
        self.label = QtGui.QLabel(self.pdfPage)
        self.label.setObjectName(_fromUtf8("label"))
        self.gridLayout.addWidget(self.label, 0, 0, 1, 1)
        self.pdfMagnificationSlider = QtGui.QSlider(self.pdfPage)
        self.pdfMagnificationSlider.setMaximum(20)
        self.pdfMagnificationSlider.setOrientation(QtCore.Qt.Horizontal)
        self.pdfMagnificationSlider.setObjectName(_fromUtf8("pdfMagnificationSlider"))
        self.gridLayout.addWidget(self.pdfMagnificationSlider, 0, 1, 1, 1)
        self.pdfMagnificationLCD = QtGui.QLCDNumber(self.pdfPage)
        self.pdfMagnificationLCD.setDigitCount(2)
        self.pdfMagnificationLCD.setSegmentStyle(QtGui.QLCDNumber.Flat)
        self.pdfMagnificationLCD.setObjectName(_fromUtf8("pdfMagnificationLCD"))
        self.gridLayout.addWidget(self.pdfMagnificationLCD, 0, 2, 1, 1)
        self.label_2 = QtGui.QLabel(self.pdfPage)
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.gridLayout.addWidget(self.label_2, 1, 0, 1, 1)
        self.pdfFontCombo = QtGui.QComboBox(self.pdfPage)
        self.pdfFontCombo.setObjectName(_fromUtf8("pdfFontCombo"))
        self.gridLayout.addWidget(self.pdfFontCombo, 1, 1, 1, 2)
        self.label_3 = QtGui.QLabel(self.pdfPage)
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.gridLayout.addWidget(self.label_3, 2, 0, 1, 1)
        self.pdfPageSizeCombo = QtGui.QComboBox(self.pdfPage)
        self.pdfPageSizeCombo.setObjectName(_fromUtf8("pdfPageSizeCombo"))
        self.gridLayout.addWidget(self.pdfPageSizeCombo, 2, 1, 1, 2)
        self.horizontalLayout = QtGui.QHBoxLayout()
        self.horizontalLayout.setObjectName(_fromUtf8("horizontalLayout"))
        self.groupBox = QtGui.QGroupBox(self.pdfPage)
        self.groupBox.setObjectName(_fromUtf8("groupBox"))
        self.gridlayout = QtGui.QGridLayout(self.groupBox)
        self.gridlayout.setObjectName(_fromUtf8("gridlayout"))
        self.pdfMarginTopSpin = QtGui.QSpinBox(self.groupBox)
        self.pdfMarginTopSpin.setMaximum(288)
        self.pdfMarginTopSpin.setObjectName(_fromUtf8("pdfMarginTopSpin"))
        self.gridlayout.addWidget(self.pdfMarginTopSpin, 0, 1, 1, 1)
        self.pdfMarginLeftSpin = QtGui.QSpinBox(self.groupBox)
        self.pdfMarginLeftSpin.setMaximum(288)
        self.pdfMarginLeftSpin.setObjectName(_fromUtf8("pdfMarginLeftSpin"))
        self.gridlayout.addWidget(self.pdfMarginLeftSpin, 1, 0, 1, 1)
        self.pdfMarginRightSpin = QtGui.QSpinBox(self.groupBox)
        self.pdfMarginRightSpin.setMaximum(288)
        self.pdfMarginRightSpin.setObjectName(_fromUtf8("pdfMarginRightSpin"))
        self.gridlayout.addWidget(self.pdfMarginRightSpin, 1, 2, 1, 1)
        self.pdfMarginBottomSpin = QtGui.QSpinBox(self.groupBox)
        self.pdfMarginBottomSpin.setMaximum(288)
        self.pdfMarginBottomSpin.setObjectName(_fromUtf8("pdfMarginBottomSpin"))
        self.gridlayout.addWidget(self.pdfMarginBottomSpin, 2, 1, 1, 1)
        self.horizontalLayout.addWidget(self.groupBox)
        spacerItem1 = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem1)
        self.gridLayout.addLayout(self.horizontalLayout, 3, 0, 1, 3)
        spacerItem2 = QtGui.QSpacerItem(20, 21, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.gridLayout.addItem(spacerItem2, 4, 1, 1, 1)
        self.stackedWidget.addWidget(self.pdfPage)
        self.rtfPage = QtGui.QWidget()
        self.rtfPage.setObjectName(_fromUtf8("rtfPage"))
        self.vboxlayout1 = QtGui.QVBoxLayout(self.rtfPage)
        self.vboxlayout1.setMargin(0)
        self.vboxlayout1.setObjectName(_fromUtf8("vboxlayout1"))
        self.rtfWysiwygCheckBox = QtGui.QCheckBox(self.rtfPage)
        self.rtfWysiwygCheckBox.setObjectName(_fromUtf8("rtfWysiwygCheckBox"))
        self.vboxlayout1.addWidget(self.rtfWysiwygCheckBox)
        self.hboxlayout1 = QtGui.QHBoxLayout()
        self.hboxlayout1.setObjectName(_fromUtf8("hboxlayout1"))
        self.rtfFontButton = QtGui.QPushButton(self.rtfPage)
        self.rtfFontButton.setObjectName(_fromUtf8("rtfFontButton"))
        self.hboxlayout1.addWidget(self.rtfFontButton)
        self.rtfFontSample = QtGui.QLineEdit(self.rtfPage)
        self.rtfFontSample.setFocusPolicy(QtCore.Qt.NoFocus)
        self.rtfFontSample.setAlignment(QtCore.Qt.AlignHCenter)
        self.rtfFontSample.setReadOnly(True)
        self.rtfFontSample.setObjectName(_fromUtf8("rtfFontSample"))
        self.hboxlayout1.addWidget(self.rtfFontSample)
        self.vboxlayout1.addLayout(self.hboxlayout1)
        self.rtfTabsCheckBox = QtGui.QCheckBox(self.rtfPage)
        self.rtfTabsCheckBox.setObjectName(_fromUtf8("rtfTabsCheckBox"))
        self.vboxlayout1.addWidget(self.rtfTabsCheckBox)
        spacerItem3 = QtGui.QSpacerItem(451, 21, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.vboxlayout1.addItem(spacerItem3)
        self.stackedWidget.addWidget(self.rtfPage)
        self.texPage = QtGui.QWidget()
        self.texPage.setObjectName(_fromUtf8("texPage"))
        self.vboxlayout2 = QtGui.QVBoxLayout(self.texPage)
        self.vboxlayout2.setMargin(0)
        self.vboxlayout2.setObjectName(_fromUtf8("vboxlayout2"))
        self.texStylesCheckBox = QtGui.QCheckBox(self.texPage)
        self.texStylesCheckBox.setObjectName(_fromUtf8("texStylesCheckBox"))
        self.vboxlayout2.addWidget(self.texStylesCheckBox)
        self.texTitleCheckBox = QtGui.QCheckBox(self.texPage)
        self.texTitleCheckBox.setObjectName(_fromUtf8("texTitleCheckBox"))
        self.vboxlayout2.addWidget(self.texTitleCheckBox)
        spacerItem4 = QtGui.QSpacerItem(507, 21, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.vboxlayout2.addItem(spacerItem4)
        self.stackedWidget.addWidget(self.texPage)
        self.verticalLayout.addWidget(self.stackedWidget)
        spacerItem5 = QtGui.QSpacerItem(519, 21, QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Expanding)
        self.verticalLayout.addItem(spacerItem5)

        self.retranslateUi(EditorExportersPage)
        self.stackedWidget.setCurrentIndex(0)
        QtCore.QObject.connect(self.rtfWysiwygCheckBox, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.rtfFontButton.setDisabled)
        QtCore.QObject.connect(self.rtfWysiwygCheckBox, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.rtfFontSample.setDisabled)
        QtCore.QObject.connect(self.pdfMagnificationSlider, QtCore.SIGNAL(_fromUtf8("sliderMoved(int)")), self.pdfMagnificationLCD.display)
        QtCore.QObject.connect(self.pdfMagnificationSlider, QtCore.SIGNAL(_fromUtf8("valueChanged(int)")), self.pdfMagnificationLCD.display)
        QtCore.QMetaObject.connectSlotsByName(EditorExportersPage)
        EditorExportersPage.setTabOrder(self.exportersCombo, self.htmlWysiwygCheckBox)
        EditorExportersPage.setTabOrder(self.htmlWysiwygCheckBox, self.htmlFoldingCheckBox)
        EditorExportersPage.setTabOrder(self.htmlFoldingCheckBox, self.htmlStylesCheckBox)
        EditorExportersPage.setTabOrder(self.htmlStylesCheckBox, self.htmlTitleCheckBox)
        EditorExportersPage.setTabOrder(self.htmlTitleCheckBox, self.htmlTabsCheckBox)
        EditorExportersPage.setTabOrder(self.htmlTabsCheckBox, self.pdfMagnificationSlider)
        EditorExportersPage.setTabOrder(self.pdfMagnificationSlider, self.pdfFontCombo)
        EditorExportersPage.setTabOrder(self.pdfFontCombo, self.pdfPageSizeCombo)
        EditorExportersPage.setTabOrder(self.pdfPageSizeCombo, self.pdfMarginTopSpin)
        EditorExportersPage.setTabOrder(self.pdfMarginTopSpin, self.pdfMarginLeftSpin)
        EditorExportersPage.setTabOrder(self.pdfMarginLeftSpin, self.pdfMarginRightSpin)
        EditorExportersPage.setTabOrder(self.pdfMarginRightSpin, self.pdfMarginBottomSpin)
        EditorExportersPage.setTabOrder(self.pdfMarginBottomSpin, self.rtfWysiwygCheckBox)
        EditorExportersPage.setTabOrder(self.rtfWysiwygCheckBox, self.rtfFontButton)
        EditorExportersPage.setTabOrder(self.rtfFontButton, self.rtfTabsCheckBox)
        EditorExportersPage.setTabOrder(self.rtfTabsCheckBox, self.texStylesCheckBox)
        EditorExportersPage.setTabOrder(self.texStylesCheckBox, self.texTitleCheckBox)

    def retranslateUi(self, EditorExportersPage):
        self.headerLabel.setText(_translate("EditorExportersPage", "<b>Configure exporters</b>", None))
        self.TextLabel1_3.setText(_translate("EditorExportersPage", "Exporter Type:", None))
        self.exportersCombo.setToolTip(_translate("EditorExportersPage", "Select the exporter to be configured.", None))
        self.htmlWysiwygCheckBox.setToolTip(_translate("EditorExportersPage", "Select to export in WYSIWYG mode", None))
        self.htmlWysiwygCheckBox.setText(_translate("EditorExportersPage", "Use WYSIWYG mode", None))
        self.htmlFoldingCheckBox.setToolTip(_translate("EditorExportersPage", "Select to include folding functionality", None))
        self.htmlFoldingCheckBox.setText(_translate("EditorExportersPage", "Include folding functionality", None))
        self.htmlStylesCheckBox.setToolTip(_translate("EditorExportersPage", "Select to include only used styles", None))
        self.htmlStylesCheckBox.setText(_translate("EditorExportersPage", "Include only used styles", None))
        self.htmlTitleCheckBox.setToolTip(_translate("EditorExportersPage", "Select to use the full pathname as the document title", None))
        self.htmlTitleCheckBox.setText(_translate("EditorExportersPage", "Use full pathname as document title", None))
        self.htmlTabsCheckBox.setToolTip(_translate("EditorExportersPage", "Select to use tabs in the generated file", None))
        self.htmlTabsCheckBox.setText(_translate("EditorExportersPage", "Use tabs", None))
        self.label.setText(_translate("EditorExportersPage", "Magnification:", None))
        self.pdfMagnificationSlider.setToolTip(_translate("EditorExportersPage", "Select the magnification value to be added to the font sizes of the styles", None))
        self.pdfMagnificationLCD.setToolTip(_translate("EditorExportersPage", "Displays the selected magnification value", None))
        self.label_2.setText(_translate("EditorExportersPage", "Font:", None))
        self.pdfFontCombo.setToolTip(_translate("EditorExportersPage", "Select the font from the list", None))
        self.label_3.setText(_translate("EditorExportersPage", "Pagesize:", None))
        self.pdfPageSizeCombo.setToolTip(_translate("EditorExportersPage", "Select the page size from the list", None))
        self.groupBox.setTitle(_translate("EditorExportersPage", "Margins", None))
        self.pdfMarginTopSpin.setToolTip(_translate("EditorExportersPage", "Select the top margin in points (72 pt == 1\")", None))
        self.pdfMarginLeftSpin.setToolTip(_translate("EditorExportersPage", "Select the left margin in points (72 pt == 1\")", None))
        self.pdfMarginRightSpin.setToolTip(_translate("EditorExportersPage", "Select the right margin in points (72 pt == 1\")", None))
        self.pdfMarginBottomSpin.setToolTip(_translate("EditorExportersPage", "Select the bottom margin in points (72 pt == 1\")", None))
        self.rtfWysiwygCheckBox.setToolTip(_translate("EditorExportersPage", "Select to export in WYSIWYG mode", None))
        self.rtfWysiwygCheckBox.setText(_translate("EditorExportersPage", "Use WYSIWYG mode", None))
        self.rtfFontButton.setToolTip(_translate("EditorExportersPage", "Press to select the font for the RTF export", None))
        self.rtfFontButton.setText(_translate("EditorExportersPage", "Select Font", None))
        self.rtfFontSample.setText(_translate("EditorExportersPage", "Font for RTF export", None))
        self.rtfTabsCheckBox.setToolTip(_translate("EditorExportersPage", "Select to use tabs in the generated file", None))
        self.rtfTabsCheckBox.setText(_translate("EditorExportersPage", "Use tabs", None))
        self.texStylesCheckBox.setToolTip(_translate("EditorExportersPage", "Select to include only used styles", None))
        self.texStylesCheckBox.setText(_translate("EditorExportersPage", "Include only used styles", None))
        self.texTitleCheckBox.setToolTip(_translate("EditorExportersPage", "Select to use the full pathname as the document title", None))
        self.texTitleCheckBox.setText(_translate("EditorExportersPage", "Use full pathname as document title", None))

