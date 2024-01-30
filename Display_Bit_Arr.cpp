#include "Library.h"

void Display_Bit_Arr(int** Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (j != 8)
			{
				cout << Arr[i][j];
			}
			else
			{
				cout << " " << Arr[i][j];
			}
		}
		cout << endl;
	}

	return;
}