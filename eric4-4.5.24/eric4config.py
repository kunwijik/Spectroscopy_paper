# -*- coding: utf-8 -*-
#
# This module contains the configuration of the individual eric4 installation
#

_pkg_config = {
    'ericDir'              : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4',
    'ericPixDir'           : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/pixmaps',
    'ericIconDir'          : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/icons',
    'ericDTDDir'           : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/DTDs',
    'ericCSSDir'           : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/CSSs',
    'ericStylesDir'        : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/Styles',
    'ericDocDir'           : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/Documentation',
    'ericExamplesDir'      : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/Examples',
    'ericTranslationsDir'  : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/i18n',
    'ericTemplatesDir'     : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/DesignerTemplates',
    'ericCodeTemplatesDir' : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4/CodeTemplates',
    'ericOthersDir'        : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/eric4',
    'bindir'               : r'/usr/local/bin',
    'mdir'                 : r'/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages',
    'apidir'               : r'/opt/local/share/qt4/qsci/api',
    'apis'                 : ['eric4.api', 'zope-2.10.7.api', 'zope-2.11.2.api', 'zope-3.3.1.api', 'eric4.api', 'Ruby-1.8.7.api'],
    'macAppBundlePath'     : r'/Applications',
    'macAppBundleName'     : r'eric4.app',
}

def getConfig(name):
    '''
    Module function to get a configuration value.

    @param name the name of the configuration value (string).
    '''
    try:
        return _pkg_config[name]
    except KeyError:
        pass

    raise AttributeError, '"%s" is not a valid configuration value' % name
