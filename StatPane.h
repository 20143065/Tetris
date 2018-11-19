#ifndef __STATPANE_H__
#define __STATPANE_H__
#include"Pane.h"
#include"block.h"

class StatPane : public Pane {
public:
StatPane(int x, int y, int w, int h);
void draw();
void draw_score(int score);
};
#endif
