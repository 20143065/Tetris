#include"Tetris.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>

int main(int argc, char* argv[])
{
	std::ifstream inStream;
	char n[100];
	int key, state = 0;
	int seed;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout <<"                         **************************************" << endl;
	cout <<"                         *                                    *" << endl;
	cout <<"                         *               TETRIS               *" << endl;
	cout <<"                         *                                    *" << endl;
	cout <<"                         **************************************" << endl;
	cout << endl << endl << endl << endl << endl << endl << endl << endl<< endl << endl;
	cout << "                                     USER NAME : ";
	cin >> n;


	Tetris game;
  game.play();
	game.input_name(n);
	if (argc < 2)
	{
		while (state == 0)
		{
			halfdelay(5);
			key = getch();
			if(key==EOF)
			{
				game.moveBlock(KEY_DOWN);
			}
			if (key == 'q') break;
			state = game.moveBlock(key);
		}
	}
	else
	{
		inStream.open(argv[1]);
		if (!inStream.fail())
		{
			while (1)
			{
				char ch;

				inStream >> ch;
				if (inStream.eof()) break;
				if (ch == 'q') break;

				switch (ch)
				{
				case 'l':
					game.moveBlock(KEY_LEFT);
					break;
				case 'r':
					game.moveBlock(KEY_RIGHT);
					break;
				case 'g':
					game.moveBlock(KEY_DOWN);
					break;
				case 'd':
					game.moveBlock(32);
					break;
				}
			}
		}
	}
	getch();
	return 0;
}
