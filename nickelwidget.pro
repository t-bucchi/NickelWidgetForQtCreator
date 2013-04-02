CONFIG      += designer plugin
TARGET      = $$qtLibraryTarget($$TARGET)
TEMPLATE    = lib
QTDIR_build:DESTDIR     = $$QT_BUILD_TREE/plugins/designer

HEADERS     = NickelWidgets.h
SOURCES     = NickelWidgets.cpp

HEADERS     += TouchDropDownInterface.h
SOURCES     += TouchDropDownInterface.cpp

HEADERS     += TouchLabelInterface.h
SOURCES     += TouchLabelInterface.cpp

# install
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target
