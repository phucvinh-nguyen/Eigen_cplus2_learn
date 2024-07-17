#include "Student.h"
#include "Student.cpp"
#include "GraduateStudent.h"
#include "GraduateStudent.cpp"
using namespace std;

int main ()
{
    GraduateStudent student1 ("Phuc Vinh Nguyen", 3.6, 2, 2); // the default constructor will be automatically called and do the print command inside the constructor.
    GraduateStudent student2 ("Steve Nguyen", 4.0, 4, 1); // the default constructor will be automatically called and do the print command inside the constructor.
    student1.printData();
    cout << "\n" << endl;
    student2.printData();

    return 0;
}