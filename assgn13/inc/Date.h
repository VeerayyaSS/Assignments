#ifndef DATE_H_
#define DATE_H_
#include<iostream>
#include<string>

using namespace std;

class Date{
	private:
		int day,month,year;	//instance variable
	public:
		Date();
		Date(int d);
		Date(int d,int m,int y);
		int getYear();
		void setDate(int day, int month, int year);
		void getDate();
		string getMonthName();
		bool checkLeapYear();
};

#endif
