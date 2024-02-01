#include<bits/stdc++.h>
using namespace std;
//here data members and member functions are wraps up in class 
//this is an example of encapsulation
class Animal{
 public:
   int age;
   int weight;

   void eat(){
    cout<< " Eating "<< endl;
   }
};

int main(){
 Animal a;
 a.eat();

}