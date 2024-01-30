#include "Library.h"
#include "Prototypes.h"

string Decode(int** Coded_Arr, int size, int** Decoded_Arr)
{
	string Decoded_Str;

	int** Checking_Arr = new int* [size];
	Initialization_of_Coded_Array(Checking_Arr, size);

	Check(Checking_Arr, size, Coded_Arr);

	for (int i = 0; i < size; i++)
	{
		int f = 0, j = 0;

		while (j < 16)
		{
			if (f != 0 && f != 1 && f != 3 && f != 7 && f != 15)
			{
				Decoded_Arr[i][j] = Checking_Arr[i][f];
				j++;
				f++;
			}
			else
			{
				f++;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		int x = 0, number = 0;
		for (int j = 7; j > -1; j--)
		{
			number += pow(2, x) * Decoded_Arr[i][j];
			x++;
		}
		char num;
		num = number;
		Decoded_Str += num;

		x = 0, number = 0;
		for (int j = 15; j > 7; j--)
		{
			number += pow(2, x) * Decoded_Arr[i][j];
			x++;
		}
		num = number;
		Decoded_Str += num;
	}

	return Decoded_Str;
}