/**
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/9/2018
 * @version 1.0
 *
 * @brief   Program to concatenate the strings stored in a vector.
 *
 * @section DESCRIPTION
 *
 * This is a small program that concatenates the strings stored in a
 * vector using the accumulate function in numeric library..
 */

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main()
{
  // Declare and initialize a string vector
  vector<string> stringVec = { "This", "Is", "A", "String", "Vector" };

  // COncatenate the strings using accumulate function
  string concatenatedString = std::accumulate(stringVec.begin(),
                                              stringVec.end(), string(""));

  // Display the concatenated string
  cout << "The concatenated string is: " << concatenatedString << endl;

  return 0;
}
