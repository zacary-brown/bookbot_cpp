#include "stats.h"

int main()
{
    std::string my_text = get_book_text("books/frankenstein.txt");

    int word_count = count_words(my_text);

    std::cout << "Found " << word_count << " total words" << std::endl;

    std::unordered_map<char, int> occurences = letters_to_dict(my_text);

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

    return 0;
}