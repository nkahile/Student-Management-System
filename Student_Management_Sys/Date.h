#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS
#include <sstream>


using namespace std;

class Date {
	private:
		int month;
		int day;
		int year;
		string monthNum [13];

	public:

		Date();
		~Date();

		void makeDate(stringstream&);

		int getMonth();
		void setMonth(string);

		int getDay();
		void setDay(string);

		int getYear();
		void setYear(string);

		string makeDateReport();


};


#endif
