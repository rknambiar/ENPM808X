/**
 * @file    CourseGrading.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/10/2018
 * @version 1.0
 *
 * @brief   CourseGrading class.
 *
 * @section DESCRIPTION
 *
 * This class cpp file implements the methods for changing a student
 * grade and computing class GPA.
 */

#include <iostream>
#include <vector>
#include <numeric>
#include "CourseGrading.hpp"

/**
 * @brief Constructs CourseGrading object with 5 grades
 */
CourseGrading::CourseGrading() {
  studentGrades_.push_back(4);
  studentGrades_.push_back(2.8);
  studentGrades_.push_back(3.9);
  studentGrades_.push_back(3.5);
  studentGrades_.push_back(3.2);
}

/**
 * @brief Destroys the object
 */
CourseGrading::~CourseGrading() {
}

/**
 * @brief Changes student grade
 *
 * @param studentId is the id of the student to change grade
 * @param newGrade is the grade that will replace current value.
 *
 * @return void
 */
void CourseGrading::changeStudentGrade(int studentId, double newGrade) {
  studentGrades_[studentId] = newGrade;
}

/**
 * @brief Computes class GPA
 *
 * @return average class GPA
 */
double CourseGrading::computeClassGPA() {
  return (std::accumulate(studentGrades_.begin(), studentGrades_.end(), 0.0)
      / studentGrades_.size());

}

