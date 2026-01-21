#include <fstream>
#include <sstream>
#include <cctype>
#include "stats.h"

std::string get_book_text(std::string book)
{
    std::ifstream MyFile("books/frankenstein.txt");
    std::ostringstream text;

    if (!MyFile.is_open())
    {
        std::cout << "Could not open file to read" << std::endl;
        return "";
    }

    text << MyFile.rdbuf();

    return text.str();
}

int count_words(std::string& text)
{
    std::stringstream buffer(text);
    std::string word;
    int count = 0;

    while (buffer >> word)
    {
        ++count;
    }

    return count;
}

std::unordered_map<char, int> letters_to_dict(std::string& text)
{
    std::unordered_map<char, int> occurences;

    for (char letter : text)
    {
        letter = std::tolower(letter);
        if (occurences.find(letter) == occurences.end())
        {
            occurences[letter] = 1;
            continue;
        }

        occurences[letter] += 1;
    }

    return occurences;
}