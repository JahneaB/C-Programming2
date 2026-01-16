//
#include <iostream>

#include <string>

int main(void){
    
    std:: string str = "Hello";

    std::cout << str<< std :: endl;
    std :: cout << "The sting size is " << str.size() << std::endl;
    
    // append method
    str += " World!";
    std::cout << str<< std :: endl;
    std :: cout << "The sting size is " << str.size() << std::endl;

    return 0;
}