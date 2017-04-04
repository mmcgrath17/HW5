//ex_04
#include <vector>
#include <time.h>
#include <iostream>

using namespace std;


template <typename T>


void shuffleVector(vector<T>& v)
{
	srand(time(NULL));
	int size = v->size();
	vector<T> shuffled(size);
	for (int i = 0; i < size; i++)
	{
		shuffled.push_back(v->at(rand()%(size - i)));//add a random element of the v array to temp
	}
	v = shuffled;

}