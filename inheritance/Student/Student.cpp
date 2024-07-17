#include<string>
#include<iostream>
#include "Student.h"
//This is the implementation file of the class "Student.h"
using namespace std;

//default constructor
Student::Student(): name("No name"), gpa(0.0)
{
    cout << "Default student constructor called" << endl;
}

// overloaded constructor
Student::Student(string nameStudent, float gpaStudent): name(nameStudent), gpa(gpaStudent)
{
    cout <<" Student constructor called with parameters!" << endl;
}

// accessor functions
string Student::getName() const
{
    return name;
}

float Student::getGpa() const
{
    return gpa;
}

//function that prints the private member variables
void Student::printData() const
{
    cout <<"Print function from the base Student class is called" << endl;
    cout <<"Name of the student:" << name << endl;
    cout <<"Gpa of the student:" << gpa << endl;
}

//mutator functions
void Student::setName(string nameStudent)
{
    name = nameStudent;
}
void Student::setGpa(float gpaStudent)
{
    gpa = gpaStudent;
}
