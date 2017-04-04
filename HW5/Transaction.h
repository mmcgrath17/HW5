#include <string>
#include <vector>
#include "Date.h"
using namespace std;

class Transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;

public:
	Transaction(char typ, double amt, double bal, string descript, Date dat)
	{
		type = typ;
		amount = amt;
		balance = bal;
		description = descript;
		date = dat;
	}
	void printTrans()
	{
		cout << "Date: " << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << endl << "Type: " << type << endl << "Amount: " << amount << endl << "Balance: " << balance << endl << "Description: " << description << endl;
	}
};