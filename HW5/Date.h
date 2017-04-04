// Date.h - define a simple class to hold dates
//
#ifndef DATE_H_
#define DATE_H_



class Date
{
private:
	int _year;
	int _month;
	int _day;

public:
	Date();
	Date(int time_since_epoch);
	Date(int year, int month, int day);
	Date(const Date& date);

	void setDate(int time_since_epoch);
	void setDate(const Date& date);
	int getYear()
	{
		return _year;
	}
	int getMonth()
	{
		return _month;
	}
	int getDay()
	{
		return _day;
	}

};

#endif // DATE_H_