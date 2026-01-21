#include <fstream>
#include <sstream>
#include <cctype>
#include "stats.h"

std::string get_book_text(std::string book)
{
    std::ifstream MyFile(book);
    std::ostringstream text;

    if (!MyFile.is_open())
    {
        throw std::invalid_argument("Could not open file to read");
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

void print_occurences_sorted(std::string& text)
{
    std::unordered_map<char, int> occurences = letters_to_dict(text);

    std::vector<std::pair<char,int>> sorted_occurences;

    for (const auto& occurence : occurences)
    {
        sorted_occurences.push_back(occurence);
    }

    std::sort(sorted_occurences.begin(), sorted_occurences.end(), [](const std::pair<char,int>& a, const std::pair<char,int>& b){
        return a.second > b.second;
    });

    for (const auto& occurence : sorted_occurences)
    {
        std::cout << occurence.first << " : " << occurence.second << std::endl;
    }
}