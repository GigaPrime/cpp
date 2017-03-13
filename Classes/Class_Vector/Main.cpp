#include "Vector.h"
#include "Vector.cpp"
using namespace std;

template <typename T>
void printVector(Vector<T>);

void main()
{
	Vector<double> newVector;

	newVector.add(1.5);
	newVector.add(2.5);
	newVector.add(3.5);
	newVector.add(4.5);
	newVector.add(5.5);
	newVector.add(6.5);
	newVector.add(7.5);
	newVector.add(8.5);
	newVector.add(9.5);

	printVector(newVector);

	Vector<double> subVector = newVector.subvector(3, 7);

	printVector(subVector);

	subVector.remove(2);
	printVector(subVector);
}

template <typename T>
void printVector(Vector<T> vector)
{
	for (int i = 0; i < vector.getSize(); i++)
	{
		cout << vector[i] << ", ";
	}
	cout << endl;
}