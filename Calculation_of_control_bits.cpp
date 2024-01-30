#include "Library.h"

void Calculation_of_control_bits(int** Arr, int size)
{
	int i = 0, j = 0, x = 0;

	while (i < size)
	{
		x = 0;

		while (pow(2, x) < 21)
		{
			int pos = pow(2, x);
			j = pos - 1;
			int count = 0, sum = 0;

			while (j < 21)
			{
				sum += Arr[i][j];
				count++;
				if (count == pos)
				{
					count = 0;
					j = j + pos;
				}
				j++;
			}

			j = pos - 1;
			Arr[i][j] = sum % 2;

			x++;
		}

		cout << endl;

		i++;
	}

	return;
}