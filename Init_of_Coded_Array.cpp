#include "Library.h"

void Initialization_of_Coded_Array(int** Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = new int[21];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			Arr[i][j] = 0;
		}
	}

	return;
}