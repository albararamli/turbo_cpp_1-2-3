//////////////////////////////////////
//       By AL Bara Ramli           //
//       opencpp@yahoo.com          //
//       Copyright (C) 2007         //
//       Tripoli Libya              //
//////////////////////////////////////
//this program is distributed under //
//the GNU General Public License.   //
//////////////////////////////////////

/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
char msg[10];
int a=12,b=10,x=50,y=50;
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
sprintf(msg,"%d %d",a,b);
outtextxy(x,y,msg);
getch();
}

