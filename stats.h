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

/// @brief Takes a string and maps letter occurences to an unordered map (all lowercase)
/// @param text String to count letters from
/// @return Unordered Map of characters as the index and their occurences as the value
std::unordered_map<char, int> letters_to_dict(std::string& text);
