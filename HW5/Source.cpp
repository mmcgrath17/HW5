#include <iostream>
#include <string>
#include <vector>
#include "LinearSearch.h"
#include "IsSorted.h"
#include "ShuffleVector.h"
#include "Account.h"

using namespace std;

int main()
{
	//ex_01
	string list1[] = { "abc", "def", "ghi" };
	double list2[] = { 2.2, 2.3, 4.4 };
	string key1 = "def";
	double key2 = 3;


	//cout << "The index of " << key1 << " is " << LinearSearch(list1, key1, 3) << "./n";
	//cout << "The index of " << key2 << " is " << LinearSearch(list2, key2, 3) << "./n";

	//ex_02
	int list3[] = { 1, 3, 2 };
	//cout << "It is " << isSorted(list1, 3) << " that list 1 is sorted";
	//cout << "It is " << isSorted(list2, 3) << " that list 2 is sorted";
	//cout << "It is " << isSorted(list3, 3) << " that list 3 is sorted";

	//ex_04
	vector<int> *vect;
	int temp;
	cout << "Enter 10 integers.\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		vect->push_back(temp);
	}
	shuffleVector(*vect);
	for (int i = 0; i < 10; i++)
	{
		cout << vect->at(i) << endl;
	}

	//ex_05
	Account acc(1122, 1000, .015, "George");
	acc.deposit(30, "Deposit", Date(2011, 2, 11));
	acc.deposit(40, "Deposit", Date(2011, 4, 12));
	acc.deposit(50, "Deposit", Date(2011, 8, 21));
	
	acc.withdraw(5, "Withdrawal", Date(2012, 6, 30));
	acc.withdraw(4, "Withdrawal", Date(2012, 7, 22));
	acc.withdraw(2, "Withdrawal", Date(2014, 8, 1));
}