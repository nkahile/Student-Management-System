#include "Student.h"
using namespace std;

        Student::Student()
        {
		Student::address = new Address();
		Student::birthday = new Date();
		Student::graduation = new Date();
        }
        Student::~Student()
        {
		delete Student::address;
		delete Student::birthday;
		delete Student::graduation;
        }

	void Student::makeStudent(string tLine){

	stringstream ss1;

	string firstname,lastname, gPa,credithours;


	ss1 << tLine;

	getline(ss1,lastname, ',');
	getline(ss1,firstname, ',');
	Student::setLastName(lastname);
	Student::setFirstName(firstname);


	Student::address->makeAddress(ss1);
	Student::birthday->makeDate(ss1);
	Student::graduation->makeDate(ss1);


	getline(ss1, gPa, ',');
	getline(ss1, credithours, '\n');
	Student::setGPA(gPa);
	Student::setCreditHours(credithours);

} // end of the save() method


void Student::setFirstName(string firstname)
	{Student::firstName=firstname;}
string Student::getFirstName()
	{ return (Student::firstName);}


void Student::setLastName(string lastname)
	{ Student::lastName = lastname;}
string Student::getLastName()
	{ return (Student::lastName); }

void Student::setGPA(string gPa){
	stringstream ssGPA;
	ssGPA << gPa;
	ssGPA >> Student::gpa;
}
double Student::getGPA()
	{ return (Student::gpa);}

void Student::setCreditHours(string credithours)
	{ stringstream ssChrs;
	  ssChrs << credithours;
	  ssChrs >> Student::creditHours;
	}
int Student::getCreditHours()
{ return(Student::creditHours);}

string Student::makeStudentReport(){
	stringstream ss;
	string gPa;
	string credithours;

	ss << Student::getGPA() << " " << Student::getCreditHours();
	ss >> gPa >> credithours;
return("Name: " + Student::getFirstName() + " " + Student::getLastName() + "\n" + Student::address->makeAddressReport() + "Birthday: " + Student::birthday->makeDateReport()+ "Graduation Date: " + Student::graduation->makeDateReport() + "GPA: " + gPa + "\nCredit Hours: " + credithours + "\n");
}

void Student::copy(Student &holder)
{

	Student::firstName = holder.firstName;
	Student::lastName = holder.lastName;
	Student::gpa = holder.gpa;
	Student::creditHours = holder.creditHours;

	*(Student::address) = *(holder.address);
	*(Student::birthday) = *(holder.birthday);
	*(Student::graduation) = *(holder.graduation);
}
