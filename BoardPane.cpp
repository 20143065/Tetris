#include"BoardPane.h"

BoardPane::BoardPane(int x, int y, int w, int h) : Pane(x,y,w,h){}

void BoardPane::draw()
{
}
void BoardPane::print(int board[20][10],int x,int y,Block* block_)
{
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
  wattron(win_, COLOR_PAIR(4));
  box(win_, 0,0);
  for (int i=1; i<height_-1; i++)
  mvwhline(win_, i, 1, ACS_CKBOARD, width_-2);
  wattroff(win_, COLOR_PAIR(4));
  wrefresh(win_);

	init_pair(20,COLOR_YELLOW,COLOR_YELLOW);
  init_pair(21,COLOR_BLUE,COLOR_BLUE);
  init_pair(22,COLOR_GREEN,COLOR_GREEN);
  init_pair(23,COLOR_MAGENTA,COLOR_MAGENTA);
  init_pair(24,COLOR_RED,COLOR_RED);
  init_pair(25,COLOR_CYAN,COLOR_CYAN);
  init_pair(26,COLOR_WHITE,COLOR_WHITE);

  	for(int i = 0; i < 20; i++)
  	{
  		for(int j = 0; j < 10; j ++)
  		{
  			if(board[i][j] != 0)
  			{
  				wattron(win_, COLOR_PAIR(board[i][j]+19));
  				mvwprintw(win_, i+1, j*2+1, "  ");
  				wattroff(win_, COLOR_PAIR(board[i][j]+19));
  			}
  			else
  			{
  				wattron(win_, COLOR_PAIR(1));
  				mvwprintw(win_, i+1, j*2+1, "  ");
  				wattroff(win_, COLOR_PAIR(1));
  			}
  		}
  	}

  	for(int i = 0; i < 4; i++)
  	{
  		for(int j = 0; j <4; j++)
  		{
  			if(block_ -> get_shape(i,j) != 0)
  			{
  				wattron(win_,COLOR_PAIR(block_ -> get_shape(i,j) + 19));
  				mvwprintw(win_, x+i+1,(y+j)*2 +1,"  ");
  				wattroff(win_,COLOR_PAIR(block_-> get_shape(i,j) + 19));
  			}
  		}
  	}
  	wrefresh(win_);
}
