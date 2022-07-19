QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
#CONFIG -= qt
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bishop_black.cpp \
    bishop_white.cpp \
    board.cpp \
    chess.cpp \
    game_square.cpp \
    king_black.cpp \
    king_white.cpp \
    knight_black.cpp \
    knight_white.cpp \
    main.cpp \
    mainwindow.cpp \
    pawn_black.cpp \
    pawn_white.cpp \
    pieces.cpp \
    queen_black.cpp \
    queen_white.cpp \
    rook_black.cpp \
    rook_white.cpp \
    square_handler.cpp

HEADERS += \
    bishop_black.h \
    bishop_white.h \
    board.h \
    chess.h \
    game_square.h \
    king_black.h \
    king_white.h \
    knight_black.h \
    knight_white.h \
    mainwindow.h \
    pawn_black.h \
    pawn_white.h \
    pieces.h \
    queen_black.h \
    queen_white.h \
    rook_black.h \
    rook_white.h \
    square_handler.h

FORMS += \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc




