#include "Library.h"

void Code_correction(int** Checking_Arr, int size, int** Coded_Arr)
{
	int Sum_pos = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (j == 0 || j == 1 || j == 3 || j == 7 || j == 15)
			{
				if (Checking_Arr[i][j] != Coded_Arr[i][j])
				{
					Sum_pos += j;
				}
			}
		}
		if (Checking_Arr[i][Sum_pos] == 1)
		{
			Checking_Arr[i][Sum_pos] = 0;
		}
		else
		{
			Checking_Arr[i][Sum_pos] = 1;
		}
	}

	return;
}