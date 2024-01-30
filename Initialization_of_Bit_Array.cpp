#include "Library.h"

void Initialization_of_Bit_Array(int** Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = new int[16];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			Arr[i][j] = 0;
		}
	}

	return;
}