// Shuffel_TWO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;

int ReadPostiveNumber(string msg)
{
	int number;
	do
	{
		cout << msg << endl;
		cin >> number;

	} while (number <= 0);
	return number;
}

void Swap(int& A, int& B)
{
	int Temp = A;

	A = B;
	B = Temp;
	//cout <<A <<" " <<B<< endl;
	
}

int Random_Number(int From, int  To)
{
	int Rand_Number = rand() % (From - To + 1) + 1;
	return Rand_Number;
}


void FillArray(int arr[100], int& Lenght)
{
	for (int i = 0; i < Lenght ; i++)
	{
		arr[i] =i+1;
	}
}

void PrintArray(int arr[100], int Lenght)
{
	for (int i = 0; i < Lenght; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ShuffelArray(int arr[100], int Lenght)
{
	for (int i = 1; i <= Lenght; i++)
	{
		Swap(arr[Random_Number(1, Lenght) - 1], arr[Random_Number(1, Lenght) - 1]);
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int Lenght = ReadPostiveNumber("Enter The Lenght Of The Array: ");
	FillArray(arr, Lenght);
	cout << "The Source Array :" << endl;
	PrintArray(arr, Lenght);
	ShuffelArray(arr, Lenght);
	PrintArray(arr, Lenght);
}
