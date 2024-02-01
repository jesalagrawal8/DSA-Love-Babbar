#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
int age;
int weight;
//Single inheritance is a type of inheritance in object-oriented 
// programming where a class can inherit properties and behaviors
// from only one base class. In other words, a derived class can have only one parent class.
void eat(){
    cout<< " Eating "<< endl;

}
};

class Cat : public Animal{

};
int main(){
  Cat d1;
    d1.eat();


}
