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

#ifndef _COMMANDLINEPARSER_H_
#define _COMMANDLINEPARSER_H_

#include <string>
#include <cstring>

#include "config.h"

BeginCliNamespace

// header file containing the inline methods
#include "commandlineparser_inl.h"

class CommandLineParser {
public:
    /// the parameter style
    enum ParameterStyle {
        UnixParameterStyle = 0x0,
        WindowsParameterStyle,
        CustomParameterStyle
    };

    void setStyle(std::string style);

private:
    /// version
    /// @todo add version member

    /// the style
    ParameterStyle m_parameter_style;
    std::wstring m_parameter_style_string;


    /*
public:
    /// @brief enum which indicates the device to use for the output.
    enum device_name {
        STDERR = 0x0,
        STDOUT,
        FILEOUT
    };

    enum parameterStyle {
        UNIX,
        WINDOWS
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
     * /
    void set_help_string(const std::string &help_msg);

    /**
     * @brief method to add the new help string to the end of the current help
     *        string.
     * @param[in] helpMsg the help message. This string would be appended to the
     *            current help string.
     * @return none.
     * /
    void add_help_string(const std::string &help_msg);

    /**
     * @brief returns the help string.
     * @param none.
     * @return the help string.
     * /
    std::string get_help(void);

    /**
     * @brief method to show help. Help will be shown to the device.
     * @param device   the device, where to output the help.
     * @return none.
     * /
    void show_help(device_name device = STDERR);




            ////////////////////////////////////////////////////////////////////////////
            /// @brief method to parse the inputs.
            /// @param none.
            /// @return none.
            ////////////////////////////////////////////////////////////////////////////
            void parse(void);

            ////////////////////////////////////////////////////////////////////////////
            /// @brief method to set help string.
            /// @param[in] helpMsg the help message. The help string value would be set
            ///            to this. Any existing help string would be replaced with this
            ///            string.
            /// @return none.
            ////////////////////////////////////////////////////////////////////////////
            void set_help_string(const std::string &help_msg);

            ////////////////////////////////////////////////////////////////////////////
            /// @brief method to add the new help string to the end of the current help
            ///        string.
            /// @param[in] helpMsg the help message. This string would be appended to the
            ///            current help string.
            /// @return none.
            ////////////////////////////////////////////////////////////////////////////
            void add_help_string(const std::string &help_msg);

            ////////////////////////////////////////////////////////////////////////////
            /// @brief returns the help string.
            /// @param none.
            /// @return the help string.
            ////////////////////////////////////////////////////////////////////////////
            inline std::string get_help(void) {
                return m_help_string;
            }
    void show_help(device_name device = STDERR);
    void set_style(std::string style_str);

            /// @brief method to set the command line argument style.
            /// @param style the style enum.
            /// @return none.
            void set_style(uint style);

    void set_keyword(std::wstring keyword);

    void set_style(char *style_string);
    void set_style(std::string style_string);
    void set_style(std::wstring style_string);

    parameterStyle style(void);

private:
    // private data

    /// the help string
    std::string m_help_string;

    /// the argument counter
    int m_args;

    /// auto parse flag
    bool m_auto_parse;

    /// current command line argument style
    parameterStyle mCurrentStyle;

    // private methods

    ////////////////////////////////////////////////////////////////////////////
    /// @brief method to initialize internal data members.
    /// @param none.
    /// @return none.
    ////////////////////////////////////////////////////////////////////////////
    void init(void);*/
};

}; // end of cli namespace

#endif // #ifndef _COMMANDLINEPARSER_H_
