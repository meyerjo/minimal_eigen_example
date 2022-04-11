#include <iostream>
#include <Eigen/Dense>


int main()
{
  const static Eigen::IOFormat CSVWithoutNLFormat(Eigen::FullPrecision, Eigen::DontAlignCols, ", ", ",      ");

  Eigen::Matrix4d M = Eigen::Matrix4d::Zero();
  M << 0.9999524852420787, -0.003604403123952234, 0.009057347090091341, 0,      0.003604255274427447, 0.9999935041179616, 3.264654221433209e-05, 0,      -0.009057405925931808, 0, 0.9999589808576616, 0,      0, 0, 0, 1;

  std::cout << "matrix.Inverse:\t" << M.inverse().format(CSVWithoutNLFormat) << std::endl;
}