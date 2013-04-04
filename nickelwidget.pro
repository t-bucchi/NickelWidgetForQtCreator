CONFIG      += designer plugin
TARGET      = $$qtLibraryTarget($$TARGET)
TEMPLATE    = lib
QTDIR_build:DESTDIR     = $$QT_BUILD_TREE/plugins/designer

RESOURCES   = widget.qrc

HEADERS     = NickelWidgets.h
SOURCES     = NickelWidgets.cpp

HEADERS     += TouchDropDownInterface.h
SOURCES     += TouchDropDownInterface.cpp

HEADERS     += TouchLabelInterface.h
SOURCES     += TouchLabelInterface.cpp

HEADERS     += TouchCheckBoxInterface.h
SOURCES     += TouchCheckBoxInterface.cpp

HEADERS     += RadioButtonInterface.h
SOURCES     += RadioButtonInterface.cpp

HEADERS     += TouchSliderInterface.h
SOURCES     += TouchSliderInterface.cpp

HEADERS     += N3ButtonLabelInterface.h
SOURCES     += N3ButtonLabelInterface.cpp

HEADERS     += WirelessPaginationWidgetInterface.h
SOURCES     += WirelessPaginationWidgetInterface.cpp

# install
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target
