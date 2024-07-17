#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;
int main() {
    //define 3x3 matrix of floats and set its entries to zero -explicit declaration
    Matrix <float, 3, 3> matrixA;
    matrixA.setZero();

    //define 3x3 matrix of floats and set its entries to zero -typedef declaration
    Matrix3f matrixA1;
    matrixA1.setZero();

    //define a dynamic matrix, explicit declaration
    Matrix <float, Dynamic, Dynamic> matrixA2;

    //constructor, allocate memory, but do not initialize
    MatrixXd matrixA3(10, 10);

    //assigning matrix entries 
    MatrixXd matrixA4(2, 2);
    matrixA4(0, 0) = 1;
    matrixA4(0, 1) = 2;
    matrixA4(1, 0) = 3;
    matrixA4(1, 1) = 4;

    // fill in the matrix entries using comma separated values and print the matrix
    Matrix2f matrixA5;
    matrixA5 << 1, 2,
    3, 4;

    //setting matrix entries - two approaches
    int row = 2;
    int col = 3;

    //matrix of zeros
    MatrixXf matrixB1;
    matrixB1 = MatrixXf::Zero(row, col);

    //another option
    MatrixXf matrixB2;
    matrixB2.setOnes(row, col);

    //matric of constants
    float value = 1.2;
    MatrixXf matrixConst;
    matrixConst = MatrixXf::Constant(row, col, value);

    //another option of constant matrix
    MatrixXf matrixConst1;
    matrixConst1.setConstant(row, col, value);

    //indentity matrix, two approaches
    int row1 = 3;
    int col1 = 3;
    MatrixXd matrixIdentity;
    matrixIdentity = MatrixXd::Identity(row1, col1);

    //another option of identity matrix
    MatrixXd matrixIdentity1;
    matrixIdentity1.setIdentity(row1, col1);

    //accessing matrix blocks
    MatrixXd matrixV(4, 4);
    matrixV << 1, 2, 3, 4,
    5, 6, 7, 8,
    9, 10, 11, 12,
    13, 14, 15, 16;

    //access the matrix composed of 0:2 rows and 1:2 columns of matrixV
    MatrixXd matrixVpartition = matrixV.block(0, 1, 2, 3);

    cout << "\n \n" << matrixVpartition << endl;

    MatrixXd matrixVpartition2 = matrixV.block(1, 1, 2, 2);

    cout << "\n \n" << matrixVpartition2 << endl;

    //accessing columns and rows of a matrix

    cout << "\n\n" << "Row 1 of matrixV is \n " << matrixV.row(0);
    cout << "\n\n" << "Column 1 of matrixV is \n " << matrixV.col(0);

    //create a diagonal matrix out of a vector
    Matrix <double, 4, 1> vector1;
    vector1 << 1, 2, 3, 4;
    MatrixXd diagonalMatrix;
    diagonalMatrix = vector1.asDiagonal();
    cout << " Diagonal matrix is \n\n" << diagonalMatrix;

    //basic matrix operations
    //matrix addition
    MatrixXd A1(2,2);
    MatrixXd B1(2,2);
    A1 << 1, 2,
    3, 4;
    B1 << 1, 2,
    3, 4;
    MatrixXd C1 = A1 + B1;
    MatrixXd C2 = A1 - B1;
    cout << " \n\n The sum of A1 and B1 is \n\n" << C1 << endl;
    // similarly you can subtract A1 and B1
    cout << " \n\n The abstract of A1 and B1 is \n\n" << C2 << endl;
    //matrix multiplication
    MatrixXd D1 = A1 * B1;
    cout << " \n\n The matrix product of A1 and B1 is \n\n" << D1 << endl;

    //multiplication by a scalar
    int s1 = 2;
    MatrixXd F1;
    F1 = s1 * A1;
    cout << " \n\n The matrix product of the scalar 2 and the matrix A1 is\n\n" << F1 << endl;

    //matrix transpose
    MatrixXd At;
    MatrixXd R1;
    // we can transpose A1 as follows
    At = A1.transpose();
    cout << "\n\n Original matrix A1 is\n\n" << A1;
    cout << "\n\n Transpose matrix A1 is\n\n" << At;
    //We can use a transpose operator in exressions
    R1 = A1.transpose() + B1;
    cout << "\n\n Matrix R1 = A1^(T) + B1 is\n\n" << R1;
    





}

