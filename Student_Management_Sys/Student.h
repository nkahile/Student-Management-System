#ifndef  STUDENT_H
#define  STUDENT_H
#include "Address.h"
#include "Date.h"
using namespace std;

class Student {
    private:
        string firstName;
        string lastName;
        double gpa;
        int creditHours;

	Address* address;
	Date* birthday;
	Date* graduation;

    public:
        Student();
        ~Student();

	void makeStudent(string);

        void setFirstName(string firstname);
        string getFirstName();

	void setLastName(string lastname);
        string getLastName();


	void setGPA(string gPa);
        double getGPA();


	void setCreditHours(string credithours);
        int getCreditHours();

	void copy(Student &holder);
	string makeStudentReport();



};
#endif
