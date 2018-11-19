#include"Tetris.h"

Tetris::Tetris()
{
initscr();
start_color();
cbreak();
refresh();
infoPane_ = new InfoPane(1,1,25,5);
helpPane_ = new HelpPane(1,6,25,12);
nextPane_ = new NextPane(1,18,25,5);
boardPane_ = new BoardPane(30,1,22,22);
statPane_ = new StatPane(56,6,20,10);
for(int i=0;i<20;++i)
  for(int j=0;j<10;++j)
    board[i][j]=0;
x=0;
y=4;
rotate=0;
score=0;


block1_[0] = new O_block();
block1_[1] = new L_block();
block1_[2] = new J_block();
block1_[3] = new S_block();
block1_[4] = new Z_block();
block1_[5] = new T_block();
block1_[6] = new I_block();

srand(time(0));
random=rand()%7+1;
switch(random)
{
  case 1:
  block_=block1_[0];
  break;

  case 2:
  block_=block1_[1];
  break;

  case 3:
  block_=block1_[2];
  break;

  case 4:
  block_=block1_[3];
  break;

  case 5:
  block_=block1_[4];
  break;

  case 6:
  block_=block1_[5];
  break;

  case 7:
  block_=block1_[6];
  break;
}

}

Tetris::~Tetris()
{
delete infoPane_;
delete helpPane_;
delete nextPane_;
delete boardPane_;
delete statPane_;

endwin();
}

void Tetris::input_name(char name[])
{
  infoPane_->draw_name(name);
}


void Tetris::play()
{
  keypad(stdscr,TRUE);
  curs_set(0);
  updateScreen();
}

void Tetris::updateScreen()
{
helpPane_->draw();
nextPane_->draw();
((BoardPane*)boardPane_)->print(board, x, y,block_);
((StatPane *)statPane_)->draw_score(score);
}

int Tetris::moveBlock(int dir)
{


	switch(dir)
	{
	case KEY_DOWN:
		if (!crash(1,0))
			x++;
		break;
	case KEY_LEFT:
		if (!crash(0,-1))
			y--;
		break;
	case KEY_RIGHT:
		if (!crash(0,1))
			y++;
		break;
  case KEY_UP:
    ++rotate;
    block_->rotate_block(rotate);
    if (crash(0,0))
    {
     --rotate;
     block_->rotate_block(rotate);
    }
  break;

	case 32:
		while (!crash(1,0))
			x++;
		break;
	}

	if (crash(1,0))
	{
		for (int i = 0; i <  4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if(block_ -> get_shape(i,j) != 0)
				{
					board[x+i][y+j] = block_ -> get_shape(i,j);
				}
			}
		}

		for (int j = 0; j < 10; j++)
		{
			if (board[0][j] != 0)
			{
				((BoardPane*)boardPane_)->print(board, x, y,block_);
				return 1;
			}
		}

		x = 0, y = 4;
    srand(time(0));
    random=rand()%7+1;
    switch(random)
    {
      case 1:
      block_=block1_[0];
      break;

      case 2:
      block_=block1_[1];
      break;

      case 3:
      block_=block1_[2];
      break;

      case 4:
      block_=block1_[3];
      break;

      case 5:
      block_=block1_[4];
      break;

      case 6:
      block_=block1_[5];
      break;

      case 7:
      block_=block1_[6];
      break;
    }


		if (crash(1,0))
		{
			((BoardPane*)boardPane_)->print(board, x, y,block_);
			return 1;
		}
	}

	checkLine();
	((BoardPane*)boardPane_)->print(board, x, y,block_);

	return 0;
}


void Tetris::checkLine()
{
	int i, j, k;
	int check;


	i = 19;

	while (i >= 0)
	{
    check=1;
		for (j = 0; j<10; j++)
		{
			if (board[i][j] == 0)
			{
				check = 0;
				break;
			}
		}

		if (check == 1)
		{
			for (k = i - 1; k >= 0; k--)
			{
				for (j = 0; j<10; j++)
				{
					board[k + 1][j] = board[k][j];
				}
			}
			for (j = 0; j<10; j++)
			{
				board[0][j] = 0;
			}
      score=score+1;
      ((StatPane *)statPane_)->draw_score(score);
			continue;
		}
		i--;
	}
}

bool Tetris::crash(int a,int b)
{

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if(block_ -> get_shape(i, j) != 0 && ((x + a + i) < 0 || (x + a + i) > 19 || (y + b + j) < 0 || (y + b + j) > 9 || board[x + a + i][y + b + j] != 0))
			{
				return true;
			}
		}
	}

	return false;
}
