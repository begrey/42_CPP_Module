#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP
#include <iostream>

class phoneBook {
public:
    //멤버변수
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string phone;
    std::string secret;

public:
    //생성자
    phoneBook()
    {
        this->f_name = "";
        this->l_name = "";
        this->nickname = "";
        this->phone = "";
        this->secret = "";
        //std::cout << "default phonebook." << std::endl;
    }
    phoneBook(std::string f_name, std::string l_name, std::string nickname, std::string phone, std::string secret) {
        this->f_name = f_name;
        this->l_name = l_name;
        this->nickname = nickname;
        this->phone = phone;
        this->secret = secret;
    }
    //소멸자(다중 정의 불가능)
    // ~phoneBook() {
    //     std::cout << "phonebook is expired!!XD." << std::endl;
    // }
};
#endif