#include <iostream>
using namespace std;

int main()
{
	// Pointer desadressation (getting variable value via pointer)
	int value = 10;
	int *valuePtr = &value; 

	cout << *valuePtr << endl;

	// Accessing variable via pointer (changing variable value)
	int value2 = 20;
	int *value2Ptr = &value2;
	*value2Ptr = 100;

	cout << value2 << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		(*value2Ptr)++;
		cout << value2 << endl;
	}
	cout << endl;

	// Pointer base type operations (accessing array elements via pointer increment)
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *pointer1 = &arr[0];

	for (int i = 0; i < 10; i++)
	{
		cout << *pointer1 << endl;
		pointer1++;
	}
	cout << endl;

	//Pointer base type operations (pointer summ with integer)
	int arr2[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *pointer2 = &arr2[0];

	for (int i = 0; i < 4; i++)
	{
		pointer2 += i;
		cout << *pointer2 << endl;
	}
	cout << endl;

	//Pointer comparison
	int arr3[10] = { 0, 1, 2, 3, 4, 5, 6, 2, 1, 0 };
	int *pointer3 = arr3; // using array name w/o element number generates pointer to [0] element
	int *pointer3_2 = &arr3[9];

	for (int i = 0; i < 10; i++)
	{
		cout << *pointer3 << " " << *pointer3_2 << ": ";

		if (*pointer3 == *pointer3_2)
			cout << "true" << endl;
		else
			cout << "false" << endl;

		pointer3++;
		pointer3_2--;
		
	}

	return 0;
}