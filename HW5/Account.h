//ex_05

#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"

using namespace std;

class Account
{
private:
	int id;
	double balance;
	static double annnualInterestRate;
	string name;
	vector<Transaction> transactions;
public:
	Account()
	{
		id = 0;
		balance = 0;
		annnualInterestRate = 0;
		name = "";
	}
	Account(int ide, double bal, double annualInterest, string nam)
	{
		id = ide;
		balance = bal;
		annnualInterestRate = annualInterest;
		name = nam;
	}

	int getId()
	{
		return id;
	}
	double getBalance()
	{
		return balance;
	}
	double getAnnualInterestRate()
	{
		return annnualInterestRate;
	}
	string getName()
	{
		return name;
	}
	
	void setId(int iden)
	{
		id = iden;
	}
	void setBalance(double bal)
	{
		balance = bal;
	}
	void setAnnualInterestRate(double rate)
	{
		annnualInterestRate = rate;
	}
	void setName(string nam)
	{
		name = nam;
	}
	double getMonthlyInterestRate()
	{
		return annnualInterestRate / 12;
	}
	double withdraw(double amount, string description, Date date)
	{
		transactions.push_back(Transaction('W', amount, balance, description, date));
		balance -= amount;
		return amount;
	}
	void deposit(double amount, string description, Date date)
	{
		transactions.push_back(Transaction('D', amount, balance, description, date));
		balance += amount;
	}

	void printSummary()
	{
		cout << "Name: " << name << endl << "Annual Interest Rate " << annnualInterestRate * 100 << "%" << endl << "Balance" << balance << endl;
		for (int i = 0; i < transactions.size(); i++)
		{
			transactions.at(i).printTrans();
		}
	}
};