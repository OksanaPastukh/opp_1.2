#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix makeMatrix(int row, int col)
{
	Matrix n;
	if (!n.Init(row, col))
		cout << "wrong argument to Init " << endl;
	return n;
}

int main()
{
	Matrix m;
	m.Read();
	m.Display();
	cout << "Min value =  " << m.GetMinValue() << endl;
	cout << "Max value =  " << m.GetMaxValue() << endl;
	cout << "Summa =  " << m.GetSumma() << endl;
	return 0;
}