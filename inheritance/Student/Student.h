#ifndef STUDENT_H
#define STUDENT_H
// This is just a header file for the class student

using namespace std;
#include<string>

class Student
{
    public:
    //constructors
    //default constructor
    //sets name = No name, gpa = 0.0
        Student(); // default constructor

        Student(string nameStudent, float gpaStudent); 
        // this code is to declaration of the constructor in the 'Student' class. 
        //This constructor is use to initialize the 'Student' object with the specified values for the member variables as 'name' and 'gpa' immediately after the object constructor is called.
        //For example when i create a new 'Student' class object by passing in 'name' and 'gpa':  Student student2("John Doe", 3.75);

        //accessor functions
        //functions for retrieving the student name and gpa
        string getName() const;
        float getGpa() const;

        //printing data
        void printData() const;

        //mutator functions
        //for changing the name and gpa
        void setName(string nameStudent);
        void setGpa(float gpaStudent);
    private: //private member variables
        string name; //name of the student
        float gpa; //students's gpa
};
#endif