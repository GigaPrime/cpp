#include <iostream>
#include "Vector.h"

using namespace std;

template <typename V>
Vector<V>::Vector()
{
	V* internalArray = new V[DEFAULT_CAPACITY];
	size = 0;
}

template <typename V>
Vector<V>::Vector(int cap)
{
	V* internalArray = new V[10];
	capacity = (cap > 0) ? cap : DEFAULT_CAPACITY;
	size = 0;
}

template <typename V>
Vector<V>::Vector(Vector& vector)
{
	V* internalArray = new V[10];
	capacity = vector.size;
	for (int i = 0; i < vector.capacity; i++)
	{
		internalArray[i] = vector.internalArray[i];
	}
}

template <typename V>
Vector<V>::~Vector()
{
	delete[] ;
}
