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

/* Sample program to show Motif UI creation and internationalization. */

#include <Xm/Xm.h>
#include <Xm/PushB.h>

#include <stdio.h>

/* Function to say hello */
void say_hello(Widget w, XtPointer client_data, XtPointer event_data)
{
    printf("Hello!\n");
}

int main(int argc, char *argv[])
{
    Widget toplevel, button;
    XtAppContext  app;
    XmString label;

    toplevel = XtVaAppInitialize(&app, "Hello", NULL, 0,
                                 &argc, argv, NULL, NULL);

    label = XmStringCreateSimple("Push here to say hello");
    button = XtVaCreateManagedWidget("pushme", xmPushButtonWidgetClass, toplevel,
                                     XmNlabelString, label, NULL);
    XmStringFree(label);
    XtAddCallback(button, XmNactivateCallback, say_hello, NULL);

    XtRealizeWidget(toplevel);
    XtAppMainLoop(app);

    return 0;
}
