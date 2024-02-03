#include<bits/stdc++.h>
using namespace std;
// Run time polymorphism 
//Function Overriding

class Animal{
    public:
   virtual void speak(){
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
    //Upcasting 
    //jab bhi apn ek normal inheritance krre h jab child parent se inherit hora h or tum function call krre ho ye upcasting wale case where jaha par pointer parent type ka h object child class ka h is case me humesha function parent class ka call hota h 
    // agar me chahta hu ki run time pe decide ho to mujhe apne parent k function "virtual" mark krna padega or run time pe decide ho jaega ki mujhe child ka function call kna h
    // ye h run yime polymorphism 
Animal* a=new Dog();
a->speak();

}