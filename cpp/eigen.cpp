///
/// File:   eigen.cpp
/// Author: Open Risk
///

#include <iostream>
#include <sstream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc, const char **argv) {

    //
    // Get eigen library version
    //

    std::stringstream ss;
    ss.str("");
    ss << EIGEN_MAJOR_VERSION;
    ss << ".";
    ss << EIGEN_MINOR_VERSION;
    std::string eigen_version = ss.str();
    std::cout << eigen_version << std::endl;

    MatrixXf A = MatrixXf::Random(3, 2);
    cout << "Here is the matrix A:\n" << A << endl;
    VectorXf b = VectorXf::Random(3);
    cout << "Here is the right hand side b:\n" << b << endl;
    cout << "The least-squares solution is:\n"
         << A.bdcSvd(ComputeThinU | ComputeThinV).solve(b) << endl;

    return 0;
}