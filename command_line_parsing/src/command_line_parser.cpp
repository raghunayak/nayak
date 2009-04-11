/*
 * Copyright (c) 2009 Raghavendra Nayak
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
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
