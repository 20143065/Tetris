#ifndef __BOARDPANE_H__
#define __BOARDPANE_H__
#include"Pane.h"
#include"block.h"
class BoardPane : public Pane {
public:
BoardPane(int x, int y, int w, int h);
void draw();
void print(int board[20][10],int x,int y,Block* block_);
};
#endif
