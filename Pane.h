#ifndef __PANE_H__
#define __PANE_H__
#include<ncurses.h>
class Pane {
protected :
int width_, height_;
int x_, y_;
WINDOW *win_;
public:
  Pane(int x, int y, int w, int h);
  virtual ~Pane();
  virtual void draw();
  virtual void draw_score(int score);
  virtual void draw_name(char name[100]){}
  };
#endif
