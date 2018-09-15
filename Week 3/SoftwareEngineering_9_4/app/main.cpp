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
int getPositionFromText(const string& inputText, const string& stringToFind) {
  // Get the length of input text and string.
  int textLength = inputText.length();
  int arrayToSearchLength = stringToFind.length();

  // Initialize position to -1.
  int position = -1;

  // Loop through the input text to find the location of string
  for (int i = 0; i < textLength - arrayToSearchLength + 1; i++) {
    bool found = true;
    for (int j = 0; j < arrayToSearchLength; j++)
      if (inputText[i + j] != stringToFind[j])
        found = false;
    if (found) {
      position = i;
      break;
    }
  }
  return position;
}

/**
 *   @brief  Prints the position of the string in text.
 *
 *   @return void
 */
void printPosition() {
  int position;  // Variable to store position after string search
  string textInput = "1234567890";  // Input text
  string textToSearch = "34";  // String that will be searched for in the text

  // Get the position of the string. Returns -1 if not found.
  position = getPositionFromText(textInput, textToSearch);

  // Print result to terminal
  if (position != -1) {
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
