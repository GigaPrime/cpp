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
V Vector<V>::get(int index)
{
	if (index < 0 || index > size)
		throw runtime_error("IndexOutOfRangeEcxeption");
	return internalArray[index];
}

template <typename V>
V Vector<V>::operator[](int index)
{
	if (index < 0 || index > size)
		throw runtime_error("IndexOutOfRangeEcxeption");
	return internalArray[index];
}

template <typename V>
void Vector<V>::set(int index, V newArrayElement)
{
	if (index < 0 || index => size)
		throw runtime_error("IndexOutOfRangeEcxeption");
	internalArray[index] = newArrayElement;
}
