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

int main(int argc, char *argv[])
{
    command_line_parser parser(argc, argv);

    parser.set_style("unix");
    parser.set_style("windows");

    parser.set_style(command_line_parser::UNIX);
    parser.set_style(command_line_parser::WINDOWS);

    parser.set_style(command_line_parser::CUSTOM, "---");

    // this will take from style
    parser.set_keyword("help");
    parser.set_keyword("version");

    int version_keyword = parser.set_keyword("-version"); // will be taken as ----version or appended

    parser.set_keyword("--version", command_line_parser::REPLACE);
    parser.set_keyword("--version", "replace");

    int *keywordlist = parser.set_keywords("version new name the version", COMMA_SEPARATED);

    parser.replace(" ", "_");
    parser.replace_comma_with_space();

    parser.parse();

    command_line_parser::iterator itr = parser.instace("version");

    if (itr != parser.end())
    {
        itr++;
        if(itr.is_keyword())
        {
            std::cout<<"\nError: parameter missing!\n";
        }
    }

    command_line_parser::keyword_iterator key_itr;

    for (itr = parser.begin(); itr != parser.end(); ++itr)
    {
        switch(itr.get_num())
        {
        case 0:
            {
            }
            break;
        case 1:
            {
            }
            break;
        default:
            {
            }
            break;
        }
    }

    return 0;
}

// to avoid the string check each and everytime.
// auto parse is to true.
