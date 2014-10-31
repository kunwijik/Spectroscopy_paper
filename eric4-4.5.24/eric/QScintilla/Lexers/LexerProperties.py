# -*- coding: utf-8 -*-

# Copyright (c) 2005 - 2014 Detlev Offenbach <detlev@die-offenbachs.de>
#

"""
Module implementing a Properties lexer with some additional methods.
"""

from PyQt4.Qsci import QsciLexerProperties
from PyQt4.QtCore import QString

from Lexer import Lexer
import Preferences

class LexerProperties(QsciLexerProperties, Lexer):
    """ 
    Subclass to implement some additional lexer dependant methods.
    """
    def __init__(self, parent=None):
        """
        Constructor
        
        @param parent parent widget of this lexer
        """
        QsciLexerProperties.__init__(self, parent)
        Lexer.__init__(self)
        
        self.commentString = QString("#")
    
    def initProperties(self):
        """
        Public slot to initialize the properties.
        """
        self.setFoldCompact(Preferences.getEditor("AllFoldCompact"))
        try:
            self.setInitialSpaces(Preferences.getEditor("PropertiesInitialSpaces"))
        except AttributeError:
            pass
    
    def isCommentStyle(self, style):
        """
        Public method to check, if a style is a comment style.
        
        @return flag indicating a comment style (boolean)
        """
        return style in [QsciLexerProperties.Comment]
    
    def isStringStyle(self, style):
        """
        Public method to check, if a style is a string style.
        
        @return flag indicating a string style (boolean)
        """
        return False
    
    def defaultKeywords(self, kwSet):
        """
        Public method to get the default keywords.
        
        @param kwSet number of the keyword set (integer)
        @return string giving the keywords (string) or None
        """
        return QsciLexerProperties.keywords(self, kwSet)
