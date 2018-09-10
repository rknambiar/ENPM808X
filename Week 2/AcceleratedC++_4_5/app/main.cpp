/**
 * @file    main.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    9/9/2018
 * @version 1.0
 *
 * @brief   Program to count number of words and occurrence of each word.
 *
 * @section DESCRIPTION
 *
 * This is a small program that implements a custom function to read input stream
 * and print word frequency and total number of words.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::istream;

/**
 * @brief Reads input stream and stores in vector
 *
 * @param in is cin
 * @param words is a string vector to store words
 * @return istream
 */
istream& readStream(istream& in, vector<string>& words) {
  if (in) {
    cout
        << "Enter the sentence below followed by 'Ctrl+D' to end the stream. \n";

    words.clear();  // Clear previous values
    string word;

    // Read the words
    while (in >> word) {
      words.push_back(word);
    }
    in.clear();
  }
  return in;
}

/**
 * @brief Prints the word frequency
 *
 * @param wordVector is string vector with words
 * @return void
 */
void wordsFrequency(const vector<string>& wordVector) {
  string currentWord = wordVector[0];
  int counter = 1;

  cout << "Word Frequency" << endl;
  for (vector<string>::size_type i = 1; i < wordVector.size(); i++) {
    if (wordVector[i] == currentWord) {
      counter++;
    }
    else {
      cout << "Word: \"" << currentWord << "\" occurred " << counter
           << " times."
           << endl;
      counter = 1;
      currentWord = wordVector[i];
    }
  }

  cout << "Word: \"" << currentWord << "\" occurred " << counter << " times."
       << endl;

}

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main()
{
  vector<string> words;

  readStream(cin, words);  // Read word stream and add it to string vector

  // Printing total number of words
  cout << "\nTotal number of words is: " << words.size() << "\n\n";

  /* Sort the words in the vector to iterate and get frequency in a single loop.
   Other option is to use a map to store word and frequency as key-value pair. This
   wont need sorting */
  std::sort(words.begin(), words.end());

  wordsFrequency(words);  // Function call to print word frequency

  return 0;
}
