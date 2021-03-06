/* ==============================================================
bstone: A source port of Blake Stone: Planet Strike

Copyright (c) 1992-2013 Apogee Entertainment, LLC
Copyright (c) 2013 Boris Bendovsky (bibendovsky@hotmail.com)

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the
Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
============================================================== */


#ifndef ID_PM_H
#define ID_PM_H


const int PMPageSize = 4096;


extern int ChunksInFile;
extern int PMSpriteStart;
extern int PMSoundStart;

extern char PageFileName[13];


void PM_Startup();
void PM_Shutdown();
void* PM_GetPage(int page_number);
void* PM_GetSoundPage(int page_number);
void* PM_GetSpritePage(int page_number);


#endif // ID_PM_H
