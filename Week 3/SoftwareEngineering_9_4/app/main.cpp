/**
 * Copyright 2018 Rohitkrishna Nambiar
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/14/2018
 * @version 1.0
 *
 * @brief   Program to find the position of the string in input text.
 *
 * @section DESCRIPTION
 *
 * This is a small program that calculates the position of a string in
 * a given input text.
 */

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

/**
 * @brief Calculates the position of string in a text
 *
 * @param inputText is the input text.
 * @param stringToFind is the string that will be searched in inputText.
 *
 * @return position of string in the text as int. -1 if not found.
 */
size_t getPositionFromText(const string& inputText,
                           const string& stringToFind) {
  // Get position of the substring using find function.
  return inputText.find(stringToFind);
}

/**
 *   @brief  Prints the position of the string in text.
 *
 *   @return void
 */
void printPosition() {
  size_t position;  // Variable to store position after string search
  string textInput = "1234567890";  // Input text
  string textToSearch = "67";  // String that will be searched for in the text

  // Get the position of the string. Returns -1 if not found.
  position = getPositionFromText(textInput, textToSearch);

  // Print result to terminal
  if (position != string::npos) {
    cout << "Sequence: \"" << textToSearch << "\" is found at location "
        << position << endl;
  } else {
    cout << "Sequence not found in the text!" << endl;
  }
}

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main() {
  printPosition();
  return 0;
}
