#ifndef _Zombie_HPP
#define _Zombie_HPP
#include <iostream>

class Zombie {
private:
    //멤버변수
    std::string name;

    void announce(void);

public:
    //생성자
    Zombie()
    {
        ;
    }
    Zombie(std::string name)
    {
        this->name = name;
    }
    //소멸자
    ~Zombie()
    {
        std::cout << "Zombie finally dead!!" << std::endl;
    }
};
#endif