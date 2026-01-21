#pragma once
#include <iostream>

/// @brief Returns a given text file as a string
/// @param book Text file to read
/// @return Text file as string
std::string get_book_text(std::string book);

/// @brief Counts how many words are in a given string
/// @param text String to count words from
/// @return Integer of how many words were in the input string
int count_words(std::string& text);