#include <iostream>
#include <cstring>
#include <string>

int main()
{
    std::string initialString;
    std::string transformedString;

    std::cout << "Please enter your string:\n";
    std::getline(std::cin, initialString);

    for (char c : initialString) 
    {
        int count = 0;
        for (int i = 0; i < initialString.size(); i++) 
        {
            if (tolower(initialString[i]) == tolower(c)) count++;
        }
        if (count > 1) transformedString.append(")");
        else transformedString.append("(");
    }

    std::cout << transformedString;
}
