#include"InfoPane.h"

InfoPane::InfoPane(int x, int y, int w, int h) : Pane(x,y,w,h){}

void InfoPane::draw()
{
}

void InfoPane::draw_name(char name[100])
{
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(1));
  for (int i=0; i<height_; i++)
  mvwhline(win_, i, 0, ACS_CKBOARD, width_);
  mvwprintw(win_, 0,0, "INFO PANE");
  wattroff(win_, COLOR_PAIR(1));
  wrefresh(win_);

  init_pair(40, COLOR_WHITE, COLOR_GREEN);
  wattron(win_, COLOR_PAIR(40));
  mvwprintw(win_, 2,1, "USER NAME");
  mvwprintw(win_, 3,3, "=> %s", name);
  wattroff(win_, COLOR_PAIR(40));
  wrefresh(win_);
}
