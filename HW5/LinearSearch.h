#include <string>
#include <iostream>


template <typename T>
//ex_01
int LinearSearch(const T list[], T key, int arraySize)
{
	T l[] = list;
	T k = key;
	for (int i = 0; i < arraySize; i++)
	{
		if (k == l[i])
			return i;
	}
	return -1;
}