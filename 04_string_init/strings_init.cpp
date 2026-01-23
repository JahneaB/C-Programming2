#include <iostream>
#include <string>


int main(void){
    // Initialize string with value
    std:: string str1 ("this is first string");
   
    // Initialize string with another string
    std ::string str2(str1);

    // Initialize string with character and number of appearance
    std ::string str3 (100, '&');
    // Initialize string with a part of another string

    std :: string str4 (str1, 14, 6); // start from index 14 take index take 6 character

    std :: cout << str4 << std :: endl;
    std :: cout << str3 << std :: endl;
     
    if (str1 == str2){
        std :: cout << str4 + str1<< std::endl; 
    }
    std:: cout << str4.size;

    return 0;
}