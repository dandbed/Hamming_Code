#include "Library.h"
#include "Prototypes.h"

void Encode(int** Bit_Code, int size, int** Coded_Arr)
{
	int x = 0, i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		x = 0;
		j = 0;
		while (j < 21)
		{
			if (j != 0 && j != 1 && j != 3 && j != 7 && j != 15)
			{
				Coded_Arr[i][j] = Bit_Code[i][x];
				x++;
				j++;
			}
			else
			{
				j++;
			}
		}
	}

	Calculation_of_control_bits(Coded_Arr, size);

	return;
}