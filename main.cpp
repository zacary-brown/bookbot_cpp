#include "stats.h"

int main()
{
    std::string book_name = "books/frankenstein.txt";

    std::cout << "============ BOOKBOT ============" << std::endl;
    std::cout << "Analyzing book found at " << book_name << "..." << std::endl;

    std::string my_text = get_book_text(book_name);

    std::cout << "----------- Word Count ----------" << std::endl;

    std::cout << "Found " << count_words(my_text) << " total words" << std::endl;

    std::cout << "--------- Character Count -------" << std::endl;

    print_occurences_sorted(my_text);

    return 0;
}