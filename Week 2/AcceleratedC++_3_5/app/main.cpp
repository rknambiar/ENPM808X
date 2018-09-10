/**
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/9/2018
 * @version 1.0
 *
 * @brief   Program to compute grades.
 *
 * @section DESCRIPTION
 *
 * This is a small program that takes as input student name,
 * midterm, final and hw grades, and stores the name with cumulative
 * grade in two vectors.
 */

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

#define HW_COUNT 3

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main()
{
  int studentCount = 0;

  // Enter the number of students to enter grade
  cout << "Enter the number of students: ";
  cin >> studentCount;

  int i = 1;

  // Create two new vectors to store name and score
  vector < string > studentNames;
  vector<double> studentGrades;

  while (i <= studentCount) {
    cout << "\nStudent No:" << i << "\nEnter your name: ";
    string name;
    cin.ignore();
    std::getline(cin, name);
    studentNames.push_back(name);

    // Input midterm grades
    cout << "Enter your midterm grade: ";
    double midtermGrade = 0.0;
    cin >> midtermGrade;

    // Input final grades
    cout << "Enter your final grade: ";
    double finalGrade = 0.0;
    cin >> finalGrade;

    // Input and calculate homework grades
    int count = 0;
    double x = 0.0;
    double totalGrade = 0.0;
    cout << "Enter you homework grades one by one:";

    while (count < HW_COUNT) {
      cin >> x;
      totalGrade = totalGrade + x;
      count++;
    }

    studentGrades.push_back(
        0.2 * midtermGrade + 0.4 * finalGrade + 0.4 * totalGrade / HW_COUNT);

    i++;
  }

  // Display name and combined grade
  for (vector<string>::size_type i = 0; i < studentNames.size(); i++) {
    cout << "Name: " << studentNames[i] << " and your HW grade is: "
        << studentGrades[i] << endl;
  }

  return 0;
}
