#include<iostream>
#include<string.h>

class player{
    const char *name;
    int age;
    public:
    player(){
        name ="Empty";
        age = 0;
        std::cout << name << "\n" << age;
    }
};

int main(){
    player p1;

}