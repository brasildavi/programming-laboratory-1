#include <iostream>
#include "createanddestroy.h"

CreateAndDestroy::CreateAndDestroy(int objectIndentification, std::string ptrMessage) {
    objectID = objectIndentification;
    message = ptrMessage;
    std::cout << "Construtor invocado!" << " | " << "Object: " << objectID << " | " << "Message: " << message << std::endl;
}

CreateAndDestroy::~CreateAndDestroy() {
    std::cout << "Destrutor invocado!" << " | " << "Object: " << objectID << " | " << "Message: " << message << std::endl;
}
