#include "Library.h"
#include "Prototypes.h"

void Check(int** Checking_Arr, int size, int** Coded_Arr)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (j != 0 && j != 1 && j != 3 && j != 7 && j != 15)
			{
				Checking_Arr[i][j] = Coded_Arr[i][j];
			}
			else
			{
				Checking_Arr[i][j] = 0;
			}
		}
	}

	Calculation_of_control_bits(Checking_Arr, size);

	int count_summary = 0, x = 0, pos = 0, j = 0;

	for (int i = 0; i < size; i++)
	{
		int count = 0;

		while (pow(2, x) < 21)
		{
			pos = pow(2, x);
			j = pos - 1;

			if (Checking_Arr[i][j] == Coded_Arr[i][j])
			{
				count++;
			}

			x++;
		}
		if (count == 5)
		{
			count_summary++;
		}
	}

	if (count_summary == size)
	{
		cout << "Ошибок в коде Хэмминга нет";
	}
	else
	{
		Code_correction(Checking_Arr, size, Coded_Arr);
	}

	return;
}