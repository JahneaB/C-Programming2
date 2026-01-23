#include <iostream>
#include <random>


int main(){
    // generate seed
    std:: random_device rd;

    // create random number engine and intialize it with seed
    std:: mt19937 engine(rd());

    // define a distribution - how evenly number will e generated
    std::uniform_int_distribution<int> dist(1,100);

    for (int i = 0; i <20; i++){
        int x = dist(engine);
        std:: cout <<x << std:: endl;
    }


    return 0;
}