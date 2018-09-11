/**
 * @file    CourseGrading.hpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/10/2018
 * @version 1.0
 *
 * @brief   CourseGrading class.
 *
 * @section DESCRIPTION
 *
 * This class hpp file implements the methods for changing a student
 * grade and computing class GPA.
 */

#ifndef COURSE_GRADING_HPP
#define COURSE_GRADING_HPP

#include <iostream>
#include <vector>

class CourseGrading {

 private:
  std::vector<double> studentGrades_;

 public:

  /**
   * @brief Constructs CourseGrading object with 5 grades
   */
  CourseGrading();

  /**
   * @brief Destroys the object
   */
  ~CourseGrading();

  /**
   * @brief Changes student grade
   *
   * @param studentId is the id of the student to change grade
   * @param newGrade is the grade that will replace current value.
   *
   * @return void
   */
  void changeStudentGrade(int studentId, double newGrade);

  /**
   * @brief Computes class GPA
   *
   * @return average class GPA
   */
  double computeClassGPA();

};

#endif
