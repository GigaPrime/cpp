#include <iostream>
#include "Vector.h"

using namespace std;

template <typename V>
void Vector<V>::autoextend()
{
	capacity *= 2;
	V* tmpArray = new V[capacity];
	for (int i = 0; i < size; i++)
	{
		tmpArray[i] = internalArray[i];
	}
	delete[] internalArray;
	internalArray = tmpArray;
}

template <typename V>
void Vector<V>::autocompress()
{
	capacity /= 2;
	V* tmpArray = new V[capacity];
	for (int i = 0; i < size; i++)
	{
		tmpArray[i] = internalArray[i];
	}
	delete[] internalArray;
	internalArray = tmpArray;
}

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

template <typename V>
void Vector<V>::add(V newArrayElement)
{
	if (size == capacity)
		autoextend();
	internalArray[size++] = newArrayElement;
}

template <typename V>
void Vector<V>::remove(int index)
{
	validateIndex(index);

	for (int i = index; i < size - 1; i++)
	{
		internalArray[i] = internalArray[i + 1];
	}
	size--;
	if (size * 2 < capacity)
		autocompress();
}

template <typename V>
V Vector<V>::get(int index)
{
	validateIndex(index);
	return internalArray[index];
}

template <typename V>
V Vector<V>::operator[](int index)
{
	validateIndex(index);
	return internalArray[index];
}

template <typename V>
void Vector<V>::set(int index, V newArrayElement)
{
	validateIndex(index);

	internalArray[index] = newArrayElement;
}

template <typename V>
void Vector<V>::compress()
{
	V* tmpArray = new V[size];
	for (int i = 0; i < size; i++)
	{
		tmpArray[i] = internalArray[i];
	}
	delete[] internalArray;
	internalArray = tmpArray;
}

template <typename V>
int Vector<V>::getSize()
{
	return size;
}

template <typename V>
Vector<V> Vector<V>::subvector(int endIndex)
{
	return subvector(0, endIndex);
}

template <typename V>
Vector<V> Vector<V>::subvector(int startIndex, int endIndex)
{
	validateIndex(startIndex);
	validateIndex(endIndex);

	Vector<V> subVector(endIndex - startIndex);

	for (int i = startIndex; i < endIndex; i++)
	{
		subVector.add(internalArray[i]);
	}
	return subVector;
}

template <typename V>
void Vector<V>::validateIndex(int index)
{
	if (index < 0 || index >= size)
		throw runtime_error("IndexOutOfRangeEcxeption");
}
