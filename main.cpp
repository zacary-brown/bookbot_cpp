#include "stats.h"

int main()
{
    std::string my_text = get_book_text("books/frankenstein.txt");

    int word_count = count_words(my_text);

    std::cout << "Found " << word_count << " total words" << std::endl;

    return 0;
}