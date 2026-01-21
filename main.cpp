#include "stats.h"

int main()
{
    std::string my_text = get_book_text("books/frankenstein.txt");

    int word_count = count_words(my_text);

    std::cout << "Found " << word_count << " total words" << std::endl;

    std::unordered_map<char, int> occurences = letters_to_dict(my_text);

    for (const auto occurence : occurences)
    {
        std::cout << occurence.first << " : " << occurence.second << std::endl;
    }

    return 0;
}