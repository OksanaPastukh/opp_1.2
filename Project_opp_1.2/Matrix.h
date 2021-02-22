#pragma once
class Matrix
{
	float** arr;
	int row;
	int col;
	bool SetRow(int);
	bool SetCol(int);
public:
	int GetRow() const { return row; }
	int GetCol() const { return col; }
	bool Init(int, int);
	float GetArr(int, int);
	bool SetArr(int, int, float);
	void Read();
	void Display();
	float GetMinValue();
	float GetMaxValue();
	float GetSumma();
};

