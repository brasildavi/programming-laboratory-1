#include <iostream>
#include "createanddestroy.h"

void create();

CreateAndDestroy first(1, "Global");

int main() {
    std::cout << "Main Function: Execution Begins" << std::endl;
    CreateAndDestroy second(2, "Local Automatic in Main");
    static CreateAndDestroy third(3, "Local Static in Main");
    create();
    std::cout << "Main Function: Execution Resumes" << std::endl;
    CreateAndDestroy fourth(4, "Local Automatic in Main");
    std::cout << "Main Function: Execution Ends" << std::endl;
    return 0;
}

void create() {
    std::cout << "Create Function: Execution Begins" << std::endl;
    CreateAndDestroy fifth(5, "Local Automatic in Create");
    static CreateAndDestroy sixth(6, "Local Static in Create");
    CreateAndDestroy seventh(7, "Local Automatic in Create");
    std::cout << "Create Function: Execution Ends" << std::endl;
}