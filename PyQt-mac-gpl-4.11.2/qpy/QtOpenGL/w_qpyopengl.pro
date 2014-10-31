CONFIG += x86_64
QMAKE_MAC_SDK = /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
# Tell the original .pro file about additional directories.
INCLUDEPATH = "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7" "../../QtOpenGL" "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtOpenGL"
CONFIG += release
VPATH = /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtOpenGL
include(/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtOpenGL/qpyopengl.pro)
