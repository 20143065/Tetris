#include"StatPane.h"

StatPane::StatPane(int x, int y, int w, int h) : Pane(x,y,w,h){}

void StatPane::draw()
{
}

void StatPane::draw_score(int value)
{
  init_pair(5, COLOR_RED, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(5));
  box(win_, 0, 0);
  mvwprintw(win_, 0, 5, "STATISTICS");
  wattroff(win_, COLOR_PAIR(5));
  wrefresh(win_);

  init_pair(13, COLOR_BLUE, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(13));
  mvwprintw(win_, 4, 6, "SCORE");
  mvwprintw(win_, 4, 12, "%d",value);

  wattroff(win_, COLOR_PAIR(13));
  wrefresh(win_);

}
