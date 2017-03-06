#include <iostream>
#include "Vector.h"

using namespace std;

template <typename V>
Vector<V>::Vector()
{
	V internalArray[DEFAULT_CAPACITY];
	size = 0;
}

template <typename V>
Vector<V>::Vector(int cap)
{
	capacity = (cap > 0) ? cap : DEFAULT_CAPACITY;
	internalArray[capacity];
	size = 0;
}

template <typename V>
Vector<V>::Vector(Vector& vector)
{
	capacity = vector.capacity;
	internalArray[capacity];
	for (int i = 0; i < vector.capacity; i++)
	{
		internalArray[i] = vector[i];
	}
}

template <typename V>
Vector<V>::~Vector()
{
	delete[] internalArray;
}
