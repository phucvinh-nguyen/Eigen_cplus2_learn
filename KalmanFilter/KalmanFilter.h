//header file for the Kalman filter class
//Author: Phuc Vinh Nguyen

#ifndef KALMANFILTER_H
#define KALMANFILTER_H

#include<string>
#include<Eigen/Dense>
using namespace Eigen;
using namespace std;

class KalmanFilter
{
    public:
        //default constructor
        KalmanFilter();
        
        //overloaded constructor
        //- takes A, B, C, Q, R, P0, x0 matrices/vectors and assigns them to private variables
        //
        //- the input argument "maxMeasurements" is used to initialize zero matrices 
        // "estimates"
        // - the private variable "k" is set to zero. This variable is used to track the current iteration of the Kalman filter
        KalmanFilter(MatrixXd A, MatrixXd B, MatrixXd C, 
                     MatrixXd Q, MatrixXd R, MatrixXd P0,
                     MatrixXd x0, unsigned int maxSimulationSamples);

        //this member function updates the estimate on the basis of the measurement
        //it computes the Kalman filter gain matrix
        //it computes the a posteriori estimate
        //it computes the a posteriori covariance matrix
        void updateEstimate(MatrixXd measurement);

        //this member function predicts the estimate on the basis of the external input
        //it computes the a priori estimate
        //it computes the a priori covariance matrix
        void predictEstimate(MatrixXd externalInput);

        //this member function is used to load the measurement data from the external CSV file
        //the values are stored in the output matrix
        MatrixXd openData(string fileToOpen);

        //this member function saves the stored date in the corresponding CSV files
        void saveData(string estimateAposterioriFile, string estimatesAprioriFile,
                      string covarianceAposterioriFile, string covarianceAprioriFile,
                      string gainMatricesFile, string errorsFile) const;
                      
    private:
        // this variable is used to track the current time step k of the estimator
        // after every measurement arrives, this variable is incremented for +1
        unsigned int k;

        // m - input dimension, n - state dimension, r - output dimension
        unsigned int m,n,r;

        //A, B, C, Q, R and P0. This matrices are not varying consequently. -> not have the index of k
        //A, B, C are the matrix in estimate equation and measure equation. 
        //Q and R are the covariance matrices of the process noise and the measurement noise.
        //P0 is the initial estimate of the state covariance matrix.
        MatrixXd A, B, C, Q, R, P0; 

        MatrixXd x0; // initial estimate of state

        //this matrix is used to store all the a posteriori estimates xk^{+}-its mean the x corrected, from the initial state x0^{+} = x0. 
        MatrixXd estimateAposteriori;

        //this matrix is used to store the a priori estimates xk^{-}-its mean the x estimate, starting from x1^{-}
        //note: the estimates are stored column-wise in this matrix, starting from x1^{-}
        // x0^{-} does not exist so the matrix starts from x1^{-}
        MatrixXd estimateApriori;

        //this matrix is used to store the a posteriori estimation error covariance matrix Pl^{+}
        //note: the matrix strarts from P0^{+} = P0, where P0 is the initial estimate of the covariance matrix.
        MatrixXd covarianceAposteriori;

        //this matrix is used to store the a priori estimation error covariance matrices Pk^{-}
        //note: the matrix starts from P1^{-} because P0^{-} does not exist
        MatrixXd covarianceApriori;


        //this matrix is used to store the Kalman Filter gain matrices, starting from K1
        MatrixXd gainMatrices;

        //this list is used to store the different between the Measurement and the estimation (estimation error)
        // error_k = y_k -  C * xk^{-}
        //starting from e1.
        MatrixXd errors;   
};
#endif