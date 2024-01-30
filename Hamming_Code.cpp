#include "Library.h"
#include "Prototypes.h"

int main()
{
	setlocale(0, "");

	string Str, Decoded_Str;
	int size = 0, f = 0, i = 0, j = 0, h = 0;

	cout << "Введите строку для кодирования кодом Хэмминга:" << endl;
	getline(cin, Str);
	cout << endl;
	
	if (Str.size() % 2 == 1)
	{
		size = Str.size() / 2 + 1;
	}
	else
	{
		size = Str.size() / 2;
	}
	
	int** ASCII_Code = new int* [size];
	Initialization_of_ASCII_Array(ASCII_Code, size);

	f = 0, i = 0, j = 0;
	while (f < Str.size())
	{
		if (j < 2 && i < size)
		{
			ASCII_Code[i][j] = Str[f];
			f++;
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}

	int** Bit_Code = new int* [size];
	Initialization_of_Bit_Array(Bit_Code, size);

	i = 0, f = 1, h = 15;
	while (i < size)
	{
		while (f > -1)
		{
			int elem = ASCII_Code[i][f];
			while (elem > 0)
			{
				Bit_Code[i][h] = elem % 2;
				elem /= 2;
				h--;
			}
			f--;
			h = 7;
		}
		f = 1;
		i++;
		h = 15;
	}
	
	int** Coded_Arr = new int* [size];
	Initialization_of_Coded_Array(Coded_Arr, size);

	int** Decoded_Arr = new int* [size];
	Initialization_of_Bit_Array(Decoded_Arr, size);

	cout << "Введенное сообщение, разбитое на "<< size <<" блоков по 2 символа в каждом блоке, в двоичном коде : " << endl;
	Display_Bit_Arr(Bit_Code, size);

	Encode(Bit_Code, size, Coded_Arr);

	cout << "Зашифрованное сообщение в двоичном коде:" << endl;
	Display_Coded_Arr(Coded_Arr, size);

	Decoded_Str = Decode(Coded_Arr, size, Decoded_Arr);

	cout << "Расшифрованное сообщение в двоичном коде:" << endl;
	Display_Bit_Arr(Decoded_Arr, size);
	cout << endl;
	
	cout << "Расшифрованное сообщение:" << endl << Decoded_Str << endl;

	Delete(ASCII_Code, size);
	Delete(Bit_Code, size);
	Delete(Coded_Arr, size);
	Delete(Decoded_Arr, size);

	return 0;
}