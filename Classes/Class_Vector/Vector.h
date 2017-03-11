#ifndef __VECTOR_H__
#define __VECTOR_H__

template <typename V>
class Vector
{
private:
	static const int DEFAULT_CAPACITY = 10;

	V* internalArray;
	int capacity;
	int size;

	void autoextend();

public:
	Vector();
	Vector(int);
	Vector(Vector<V>&);
	~Vector();

	void add(V);
	V get(int);
	V operator[](int);
	void set(int, V);
};

#endif // !__VECTOR_H__

/*
	1. Define internal data structure (array), capacity, size, constant DEFAULT_CAPACITY;
	2. Constructors & Destructor:
		- default constructor (default vector capacity, defined with constants);
		- constructor with param (capacity);
		- copy constructor;
		- destructor;
	3. Methods 1:
		- autoextend (private);
		- add (at the end);
		- get, [];
		- set (replace element at particular index);
	4. Methods 2:
		- compress (capcity to size);
		- autocompress (private);
		- remove;
		- subvector, 2 overloading (from/to exact, from the very beginning to exact index);
*/
