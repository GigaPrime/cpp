#include "Vector.h"

using namespace std;

template <typename V>
Vector<V>::Vector()
{
	capacity = DEFAULT_CAPACITY;
	internalArray = new V[capacity];
	size = 0;
}

template <typename V>
Vector<V>::Vector(int cap)
{
	capacity = cap;
	internalArray = new V[capacity];
	size = 0;
}

template <typename V>
Vector<V>::Vector(Vector<V>& vector)
{
	capacity = vector.capacity;
	internalArray = new V[capacity];
	size = vector.size;
	for (int i = 0; i < vector.size; i++)
	{
		internalArray[i] = vector.internalArray[i];
	}
}

template <typename V>
Vector<V>::~Vector()
{
	delete[] internalArray;
}
