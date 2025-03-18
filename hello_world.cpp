#include <iostream>
#include <string>

int
main()
{
    // Declare a variable to store the username
    std::string name;

    // Requesting username
    std::cout << "Enter your name, please: ";
    std::cin >> name;

    // Display a greeting
    std::cout << "Hello world from " << name << "!" << std::endl;

    // Complete the program successfully
    return 0;
}
