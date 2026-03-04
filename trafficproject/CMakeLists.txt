cmake_minimum_required(VERSION 3.19)
project(trafficproject LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Sql)

qt_standard_project_setup()

# UI Files
set(UI_FILES
    dashboard.ui
    login.ui
    userdashboard.ui
    policedashboard.ui
    resetpassword.ui
    addviolationdialog.ui
    updateviolationdialog.ui
    userreportpage.ui
    policereportpage.ui
)

# Sources
set(SOURCES
    main.cpp
    dashboard.cpp dashboard.h
    login.cpp login.h
    userdashboard.cpp userdashboard.h
    policedashboard.cpp policedashboard.h
    resetpassword.cpp resetpassword.h
    addviolationdialog.cpp addviolationdialog.h
    updateviolationdialog.cpp updateviolationdialog.h
    userreportpage.cpp userreportpage.h
    policereportpage.cpp policereportpage.h

)

qt_add_executable(trafficproject
    WIN32 MACOSX_BUNDLE
    ${SOURCES}
    ${UI_FILES}
    createreportdialog.h createreportdialog.cpp createreportdialog.ui
    updatereportdialog.h updatereportdialog.cpp updatereportdialog.ui
    paymentdialog.h paymentdialog.cpp paymentdialog.ui

)

target_link_libraries(trafficproject PRIVATE Qt6::Core Qt6::Widgets Qt6::Sql)

include(GNUInstallDirs)
install(TARGETS trafficproject
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET trafficproject
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
