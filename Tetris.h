#ifndef __TETRIS_H__
#define __TETRIS_H__

#include"Pane.h"
#include"InfoPane.h"
#include"BoardPane.h"
#include"StatPane.h"
#include"HelpPane.h"
#include"NextPane.h"
#include"block.h"
#include"Pane.h"

#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

class Tetris
{
Pane *infoPane_, *helpPane_, *nextPane_, *boardPane_, *statPane_;
Block* block_;
Block* block1_[7];
int count_left;


private:
  int x,y;
  int board[20][10];
  int score;
  int rotate;
  int random;


public:

Tetris();
~Tetris();
void play();
void updateScreen();

int moveBlock(int dir);
void checkLine();
bool crash(int a, int b);
void input_name(char name[]);
};

#endif
