/*
* Copyright (C) 2009 Raghavendra Nayak
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

#include "command_line_parser.h"
#include "debug_helper.h"

#include <iostream>

command_line_parser::command_line_parser()
{
    // initialize internal data members
    init();
}

// parameterized constructor
command_line_parser::command_line_parser(int argc, char *argv[])
{
    init();

    m_args = argc;
}

command_line_parser::~command_line_parser()
{
    // nothing to do here.
}

////////////////////////////////////////////////////////////////////////////////

// Method to set help string.
void command_line_parser::set_help_string(const std::string &help_msg)
{
    // replace the current help string
    m_help_string = help_msg;
}

// Method to add the new help string to the end of the current help string.
void command_line_parser::add_help_string(const std::string &help_msg)
{
    // append
    m_help_string += help_msg;
}

// returns the help string.
std::string command_line_parser::get_help(void)
{
    return m_help_string;
}

// Method to show help. Help will be shown to the device given.
void command_line_parser::show_help(device_name device)
{
    switch(device)
    {
    case STDERR:
        {
            std::cerr<<m_help_string;
            std::cerr.flush();
        }
        break;
    case STDOUT:
        {
            std::cout<<m_help_string;
            std::cout.flush();
        }
        break;
    case FILEOUT:
        {
            fixme_str("FILEOUT support");
        }
        break;
    default:
        {
            debug_str("Unknown device given");
        }
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void command_line_parser::init(void)
{
    m_args = 0;
}

////////////////////////////////////////////////////////////////////////////////
