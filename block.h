#ifndef BLOCK
#define BLOCK

class Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	Block()
	{
		for(int i = 0 ; i < width;i++)
			for(int j = 0; j <width; j++)
				board[i][j] = 0;
	}
	void Block_init()
	{
		for(int i = 0 ; i < width;i++)
			for(int j = 0; j <width; j++)
				board[i][j] = 0;
	}
	void setBlock(int x,int y,int value)
	{
		if(x < 0 || y < 0 || x >= width || y>= width)
    return;

		board[x][y] = value;
	}

	int get_shape(const int x,const int y)
	{
		if(x < 0 || y < 0 || x >= width || y>= width);
		return board[x][y];
	}

	virtual void rotate_block(int rotate)
	{
    return;
	}
	~Block();
};

class O_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	O_block();
	virtual void rotate_block(int rotate);
	~O_block();
};

class L_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	L_block();
	virtual void rotate_block(int rotate);
	~L_block();
};

class J_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	J_block();
	virtual void rotate_block(int rotate);
	~J_block();
};

class S_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	S_block();
	virtual void rotate_block(int rotate);
	~S_block();
};

class Z_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	Z_block();
	virtual void rotate_block(int rotate);
	~Z_block();
};

class T_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	T_block();
	virtual void rotate_block(int rotate);
	~T_block();
};

class I_block : public Block
{
private:
	static const int width = 4;
	int board[width][width];
public:
	I_block();
	virtual void rotate_block(int rotate);
	~I_block();
};

#endif
