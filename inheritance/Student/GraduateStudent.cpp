// This is the implementation file of the class GraduateStudent
#include "GraduateStudent.h"
#include <iostream>
using namespace std;

//default constructor
//note that this constructor calls the default constructor of the base class, it will be automatically called
GraduateStudent::GraduateStudent(): Student(), numberPapersPublished(0), indexOfStudent(0)
//we re calling the default constructor "Student()" of the base class,
//after we called the constructor of the base class, we simply set numberPapersPublished to 0
{
    cout<<"Default graduate student constructor called"<<endl;
}

//overloaded constructor,
//note that this constructor explicitly calls the overloaded constructor of the base class
GraduateStudent::GraduateStudent(string nameStudent, float gpaStudent, int numberPapers, int index): Student(nameStudent, gpaStudent), numberPapersPublished(numberPapers), indexOfStudent(index)
{
    cout<<"Graduate student constructor called with parameters"<<endl;
}

//accessor function
unsigned int GraduateStudent::getNumberPapersPublished()
{
    return numberPapersPublished;
}

unsigned int GraduateStudent::getIndexOfStudent()
{
    return indexOfStudent;
}


// redefine the print function in the inherited class
// note here that we still call the print function from the base class
void GraduateStudent::printData() const
{
    cout<<"Print function from the inherited GraduateStudent class is called"<<endl;
    //call the print function from the base class to print the member variables originally declared in the base class
    // this is how we call the base class
    Student::printData();
    
    //then print the variable declared in the inherited class
    cout<<"Number of published papers: "<< numberPapersPublished<<endl;
    cout<<"Index of Student: "<< indexOfStudent<<endl;
}

//mutator function 
void GraduateStudent::setNumberPapersPublished(unsigned int numberPapers)
{
    numberPapersPublished = numberPapers;
}
