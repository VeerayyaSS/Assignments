#include<iostream>
#include"Date.h"

using namespace std;

Date::Date(){
	day = 1;
	month = 1;
	year = 2001;
	cout<<"\tDefault constructor called"<<endl;
	};
Date::Date(int d){
	day =d;
	cout<<"\tParameterized constructor 1 called "<<endl;
	};
Date::Date(int d, int m, int y){
	day = d;
	month = m;
	year = y;
	cout<<"\t Parameterised constructor 2 called "<<endl;
	};
int Date::getYear(){
	return year;
	}
void Date::setDate(int day, int month,int year){
	cout << day << ":" << month << ":" << year <<endl;
	this ->day = day;
	this -> month = month;
	this -> year =year;
	}
void Date::getDate(){
	cout<< day << "/" << month << "/" << year << endl;
	}

//For month =1 function returns "January",if month =2 function returns "February" and so on...
string Date::getMonthName(){
	int month;	
	const char * months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	cout <<"The Month Name is"<< months[month-1]<<"\n\n";
		return months[month];
	}

//year is leap year if it is divisible by 400 or
//(it is divisible for 4 but not by 100)
bool Date::checkLeapYear(){
	
	if((year % 400) == 0 ||( year%4) == 0 || (year%100)!= 0)
	
		cout<< "true";
	else 
		cout<< "false";
};
int main(){
	Date D;
	D.getDate();
	D.getMonthName();
	D.checkLeapYear();

	return 0;
}


