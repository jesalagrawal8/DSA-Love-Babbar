#include<bits/stdc++.h>
using namespace std;
// Run time polymorphism 
//Function Overriding

class Animal{
    public:
    void speak(){
        cout<< " Speaking" << endl;
    }
};
class Dog : public Animal{
    public:
    //override
    void speak(){
        cout<< " Barking " << endl;
 
    }
};

int main(){
    //downcasting
Dog* b = (Dog* )new Animal();
b->speak();
}