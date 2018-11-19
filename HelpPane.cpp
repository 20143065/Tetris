#include"HelpPane.h"

HelpPane::HelpPane(int x, int y, int w, int h) : Pane(x,y,w,h){}

void HelpPane::draw()
{
  init_pair(2, COLOR_WHITE, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(2));
  for (int i=0; i<height_; i++)
  mvwhline(win_, i, 0, ACS_CKBOARD, width_);
  mvwprintw(win_, 0,0, "HELP PANE");
  wattroff(win_, COLOR_PAIR(2));
  wrefresh(win_);

  init_pair(41, COLOR_BLACK, COLOR_WHITE);
  wattron(win_, COLOR_PAIR(41));
  mvwprintw(win_, 3,1, " RIGHT_KEY : MOVE RIGHT");
  mvwprintw(win_, 4,1, " LEFT_KEY  : MOVE LEFT ");
  mvwprintw(win_, 5,1, " UNDER_KEY : MOVE DOWN ");
  mvwprintw(win_, 6,1, " UP_KEY    : ROTATE    ");
  mvwprintw(win_, 7,1, " SPACE_BAR : SPACE BAR ");
  mvwprintw(win_, 8,1, " Q         : END GAME  ");
  wattroff(win_, COLOR_PAIR(41));
  wrefresh(win_);
}
