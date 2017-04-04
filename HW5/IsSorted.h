#include <string>


using namespace std;
template <typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size-1; i++)
	{
		T first = list[i];
		T second = list[i + 1];
		if (first > second)
			return false;
	}
	return true;
}