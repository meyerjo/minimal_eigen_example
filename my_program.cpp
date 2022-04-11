#include <iostream>
#include <Eigen/Dense>


int main()
{
  const static Eigen::IOFormat CSVWithoutNLFormat(Eigen::FullPrecision, Eigen::DontAlignCols, ", ", ",      ");


  Eigen::Vector3d x;
  Eigen::Vector3d y;
  Eigen::Vector3d z;
  x <<  0.500434, 0.00180378, -0.00453285;
  y <<  -0.00180378,  0.500434,         0;
  z <<  0.0022684, 8.17627e-06, 0.250438;

//  Eigen::Matrix4d T = Eigen::Matrix4d::Identity();
//  T.topLeftCorner<3, 3>() << x.normalized(), y.normalized(), z.normalized();
//  std::cout << "T";
//  std::cout << T << std::endl;
//  std::cout << "T.Inverse" << std::endl;
//  std::cout << T.inverse() << std::endl;
//
//
//  Eigen::Matrix4d m = Eigen::Matrix4d::Identity();
//  m << 0.9999524852420787, -0.003604403123952234, 0.009057347090091341, 0,
//0.003604255274427447, 0.9999935041179616, 3.264654221433209e-05, 0,
//-0.009057405925931808, 0, 0.9999589808576616, 0,
//0, 0, 0, 1;
//  std::cout << "m";
//  std::cout << m << std::endl;
//  std::cout << "m.Inverse" << std::endl;
//  std::cout << m.inverse() << std::endl;


  Eigen::Matrix4d M = Eigen::Matrix4d::Zero();
  kineticM << 0.9999524852420787, -0.003604403123952234, 0.009057347090091341, 0,      0.003604255274427447, 0.9999935041179616, 3.264654221433209e-05, 0,      -0.009057405925931808, 0, 0.9999589808576616, 0,      0, 0, 0, 1;


  std::cout << "matrix.Inverse:\t" << M.inverse().format(CSVWithoutNLFormat) << std::endl;
//  Eigen::Matrix4d m = Eigen::Matrix4d::Identity();
//  m << 0.999952485242079, -0.00360440312395223, 0.00905734709009134, 0,
//0.00360425527442745, 0.999993504117962, 3.26465422143321e-05, 0,
//-0.00905740592593181, 0, 0.999958980857661, 0,
//0, 0, 0, 1;


}