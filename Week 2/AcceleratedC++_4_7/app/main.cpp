/**
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/9/2018
 * @version 1.0
 *
 * @brief   Program to compute the average of the numbers stored in vector.
 *
 * @section DESCRIPTION
 *
 * This is a small program that computes the average of the numbers stored in
 * vector of float. The numbers are entered by the user into the vector.
 */

#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main()
{
  vector<double> numberVec;

  int count;
  cout << "Enter the count of numbers to average: ";
  cin >> count;

  int i = 0;
  double number = 0.0;
  cout << "Enter the numbers one by one: ";
  while (i < count) {
    cin >> number;
    numberVec.push_back(number);
    i++;
  }

  double average = 0.0;
  average = std::accumulate(numberVec.begin(), numberVec.end(), 0.0) / count;

  cout << "\nThe average of the numbers is: " << average << endl;

  return 0;
}
