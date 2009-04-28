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

#ifndef _COMMAND_LINE_PARSER_H_
#define _COMMAND_LINE_PARSER_H_

#include <string>
#include <stdio.h>

class command_line_parser {
public:
    /// @brief enum which indicates the device to use for the output.
    enum device_name {
        STDERR = 0x0,
        STDOUT,
        FILEOUT
    };

    /// @brief default constructor
    command_line_parser();

    /// @brief parameterized constructor
    command_line_parser(int argc, char *argv[]);

    /// @brief destructor
    virtual ~command_line_parser();

    /// @brief method to get the argument counter;
    /// @param none.
    /// @return the argument counter.
    int get_argument_counter(void)
    {
        return m_args;
    }

    /**
     * @brief method to set help string.
     * @param[in] helpMsg the help message. The help string value would be set
     *            to this. Any existing help string would be replaced with this
     *            string.
     * @return none.
     */
    void set_help_string(const std::string &help_msg);

    /**
     * @brief method to add the new help string to the end of the current help
     *        string.
     * @param[in] helpMsg the help message. This string would be appended to the
     *            current help string.
     * @return none.
     */
    void add_help_string(const std::string &help_msg);

    /**
     * @brief returns the help string.
     * @param none.
     * @return the help string.
     */
    std::string get_help(void);

    /**
     * @brief method to show help. Help will be shown to the device.
     * @param device   the device, where to output the help.
     * @return none.
     */
    void show_help(device_name device = STDERR);

private:
    // private methods

    /// @brief method to initialize internal data members.
    /// @param none.
    /// @return none.
    void init(void);

    // private data

    /// the help string
    std::string m_help_string;

    /// the argument counter
    int m_args;
};

#endif // #ifndef _COMMAND_LINE_PARSER_H_
