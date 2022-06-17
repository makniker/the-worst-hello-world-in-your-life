#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::size_t a = int();
    a = 12;
    char arr[] = {'h', 'e', 'l', 'l', 'o', ',',' ', 'w', 'o', 'r', 'l', 'd'};
    for (std::size_t i = 0; i < a; i++)
    {
        char letter = 0;
        for (std::size_t count = 0; count < arr[i]; count++)
        {
            letter++;
        }
        word += letter;
    }
    std::cout << word;
    return 0;
}