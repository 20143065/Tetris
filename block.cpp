#include <iostream>
#include <curses.h>
#include "block.h"

O_block::O_block() : Block()
{
	Block_init();
	setBlock(0,0,1);
	setBlock(0,1,1);
	setBlock(1,0,1);
	setBlock(1,1,1);
}
void O_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,0,1);
    setBlock(0,1,1);
    setBlock(1,0,1);
    setBlock(1,1,1);
    break;

    case 1:
    setBlock(0,0,1);
    setBlock(0,1,1);
    setBlock(1,0,1);
    setBlock(1,1,1);
    break;

    case 2:
    setBlock(0,0,1);
    setBlock(0,1,1);
    setBlock(1,0,1);
    setBlock(1,1,1);
    break;

    case 3:
    setBlock(0,0,1);
    setBlock(0,1,1);
    setBlock(1,0,1);
    setBlock(1,1,1);
    break;
  }
}





L_block::L_block() : Block()
{
	Block_init();
	setBlock(0,1,2);
	setBlock(1,1,2);
	setBlock(2,1,2);
	setBlock(2,2,2);
}

void L_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,1,2);
  	setBlock(1,1,2);
  	setBlock(2,1,2);
  	setBlock(2,2,2);
    break;

    case 1:
    setBlock(1,0,2);
    setBlock(1,1,2);
    setBlock(1,2,2);
    setBlock(0,2,2);
    break;

    case 2:
    setBlock(0,0,2);
    setBlock(0,1,2);
    setBlock(1,1,2);
    setBlock(2,1,2);
    break;

    case 3:
    setBlock(1,0,2);
    setBlock(1,1,2);
    setBlock(1,2,2);
    setBlock(2,0,2);
    break;
  }
}






J_block::J_block() : Block()
{
	Block_init();
	setBlock(0,1,3);
	setBlock(1,1,3);
	setBlock(2,1,3);
	setBlock(2,0,3);
}
void J_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,1,3);
  	setBlock(1,1,3);
  	setBlock(2,1,3);
  	setBlock(2,0,3);
    break;

    case 1:
    setBlock(1,0,3);
  	setBlock(1,1,3);
  	setBlock(1,2,3);
  	setBlock(2,2,3);
    break;

    case 2:
    setBlock(0,1,3);
  	setBlock(1,1,3);
  	setBlock(2,1,3);
  	setBlock(0,2,3);
    break;

    case 3:
    setBlock(0,0,3);
  	setBlock(1,0,3);
  	setBlock(1,1,3);
  	setBlock(1,2,3);
    break;
  }
}





S_block::S_block() : Block()
{
	Block_init();
	setBlock(0,1,4);
	setBlock(1,1,4);
	setBlock(1,2,4);
	setBlock(2,2,4);
}
void S_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,1,4);
  	setBlock(1,1,4);
  	setBlock(1,2,4);
  	setBlock(2,2,4);
    break;

    case 1:
    setBlock(0,1,4);
  	setBlock(0,2,4);
  	setBlock(1,0,4);
  	setBlock(1,1,4);
    break;

    case 2:
    setBlock(0,1,4);
  	setBlock(1,1,4);
  	setBlock(1,2,4);
  	setBlock(2,2,4);
    break;

    case 3:
    setBlock(0,1,4);
  	setBlock(0,2,4);
  	setBlock(1,0,4);
  	setBlock(1,1,4);
    break;
  }
}





Z_block::Z_block() : Block()
{
	Block_init();
	setBlock(0,1,5);
	setBlock(1,0,5);
	setBlock(1,1,5);
	setBlock(2,0,5);
}
void Z_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,1,5);
  	setBlock(1,0,5);
  	setBlock(1,1,5);
  	setBlock(2,0,5);
    break;

    case 1:
    setBlock(0,0,5);
  	setBlock(0,1,5);
  	setBlock(1,1,5);
  	setBlock(1,2,5);
    break;

    case 2:
    setBlock(0,1,5);
  	setBlock(1,0,5);
  	setBlock(1,1,5);
  	setBlock(2,0,5);
    break;

    case 3:
    setBlock(0,0,5);
  	setBlock(0,1,5);
  	setBlock(1,1,5);
  	setBlock(1,2,5);
    break;
  }
}





T_block::T_block() : Block()
{
	Block_init();
	setBlock(0,1,6);
	setBlock(1,0,6);
	setBlock(1,1,6);
	setBlock(1,2,6);
}
void T_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,1,6);
  	setBlock(1,0,6);
  	setBlock(1,1,6);
  	setBlock(1,2,6);
    break;

    case 1:
    setBlock(0,1,6);
  	setBlock(1,0,6);
  	setBlock(1,1,6);
  	setBlock(2,1,6);
    break;

    case 2:
    setBlock(1,0,6);
  	setBlock(1,1,6);
  	setBlock(1,2,6);
  	setBlock(2,1,6);
    break;

    case 3:
    setBlock(0,1,6);
  	setBlock(1,1,6);
  	setBlock(1,2,6);
  	setBlock(2,1,6);
    break;
  }
}

I_block::I_block() : Block()
{
	Block_init();
	setBlock(0,1,7);
	setBlock(1,1,7);
	setBlock(2,1,7);
	setBlock(3,1,7);
}
void I_block::rotate_block(int rotate)
{
  Block_init();
  rotate=rotate%4;
  switch(rotate)
  {
    case 0:
    setBlock(0,1,7);
  	setBlock(1,1,7);
  	setBlock(2,1,7);
  	setBlock(3,1,7);
    break;

    case 1:
    setBlock(1,0,7);
  	setBlock(1,1,7);
  	setBlock(1,2,7);
  	setBlock(1,3,7);
    break;

    case 2:
    setBlock(0,1,7);
  	setBlock(1,1,7);
  	setBlock(2,1,7);
  	setBlock(3,1,7);
    break;

    case 3:
    setBlock(1,0,7);
  	setBlock(1,1,7);
  	setBlock(1,2,7);
  	setBlock(1,3,7);
    break;
  }
}
