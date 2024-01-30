#include "Library.h"

void Initialization_of_ASCII_Array(int** Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = new int[2];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			Arr[i][j] = 0;
		}
	}

	return;
}