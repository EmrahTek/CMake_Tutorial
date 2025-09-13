#include <iostream>
#include <string>

int main(int numberArgs, char* argumentStrings[])
{
    std::string argument = argumentStrings[1];
    std::cout << argument << std::endl;

    if (argument == "0")
        return 0;
    else
        return 1;
}