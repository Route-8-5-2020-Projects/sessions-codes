#include "Vector.h"
#include <assert.h>
template<class T>
void Vector<T>::doubling()
{
	cap *= 2;
	T* newArr = new T[cap];
	for (int i = 0; i < sz; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
}
template<class T>
void Vector<T>::push_back(T val)
{
	if (sz == cap)
	{
		doubling();
	}
	arr[sz] = val;
	sz++;
}
template<class T>
void Vector<T>::pop_back()
{
	assert(sz != 0);
	sz--;
}
template<class T>
int Vector<T>::size()
{
	return sz;
}
template<class T>
T Vector<T>::back()
{
	assert(sz != 0);
	return arr[sz - 1];
}
template<class T>
T& Vector<T>::operator[](int i)
{
	assert(i >= 0 && i < sz);
	return arr[i];
}
template<class T>
Vector<T>::Vector()
{
	sz = 0;
	cap = 1;
	arr = new T[cap];
}
