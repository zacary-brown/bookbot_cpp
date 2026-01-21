#include "stats.h"

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "No Book Given" << std::endl;
        return -1;
    }

    std::string book_name = argv[1];

    std::cout << "============ BOOKBOT ============" << std::endl;
    std::cout << "Analyzing book found at " << book_name << "..." << std::endl;

    
    std::string my_text;
    
    try
    {
        my_text = get_book_text(book_name);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    
    std::cout << "----------- Word Count ----------" << std::endl;

    std::cout << "Found " << count_words(my_text) << " total words" << std::endl;

    std::cout << "--------- Character Count -------" << std::endl;

    print_occurences_sorted(my_text);

    return 0;
}