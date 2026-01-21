#include <iostream>
#include <fstream>
#include <sstream>

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

int main()
{
    std::string my_text = get_book_text("books/frankenstein.txt");

    std::cout << my_text << std::endl;

    return 0;
}