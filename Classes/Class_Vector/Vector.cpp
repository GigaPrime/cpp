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
V Vector<V>::remove(int index)
{
	indexOutOfRangeException(index);

	for (int i = index; i < size; i++)
	{
		internalArray[i] = internalArray[i + 1];
	}
	if (size * 2 < capacity)
		autocompress();
	return internalArray;
}

template <typename V>
V Vector<V>::get(int index)
{
	indexOutOfRangeException(index);
	return internalArray[index];
}

template <typename V>
V Vector<V>::operator[](int index)
{
	indexOutOfRangeException(index);
	return internalArray[index];
}

template <typename V>
void Vector<V>::set(int index, V newArrayElement)
{
	indexOutOfRangeException(index);

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
V Vector<V>::subvector(int endIndex)
{
	indexOutOfRangeException(endIndex);

	V* subArray = new V[size];

	for (int i = 0; i < endIndex; i++)
	{
		subArray[i] = internalArray[i];
		cout << subArray[i] << " ";
	}
	return *subArray;
}

template <typename V>
V Vector<V>::subvector(int startIndex, int endIndex)
{
	indexOutOfRangeException(startIndex);
	indexOutOfRangeException(endIndex);

	V* subArray = new V[size];
	int subArrayIndex = 0;

	for (int i = startIndex; i < endIndex; i++)
	{
		subArray[subArrayIndex] = internalArray[i];
		cout << subArray[subArrayIndex] << " ";
		subArrayIndex++;
	}
	return *subArray;
}

template <typename V>
void Vector<V>::printVector()
{
	for (int i = 0; i < size; i++)
	{
		cout << "[ " << internalArray[i] << " ] ";
	}
	cout << "vector size is: " << getSize() << endl;
}

template <typename V>
void Vector<V>::indexOutOfRangeException(int index)
{
	if (index < 0 || index >= size)
		throw runtime_error("IndexOutOfRangeEcxeption");
}
