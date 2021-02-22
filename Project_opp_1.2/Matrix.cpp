#include "Matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool Matrix::SetRow(int value)
{
	if (value > 0)
	{
		row = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Matrix::SetCol(int value)
{
	if (value > 0)
	{
		col = value;
		return true;
	}
	else
	{
		return false;
	}
}
bool Matrix::Init(int rowCount, int colCount)
{
	bool result = false;
	if (SetRow(rowCount) && SetCol(colCount))
	{
		arr = new float* [GetRow()];
		for (int i = 1; i <= rowCount; i++)
			arr[i] = new float[colCount];
		// нули
		for (int i = 1; i <= rowCount; i++)
			for (int j = 1; j <= colCount; j++)
				arr[i][j] = 0;
       result = true;
	}
	return result;
}
float Matrix::GetArr(int row_index, int col_index)
{
	if ((row >= row_index && row_index > 0) && (col >= col_index && col_index > 0))
	{
		return arr[row_index][col_index];
	}
	else
	{
		return 0;
	}
}

bool Matrix::SetArr(int row_index, int col_index, float value)
{
	bool result = false;
	if ((row >= row_index && row_index > 0) && (col >= col_index && col_index > 0))
	{
		arr[row_index][col_index] = value;
		result = true;
	}
	return result;
}
void Matrix::Read()
{
	int row;
	int col;
	do
	{
		cout << " row =  "; cin >> row;
		cout << " col =  "; cin >> col;
	} while (!Init(row, col));
	float value;
	for (int i = 1; i <= row; i++)  
	{
		cout << "Vvodumo " << i << " ryadok" << endl;
		for (int j = 1; j <= col; j++)   
		{
			cout << "Vvedite chislo: ";  
			//cin >> arr[i][j]; 
			cin >> value;
			SetArr(i, j, value);
		}
	}
}
void Matrix::Display()
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		  cout << setw(6) << arr[i][j];
		  cout << endl;
	}
}
float Matrix::GetMinValue()
{
	float min_value = arr[1][1];
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			if (min_value > arr[i][j])
			{
				min_value = arr[i][j];
			}
	return min_value;
}
float Matrix::GetMaxValue()
{
	float max_value = arr[1][1];
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			if (max_value < arr[i][j])
			{
				max_value = arr[i][j];
			}
	return max_value;
}
float Matrix::GetSumma()
{
	float Summa = 0;
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			Summa += arr[i][j];
	return Summa;
}

