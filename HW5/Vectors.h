//ex_03

#include <string>
using namespace std;

template <typename T>

class Vectors
{
private:
	T *arrp[];
	int size;

public:
	Vector<T>()
	{
		arrp[] = new T[1];
		arrp[0] = 0;
		size = 1;
	}

	Vectors<T>(int siz)
	{
		size = siz;
		arrp = new T[size];
		for (int i = 0; i < size; i++)
		{
			arrp[i] = NULL;
		}
	}

	Vectors<T>(int siz, T defaultValue)
	{
		size = siz;
		arrp = new T[size];
		for (int i = 0; i < size; i++)
		{
			arrp[i] = defaultValue;
		}
	}

	void push_back(T element)
	{
		T temp[] = arrp[];
		arrp[] = new T[size + 1];
		for (int i = 0; i < size; i++)
		{
			arrp[i] = temp[i];
		}
		arrp[size + 1] = element;
		size++;
	}

	void pop_back()
	{
		T temp[size - 1];
		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = arrp[i];
		}
		arrp = temp;
		size--;
	}

	int size()
	{
		return size;
	}

	T at(int index)
	{
		return arrp[index];
	}

	bool empty()
	{
		for (int i = 0; i < size; i++)
		{
			if (arrp[i] != NULL)
				return false;
		}
		return true;
	}

	void clear()
	{
		arrp = new T[0];
	}

	void swap(Vectors v2)
	{
		if (size == v2.size())
		{
			T temp1[size] = v2;
			T temp2[size] = arrp;
			arrp = temp1;
			v2 = temp2;
		}
		if (size < v2.size())
		{
			T temp1[v2.size()] = v2;
			T temp2[size] = arrp;
			arrp = new T[v2.size()];
			v2 = new T[size];
			for (int i = 0; i < v2.size(); i++)
			{
				arrp = temp1[i];
				if (i < size)
					v2 = temp2[i];
			}

		}
		if (size > v2.size())
		{
			T temp1[v2.size()] = v2;
			T temp2[size] = arrp;
			arrp = new T[v2.size()];
			v2 = new T[size];
			for (int i = 0; i < size; i++)
			{
				v2 = temp2[i];
				if (i < v2.size())
					arrp = temp1[i];
			}
		}
	}
};