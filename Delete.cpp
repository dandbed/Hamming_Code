#include "Library.h"

void Delete(int** Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		delete[] Arr[i];
	}
	delete[] Arr;

	return;
}