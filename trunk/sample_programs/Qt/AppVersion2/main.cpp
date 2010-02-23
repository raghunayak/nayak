/*
 * Copyright (C) 2010 Raghavendra Nayak
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// This program shows how to use Qt version to set your application version.

#include <string>
#include <iostream>
#include <QApplication>

#define TO_STRING(str) #str
#define TO_STRING_(str) TO_STRING(str)

int main(int argc, char *argv[])
{
    // Retrieve the application version given in the Qt project file.
    std::string appVersion = TO_STRING_(APP_VERSION);
    std::string appDate = TO_STRING_(APP_DATE);

    std::cout<<"Application version: "<<appVersion
             <<", date: "<<appDate;

    QApplication app(argc, argv);

    // Setting the Application version
    app.setApplicationVersion(QString::fromStdString(appVersion));

    std::cout<<"\nThe application version returned through global qApp is "
             <<qApp->applicationVersion().toStdString();

    return 0;
}
