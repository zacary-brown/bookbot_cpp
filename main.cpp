#include <iostream>
#include <fstream>

int main()
{
    std::ifstream MyFile("books/frankenstein.txt");

    if (!MyFile.is_open())
    {
        std::cout << "Could not open file to read" << std::endl;
        return -1;
    }

    std::string line;
    while (std::getline(MyFile, line))
    {
        std::cout << line << std::endl;
    }

    return 0;
}