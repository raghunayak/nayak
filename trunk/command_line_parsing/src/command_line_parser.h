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
