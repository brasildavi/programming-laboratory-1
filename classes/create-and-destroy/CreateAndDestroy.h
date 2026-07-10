#ifndef CREATEANDDESTROY_H
#define CREATEANDDESTROY_H

#include <string>

class CreateAndDestroy {
    private:
        int objectID;
        std::string message;
    public:
        CreateAndDestroy(int objectID, std::string message);
        ~CreateAndDestroy();
};

#endif