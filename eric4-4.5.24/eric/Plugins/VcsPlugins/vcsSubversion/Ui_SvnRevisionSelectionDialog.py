# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'eric/Plugins/VcsPlugins/vcsSubversion/SvnRevisionSelectionDialog.ui'
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

class Ui_SvnRevisionSelectionDialog(object):
    def setupUi(self, SvnRevisionSelectionDialog):
        SvnRevisionSelectionDialog.setObjectName(_fromUtf8("SvnRevisionSelectionDialog"))
        SvnRevisionSelectionDialog.resize(339, 519)
        SvnRevisionSelectionDialog.setSizeGripEnabled(True)
        self.vboxlayout = QtGui.QVBoxLayout(SvnRevisionSelectionDialog)
        self.vboxlayout.setObjectName(_fromUtf8("vboxlayout"))
        self.rev1GroupBox = QtGui.QGroupBox(SvnRevisionSelectionDialog)
        self.rev1GroupBox.setObjectName(_fromUtf8("rev1GroupBox"))
        self.gridlayout = QtGui.QGridLayout(self.rev1GroupBox)
        self.gridlayout.setObjectName(_fromUtf8("gridlayout"))
        self.prev1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.prev1Button.setObjectName(_fromUtf8("prev1Button"))
        self.gridlayout.addWidget(self.prev1Button, 6, 0, 1, 1)
        self.committed1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.committed1Button.setObjectName(_fromUtf8("committed1Button"))
        self.gridlayout.addWidget(self.committed1Button, 5, 0, 1, 1)
        self.base1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.base1Button.setObjectName(_fromUtf8("base1Button"))
        self.gridlayout.addWidget(self.base1Button, 4, 0, 1, 1)
        self.head1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.head1Button.setObjectName(_fromUtf8("head1Button"))
        self.gridlayout.addWidget(self.head1Button, 2, 0, 1, 1)
        self.working1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.working1Button.setChecked(True)
        self.working1Button.setObjectName(_fromUtf8("working1Button"))
        self.gridlayout.addWidget(self.working1Button, 3, 0, 1, 1)
        self.number1SpinBox = QtGui.QSpinBox(self.rev1GroupBox)
        self.number1SpinBox.setEnabled(False)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.number1SpinBox.sizePolicy().hasHeightForWidth())
        self.number1SpinBox.setSizePolicy(sizePolicy)
        self.number1SpinBox.setAlignment(QtCore.Qt.AlignRight)
        self.number1SpinBox.setMinimum(1)
        self.number1SpinBox.setMaximum(999999999)
        self.number1SpinBox.setObjectName(_fromUtf8("number1SpinBox"))
        self.gridlayout.addWidget(self.number1SpinBox, 0, 1, 1, 1)
        self.time1Edit = QtGui.QTimeEdit(self.rev1GroupBox)
        self.time1Edit.setEnabled(False)
        self.time1Edit.setObjectName(_fromUtf8("time1Edit"))
        self.gridlayout.addWidget(self.time1Edit, 1, 2, 1, 1)
        self.date1Edit = QtGui.QDateEdit(self.rev1GroupBox)
        self.date1Edit.setEnabled(False)
        self.date1Edit.setCalendarPopup(True)
        self.date1Edit.setObjectName(_fromUtf8("date1Edit"))
        self.gridlayout.addWidget(self.date1Edit, 1, 1, 1, 1)
        spacerItem = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.gridlayout.addItem(spacerItem, 0, 2, 1, 1)
        self.number1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.number1Button.setObjectName(_fromUtf8("number1Button"))
        self.gridlayout.addWidget(self.number1Button, 0, 0, 1, 1)
        self.date1Button = QtGui.QRadioButton(self.rev1GroupBox)
        self.date1Button.setObjectName(_fromUtf8("date1Button"))
        self.gridlayout.addWidget(self.date1Button, 1, 0, 1, 1)
        self.vboxlayout.addWidget(self.rev1GroupBox)
        self.rev2GroupBox = QtGui.QGroupBox(SvnRevisionSelectionDialog)
        self.rev2GroupBox.setObjectName(_fromUtf8("rev2GroupBox"))
        self.gridlayout1 = QtGui.QGridLayout(self.rev2GroupBox)
        self.gridlayout1.setObjectName(_fromUtf8("gridlayout1"))
        self.prev2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.prev2Button.setObjectName(_fromUtf8("prev2Button"))
        self.gridlayout1.addWidget(self.prev2Button, 6, 0, 1, 1)
        self.committed2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.committed2Button.setObjectName(_fromUtf8("committed2Button"))
        self.gridlayout1.addWidget(self.committed2Button, 5, 0, 1, 1)
        self.base2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.base2Button.setObjectName(_fromUtf8("base2Button"))
        self.gridlayout1.addWidget(self.base2Button, 4, 0, 1, 1)
        self.head2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.head2Button.setChecked(True)
        self.head2Button.setObjectName(_fromUtf8("head2Button"))
        self.gridlayout1.addWidget(self.head2Button, 2, 0, 1, 1)
        self.working2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.working2Button.setObjectName(_fromUtf8("working2Button"))
        self.gridlayout1.addWidget(self.working2Button, 3, 0, 1, 1)
        self.number2SpinBox = QtGui.QSpinBox(self.rev2GroupBox)
        self.number2SpinBox.setEnabled(False)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.number2SpinBox.sizePolicy().hasHeightForWidth())
        self.number2SpinBox.setSizePolicy(sizePolicy)
        self.number2SpinBox.setAlignment(QtCore.Qt.AlignRight)
        self.number2SpinBox.setMinimum(1)
        self.number2SpinBox.setMaximum(999999999)
        self.number2SpinBox.setObjectName(_fromUtf8("number2SpinBox"))
        self.gridlayout1.addWidget(self.number2SpinBox, 0, 1, 1, 1)
        self.time2Edit = QtGui.QTimeEdit(self.rev2GroupBox)
        self.time2Edit.setEnabled(False)
        self.time2Edit.setObjectName(_fromUtf8("time2Edit"))
        self.gridlayout1.addWidget(self.time2Edit, 1, 2, 1, 1)
        self.date2Edit = QtGui.QDateEdit(self.rev2GroupBox)
        self.date2Edit.setEnabled(False)
        self.date2Edit.setCalendarPopup(True)
        self.date2Edit.setObjectName(_fromUtf8("date2Edit"))
        self.gridlayout1.addWidget(self.date2Edit, 1, 1, 1, 1)
        spacerItem1 = QtGui.QSpacerItem(40, 20, QtGui.QSizePolicy.Expanding, QtGui.QSizePolicy.Minimum)
        self.gridlayout1.addItem(spacerItem1, 0, 2, 1, 1)
        self.number2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.number2Button.setObjectName(_fromUtf8("number2Button"))
        self.gridlayout1.addWidget(self.number2Button, 0, 0, 1, 1)
        self.date2Button = QtGui.QRadioButton(self.rev2GroupBox)
        self.date2Button.setObjectName(_fromUtf8("date2Button"))
        self.gridlayout1.addWidget(self.date2Button, 1, 0, 1, 1)
        self.vboxlayout.addWidget(self.rev2GroupBox)
        self.buttonBox = QtGui.QDialogButtonBox(SvnRevisionSelectionDialog)
        self.buttonBox.setOrientation(QtCore.Qt.Horizontal)
        self.buttonBox.setStandardButtons(QtGui.QDialogButtonBox.Cancel|QtGui.QDialogButtonBox.Ok)
        self.buttonBox.setObjectName(_fromUtf8("buttonBox"))
        self.vboxlayout.addWidget(self.buttonBox)

        self.retranslateUi(SvnRevisionSelectionDialog)
        QtCore.QObject.connect(self.buttonBox, QtCore.SIGNAL(_fromUtf8("accepted()")), SvnRevisionSelectionDialog.accept)
        QtCore.QObject.connect(self.buttonBox, QtCore.SIGNAL(_fromUtf8("rejected()")), SvnRevisionSelectionDialog.reject)
        QtCore.QObject.connect(self.number1Button, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.number1SpinBox.setEnabled)
        QtCore.QObject.connect(self.date1Button, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.date1Edit.setEnabled)
        QtCore.QObject.connect(self.date1Button, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.time1Edit.setEnabled)
        QtCore.QObject.connect(self.number2Button, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.number2SpinBox.setEnabled)
        QtCore.QObject.connect(self.date2Button, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.date2Edit.setEnabled)
        QtCore.QObject.connect(self.date2Button, QtCore.SIGNAL(_fromUtf8("toggled(bool)")), self.time2Edit.setEnabled)
        QtCore.QMetaObject.connectSlotsByName(SvnRevisionSelectionDialog)
        SvnRevisionSelectionDialog.setTabOrder(self.number1Button, self.number1SpinBox)
        SvnRevisionSelectionDialog.setTabOrder(self.number1SpinBox, self.date1Button)
        SvnRevisionSelectionDialog.setTabOrder(self.date1Button, self.date1Edit)
        SvnRevisionSelectionDialog.setTabOrder(self.date1Edit, self.time1Edit)
        SvnRevisionSelectionDialog.setTabOrder(self.time1Edit, self.head1Button)
        SvnRevisionSelectionDialog.setTabOrder(self.head1Button, self.working1Button)
        SvnRevisionSelectionDialog.setTabOrder(self.working1Button, self.base1Button)
        SvnRevisionSelectionDialog.setTabOrder(self.base1Button, self.committed1Button)
        SvnRevisionSelectionDialog.setTabOrder(self.committed1Button, self.prev1Button)
        SvnRevisionSelectionDialog.setTabOrder(self.prev1Button, self.number2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.number2Button, self.number2SpinBox)
        SvnRevisionSelectionDialog.setTabOrder(self.number2SpinBox, self.date2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.date2Button, self.date2Edit)
        SvnRevisionSelectionDialog.setTabOrder(self.date2Edit, self.time2Edit)
        SvnRevisionSelectionDialog.setTabOrder(self.time2Edit, self.head2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.head2Button, self.working2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.working2Button, self.base2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.base2Button, self.committed2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.committed2Button, self.prev2Button)
        SvnRevisionSelectionDialog.setTabOrder(self.prev2Button, self.buttonBox)

    def retranslateUi(self, SvnRevisionSelectionDialog):
        SvnRevisionSelectionDialog.setWindowTitle(_translate("SvnRevisionSelectionDialog", "Subversion Diff", None))
        self.rev1GroupBox.setTitle(_translate("SvnRevisionSelectionDialog", "Revision &1", None))
        self.prev1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select revision before last commit", None))
        self.prev1Button.setText(_translate("SvnRevisionSelectionDialog", "PREV", None))
        self.committed1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select last committed revision", None))
        self.committed1Button.setText(_translate("SvnRevisionSelectionDialog", "COMMITTED", None))
        self.base1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select base revision", None))
        self.base1Button.setText(_translate("SvnRevisionSelectionDialog", "BASE", None))
        self.head1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select head revision of repository", None))
        self.head1Button.setText(_translate("SvnRevisionSelectionDialog", "HEAD", None))
        self.working1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select working revision", None))
        self.working1Button.setText(_translate("SvnRevisionSelectionDialog", "WORKING", None))
        self.number1SpinBox.setToolTip(_translate("SvnRevisionSelectionDialog", "Enter a revision number", None))
        self.time1Edit.setToolTip(_translate("SvnRevisionSelectionDialog", "Enter time of revision", None))
        self.date1Edit.setToolTip(_translate("SvnRevisionSelectionDialog", "Enter date of revision", None))
        self.date1Edit.setDisplayFormat(_translate("SvnRevisionSelectionDialog", "yyyy-MM-dd", None))
        self.number1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select to specify a revision by number", None))
        self.number1Button.setText(_translate("SvnRevisionSelectionDialog", "Number", None))
        self.date1Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select to specify a revision by date and time", None))
        self.date1Button.setText(_translate("SvnRevisionSelectionDialog", "Date", None))
        self.rev2GroupBox.setTitle(_translate("SvnRevisionSelectionDialog", "Revision &2", None))
        self.prev2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select revision before last commit", None))
        self.prev2Button.setText(_translate("SvnRevisionSelectionDialog", "PREV", None))
        self.committed2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select last committed revision", None))
        self.committed2Button.setText(_translate("SvnRevisionSelectionDialog", "COMMITTED", None))
        self.base2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select base revision", None))
        self.base2Button.setText(_translate("SvnRevisionSelectionDialog", "BASE", None))
        self.head2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select head revision of repository", None))
        self.head2Button.setText(_translate("SvnRevisionSelectionDialog", "HEAD", None))
        self.working2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select working revision", None))
        self.working2Button.setText(_translate("SvnRevisionSelectionDialog", "WORKING", None))
        self.number2SpinBox.setToolTip(_translate("SvnRevisionSelectionDialog", "Enter a revision number", None))
        self.time2Edit.setToolTip(_translate("SvnRevisionSelectionDialog", "Enter time of revision", None))
        self.date2Edit.setToolTip(_translate("SvnRevisionSelectionDialog", "Enter date of revision", None))
        self.date2Edit.setDisplayFormat(_translate("SvnRevisionSelectionDialog", "yyyy-MM-dd", None))
        self.number2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select to specify a revision by number", None))
        self.number2Button.setText(_translate("SvnRevisionSelectionDialog", "Number", None))
        self.date2Button.setToolTip(_translate("SvnRevisionSelectionDialog", "Select to specify a revision by date and time", None))
        self.date2Button.setText(_translate("SvnRevisionSelectionDialog", "Date", None))

