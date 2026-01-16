// working with namespaces

#include <iostream>
// create namespace

namespace first{
    int a;

}
namespace second{
    int a;

}
// using namespace second; not recommended

int main(void){
    first :: a = 10;
    std:: cout << first:: a;

    return 0;
}