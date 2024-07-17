#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H
//This is the header file for the test GraduateStudent class that is inherited from the Student class

#include "Student.h"

class GraduateStudent : public Student // this means that we want GraduateStudent to inherit member functions and member variables from the base "Student" class
{
    public:
        // default constructor, call the default constructor from the base class and sets numberPapersPublished=0
        GraduateStudent();

        //overloaded constructor, call the overloaded constructor from the base class with the parameters nameStudent and gpaStudent'
        //and sets numberPapersPublished=numberPapers
        GraduateStudent(string nameStudent, float gpaStudent, int numberPapers, int indexOfStudent);
        
        //accessor function
        unsigned int getNumberPapersPublished();
        unsigned int getIndexOfStudent();

        //printing function - this is originally defined in the base class, here it is re-declared and in the implementation file it is re-implemented
        //it calls the original printData() function from the base class.
        void printData() const;

        //mutator function
        void setNumberPapersPublished(unsigned int numberPapers);

    private:
        unsigned int numberPapersPublished;
        unsigned int indexOfStudent;
};
#endif
