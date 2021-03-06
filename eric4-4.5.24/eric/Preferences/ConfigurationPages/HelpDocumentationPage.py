# -*- coding: utf-8 -*-

# Copyright (c) 2006 - 2014 Detlev Offenbach <detlev@die-offenbachs.de>
#

"""
Module implementing the Help Documentation configuration page.
"""

from PyQt4.QtCore import QDir, pyqtSignature, QUrl
from PyQt4.QtGui import QFileDialog

from KdeQt import KQFileDialog
import KdeQt

from E4Gui.E4Completers import E4FileCompleter

from ConfigurationPageBase import ConfigurationPageBase
from Ui_HelpDocumentationPage import Ui_HelpDocumentationPage

import Preferences
import Utilities

class HelpDocumentationPage(ConfigurationPageBase, Ui_HelpDocumentationPage):
    """
    Class implementing the Help Documentation configuration page.
    """
    def __init__(self):
        """
        Constructor
        """
        ConfigurationPageBase.__init__(self)
        self.setupUi(self)
        self.setObjectName("HelpDocumentationPage")
        
        self.pythonDocDirCompleter = E4FileCompleter(self.pythonDocDirEdit)
        self.qt4DocDirCompleter = E4FileCompleter(self.qt4DocDirEdit)
        self.pyqt4DocDirCompleter = E4FileCompleter(self.pyqt4DocDirEdit)
        self.pykde4DocDirCompleter = E4FileCompleter(self.pykde4DocDirEdit)
        self.pysideDocDirCompleter = E4FileCompleter(self.pysideDocDirEdit)
        
        self.pykde4Group.setEnabled(KdeQt.isKDEAvailable())
        try:
            import PySide
            self.pysideGroup.setEnabled(True)
            del PySide
        except ImportError:
            self.pysideGroup.setEnabled(False)
        
        # set initial values
        self.pythonDocDirEdit.setText(\
            Preferences.getHelp("PythonDocDir"))
        self.qt4DocDirEdit.setText(\
            Preferences.getHelp("Qt4DocDir"))
        self.pyqt4DocDirEdit.setText(\
            Preferences.getHelp("PyQt4DocDir"))
        self.pykde4DocDirEdit.setText(\
            Preferences.getHelp("PyKDE4DocDir"))
        self.pysideDocDirEdit.setText(\
            Preferences.getHelp("PySideDocDir"))
        
    def save(self):
        """
        Public slot to save the Help Documentation configuration.
        """
        Preferences.setHelp("PythonDocDir",
            self.pythonDocDirEdit.text())
        Preferences.setHelp("Qt4DocDir",
            self.qt4DocDirEdit.text())
        Preferences.setHelp("PyQt4DocDir",
            self.pyqt4DocDirEdit.text())
        Preferences.setHelp("PyKDE4DocDir",
            self.pykde4DocDirEdit.text())
        Preferences.setHelp("PySideDocDir",
            self.pysideDocDirEdit.text())
        
    @pyqtSignature("")
    def on_pythonDocDirButton_clicked(self):
        """
        Private slot to select the Python documentation directory.
        """
        entry = KQFileDialog.getOpenFileName(\
            self,
            self.trUtf8("Select Python documentation entry"),
            QUrl(self.pythonDocDirEdit.text()).path(),
            self.trUtf8("HTML Files (*.html *.htm);;All Files (*)"))
        
        if entry:
            self.pythonDocDirEdit.setText(Utilities.toNativeSeparators(entry))
        
    @pyqtSignature("")
    def on_qt4DocDirButton_clicked(self):
        """
        Private slot to select the Qt4 documentation directory.
        """
        entry = KQFileDialog.getOpenFileName(\
            self,
            self.trUtf8("Select Qt4 documentation entry"),
            QUrl(self.qt4DocDirEdit.text()).path(),
            self.trUtf8("HTML Files (*.html *.htm);;All Files (*)"))
        
        if entry:
            self.qt4DocDirEdit.setText(Utilities.toNativeSeparators(entry))
        
    @pyqtSignature("")
    def on_pyqt4DocDirButton_clicked(self):
        """
        Private slot to select the PyQt4 documentation directory.
        """
        entry = KQFileDialog.getOpenFileName(\
            self,
            self.trUtf8("Select PyQt4 documentation entry"),
            QUrl(self.pyqt4DocDirEdit.text()).path(),
            self.trUtf8("HTML Files (*.html *.htm);;All Files (*)"))
        
        if entry:
            self.pyqt4DocDirEdit.setText(Utilities.toNativeSeparators(entry))
        
    @pyqtSignature("")
    def on_pykde4DocDirButton_clicked(self):
        """
        Private slot to select the PyKDE4 documentation directory.
        """
        entry = KQFileDialog.getOpenFileName(\
            self,
            self.trUtf8("Select PyKDE4 documentation entry"),
            QUrl(self.pykde4DocDirEdit.text()).path(),
            self.trUtf8("HTML Files (*.html *.htm);;All Files (*)"))
        
        if entry:
            self.pykde4DocDirEdit.setText(Utilities.toNativeSeparators(entry))
        
    @pyqtSignature("")
    def on_pysideDocDirButton_clicked(self):
        """
        Private slot to select the PySide documentation directory.
        """
        entry = KQFileDialog.getOpenFileName(\
            self,
            self.trUtf8("Select PySide documentation entry"),
            QUrl(self.pysideDocDirEdit.text()).path(),
            self.trUtf8("HTML Files (*.html *.htm);;All Files (*)"))
        
        if entry:
            self.pysideDocDirEdit.setText(Utilities.toNativeSeparators(entry))
    
def create(dlg):
    """
    Module function to create the configuration page.
    
    @param dlg reference to the configuration dialog
    """
    page = HelpDocumentationPage()
    return page
