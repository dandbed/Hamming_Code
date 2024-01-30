#pragma once

void Encode(int** Bit_Code, int size, int** Coded_Arr);

void Check(int** Checking_Arr, int size, int** Coded_Arr);

string Decode(int** Coded_Arr, int size, int** Decoded_Arr);

void Calculation_of_control_bits(int**Arr, int size);

void Code_correction(int** Checking_Arr, int size, int** Coded_Arr);

void Delete(int** Arr, int size);

void Display_Coded_Arr(int** Arr, int size);

void Display_Bit_Arr(int** Arr, int size);

void Initialization_of_Bit_Array(int** Arr, int size);

void Initialization_of_ASCII_Array(int** Arr, int size);

void Initialization_of_Coded_Array(int** Arr, int size);