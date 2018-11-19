#ifndef __INFOPANE_H__
#define __INFOPANE_H__
#include"Pane.h"
#include<ncurses.h>

class InfoPane : public Pane {
public:
InfoPane(int x, int y, int w, int h);
void draw();
void draw_name(char name[100]);

};
#endif
