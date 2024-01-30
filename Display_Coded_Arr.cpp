#include "Library.h"

void Display_Coded_Arr(int** Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (j != 12)
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