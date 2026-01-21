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

int main()
{
    std::string my_text = get_book_text("books/frankenstein.txt");

    int word_count = count_words(my_text);

    std::cout << "Found " << word_count << " total words" << std::endl;

    return 0;
}