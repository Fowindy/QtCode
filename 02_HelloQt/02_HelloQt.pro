#QT += widgets   #注意!!!此处widgets首字母为小写

#报错:QApplication: No such file or directory的解决方法
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp
