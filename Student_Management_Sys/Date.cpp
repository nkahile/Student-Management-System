#include "Date.h"

Date::Date(){
	Date::monthNum[0] = "";
	Date::monthNum[1] = "January ";
	Date::monthNum[2] = "February ";
	Date::monthNum[3] = "March ";
	Date::monthNum[4] = "April ";
	Date::monthNum[5] = "May ";
	Date::monthNum[6] = "June ";
	Date::monthNum[7] = "July ";
	Date::monthNum[8] = "August ";
	Date::monthNum[9] = "September ";
	Date::monthNum[10] = "October ";
	Date::monthNum[11] = "November ";
	Date::monthNum[12] = "December ";
}
Date::~Date(){
}

void Date::makeDate(stringstream& ss){

	string tMonth, tDay, tYear;

	getline(ss, tMonth, '/');
	Date::setMonth(tMonth);

	getline(ss, tDay, '/');
	Date::setDay(tDay);

	getline(ss, tYear, ',');
	Date::setYear(tYear);

}

int Date::getMonth(){
	return(Date::month);
}
void Date::setMonth(string tMonth){
	stringstream ssMonth;
	ssMonth << tMonth;
	ssMonth >> Date::month;
}

int Date::getDay(){
	return(Date::day);
}
void Date::setDay(string tDay){
	stringstream ssDay;
	ssDay << tDay;
	ssDay >> Date::day;
}

int Date::getYear(){
	return(Date::year);
}
void Date::setYear(string tYear){
	stringstream ssYear;
	ssYear << tYear;
	ssYear >> Date::year;
}

string Date::makeDateReport(){
	stringstream ss;
	string tDay;
	string tYear;

	ss << Date::getDay() << " " << Date::getYear();
	ss >> tDay >> tYear;

	return(Date::monthNum[Date::getMonth()] + " " + tDay + ", " + tYear + "\n");
}
