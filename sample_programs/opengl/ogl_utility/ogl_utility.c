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

/* OpenGL utility functions collections */

#include "ogl_utility.h"
#include <GL/gl.h>

bool hasOpenGLExtension(const char *extensionName)
{
    const GLubyte *extensions = NULL;
    const GLubyte *start;
    GLubyte *where, *terminator;

    // Check if the requested extension name is given as empty string.
    if (*extension_name == '\0')
        return false;

    // Check if the requested extension name contains any spaces
    if (where = (GLubyte *) strchr(extension_name, ' '))
        return false;

    // get the list of available OpenGL extensions
    extensions = glGetString(GL_EXTENSIONS);

    start = extensions;

    for (;;) {
        where = (GLubyte *) strstr((const char *) start, extension_name);

        // if the given extension name is not found
        if (!where)
            break;

        terminator = where + strlen(extension_name);

        if (where == start || *(where - 1) == ' ') {
            if (*terminator == ' ' || *terminator == '\0')
                return true;
            start = terminator;
        }
    }
    return false;
}
