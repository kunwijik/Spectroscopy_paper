CONFIG += x86_64
QMAKE_MAC_SDK = /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
# Tell the original .pro file about additional directories.
INCLUDEPATH = "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7" "../../QtDBus" "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDBus"
CONFIG += release
VPATH = /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDBus
include(/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDBus/qpydbus.pro)
