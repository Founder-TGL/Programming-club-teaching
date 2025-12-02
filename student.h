#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class person{
    private: 
        std::string name;

    public: 
        person(std::string name){this->name = name;}
        person(){name = "default";}
};

#endif