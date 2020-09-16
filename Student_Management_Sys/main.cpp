#include <iostream>
#include <fstream>
#include <sstream>

#include "Student.h"

using namespace std;

Student* studentP;
int stud_Num = 0;

void sort();
void by_Name(int, int);
void swap(int, int);
void printToFile(ofstream&,ofstream&);

int main() {

	string line;
    	ifstream readFile;
    	readFile.open("students.dat");
	if (readFile.is_open()){
    		while (!readFile.eof()){
			getline(readFile, line);
			stud_Num++;
		}
		stud_Num = stud_Num - 2;
    	} else {
        	cout << "unable to open DataFile" << endl;
    	}

	readFile.close();
	studentP = new Student[stud_Num];
	ofstream  openFullFile, openShortFile;
	readFile.open("students.dat");
	openFullFile.open("fullReport.dat");
	openShortFile.open("shortReport.dat");

	if (readFile.is_open() && openFullFile.is_open() && openShortFile.is_open()){

		getline(readFile, line);

		for (int i = 0; i < stud_Num; i++){

			getline(readFile, line);
			studentP[i].makeStudent(line);
			openFullFile << studentP[i].makeStudentReport() << "\n" << endl;
			openShortFile << studentP[i].getLastName() + ", " + studentP[i].getFirstName() << "\n" << endl;
		}

	}else{
		cout << "Some of the files did not open properly." << endl;
	}

	readFile.close();
	openFullFile.close();
	openShortFile.close();

	sort();
	openFullFile.open("alphaFullReport.dat");
	openShortFile.open("alphaShortReport.dat");
	if (openFullFile.is_open() && openShortFile.is_open()){
		printToFile(openFullFile,openShortFile);
	}else{
		cout << "Some of the files did not open properly." << endl;
	}
	openFullFile.close();
	openShortFile.close();
	delete[] studentP;
	return(0);
}

void sort(){

	for(int i = 0; i < stud_Num; i++){
		for(int j = 0; j < (stud_Num - 1); j++){
			by_Name(j,j+1);
		}
	}
}

void by_Name(int k, int s){
	if (studentP[k].getLastName() > studentP[s].getLastName() ){
		swap(k,s);
	} else if (studentP[k].getLastName() == studentP[s].getLastName() ){
		if (studentP[k].getFirstName() > studentP[s].getFirstName() ){
			swap(k,s);
		}
	}
}

void swap(int one, int two){
	Student temp;
	temp.copy(studentP[one]);
	studentP[one].copy(studentP[two]);
	studentP[two].copy(temp);

}


void printToFile(ofstream& openFullFile,ofstream& openShortFile){

	for (int i = 0; i < stud_Num; i++){
		openFullFile << studentP[i].makeStudentReport() << "\n" << endl;
		openShortFile << studentP[i].getLastName() + ", " + studentP[i].getFirstName() << "\n" << endl;
	}
}
