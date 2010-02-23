################################################################################
#
# Copyright (C) 2009 Raghavendra Nayak
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
################################################################################

QT       += gui

# The application version
VERSION = 1.0
DATE = "28-Nov-2009"

# Define the preprocessor macro to get the application version in our application.
DEFINES += APP_VERSION=\\\"$$VERSION\\\" APP_DATE=\\\"$$DATE\\\"

TARGET = AppVersion
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
