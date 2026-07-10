#ifndef People_H
#define People_H

#include <string>

class People {
    private:
        std::string name;
        int age;
    public:
        People(std::string n, int a);
        void setName(std::string n);
        void setAge(int a);
        void display();        
};

#endif