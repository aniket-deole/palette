/***
  Copyright (C) 2013 Aniket Deole <aniket.deole@gmail.com>
  This program is free software: you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License version 2.1, as published
  by the Free Software Foundation.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranties of
  MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
  PURPOSE.  See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along
  with this program.  If not, see <http://www.gnu.org/licenses/>.
 ***/

#include <gtkmm/box.h>
#include <gtkmm/widget.h>
#include <pthread.h>
#include <iostream>

#include <maintoolbar.hh>

MainToolbar::MainToolbar () {
  Glib::RefPtr<Gtk::StyleContext> sc = get_style_context(); 
  sc->add_class("primary-toolbar");

  set_show_close_button(true);
  show_all ();
}

MainToolbar::~MainToolbar () {

}

void MainToolbar::exitPalette () {
  exit (0);
}

