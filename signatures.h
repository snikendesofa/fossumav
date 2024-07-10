#pragma once
#include <iostream>
#include <string> // Include the correct header

class Signature {
public:
    std::string hash;
    std::string name;
    int dangerlevel;

    Signature(std::string hash, std::string name, int dangerLevel){
        this->hash = hash;
        this->name = name;
        this->dangerlevel = dangerlevel;
    };
};