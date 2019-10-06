// ExercisesWithPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*char str[] = "abcdefghijklñmnopqrstuvwxyz";
int arr[] = { 1,2,3 };

int strLength(char *);
int charPosition(char *, char *);
void Order(int *, int, bool);
void PrintArr(int *);*/

void PrintArray(int *);
void FillArray(int *);

int main()
{
	/*int length = strLength(str);
	char c = 'z';
	int charPos = charPosition(str, &c);
	cout << "String length " << length << endl;
	cout << "The position of the character is " << charPos << endl;*/
	/*int a = 10;
	int *p;
	p = &a;
	int **pp = &p;
	cout << "This is the value of a whit variable " << a << endl;
	cout << "This is the value of a with pointer " << p  << endl;
	cout << "This is the addres of a with ampersan " << &a << endl;
	cout << "This is the adres of a whit pointer " << p << endl;
	cout << "This is the addres of the pointer " << &p << endl;
	cout << "This is the value of pp " << **pp << endl;*/

	//int arr[5];
	//int *p = arr;

	int a, b, *ptrA, *ptrB;

	cout << "Enter the value of A " << endl;
	cin >> a;
	cout << "Enter the value of B " << endl;
	cin >> b;

	ptrA = &a;
	ptrB = &b;

	cout << "the value of the pointer ptrA " << ptrA << endl;
	cout << "The value of the pointer ptrB " << ptrB << endl;
	cout << "a has a value of " << *ptrA << endl;
	cout << "b has a value of " << *ptrB << endl;

	/*int *p = arr;

	cout << "This is the fire truck 1: " << arr << endl;
	cout << "This is the fire truck 2: " << p << endl;
	cout << "This is the fire truck 3: " << &arr[0] << endl;

	cout << endl <<endl << endl;

	


	cout << p << endl;
	cout << ++p << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << arr[0] << endl;*/

	

	return 0;
}

void FillArray(int * a)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the value of the " << i + 1 << " element of the array " << endl;
		cin >> *a++;
	}
}

void PrintArray(int * a)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "The " << i + 1 << " element od the array "<< *a++ << endl;
	}
}

/*
int strLength(char *str)
{
	char *cp = str;
	while (*str)
	{
		str++;
	}
	return(str - cp);
}

int charPosition(char *ptr, char *c)
{
	int pos = 0;
	bool is = false;
	while (*ptr)
	{
		if (*ptr != *c && !is)
		{
			is = false;
			pos++;
		}
		else
		{
			is = true;
		}
		ptr++;
	}
	if (!is)pos = -1;
	return pos;
}

void Order(int *arr, int nElements, bool asc)
{

}

void PrintArr(int *arr)
{

}
*/

