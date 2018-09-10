/**
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/9/2018
 * @version 1.0
 *
 * @brief   Program to change grade and print class GPA.
 *
 * @section DESCRIPTION
 *
 * This is a small program that uses the CourseGrading library to
 * change student grade and compute class GPA..
 */

#include <iostream>
#include "CourseGrading.cpp"

using std::cout;
using std::endl;

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main()
{
  CourseGrading software808X;

  double classGPA = software808X.computeClassGPA();

  cout << "The class GPA before grade change is : " << classGPA << endl;

  software808X.changeStudentGrade(2, 3.1);

  cout << "We have changed the grade of student with id:2 from 3.9 to 3.1"
       << endl;

  classGPA = software808X.computeClassGPA();

  cout << "The class GPA after changing grade is : " << classGPA << endl;

  return 0;
}
