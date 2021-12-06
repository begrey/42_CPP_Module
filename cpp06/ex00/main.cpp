#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong Argument!" << std::endl;
        return 1;
    }
    std::string arg = argv[1];
//    std::stringstream doub(arg);
//     double d;
//     doub >> d;
//     std::cout << d << "\n";
    convert c;
    c.parsing(arg);
}