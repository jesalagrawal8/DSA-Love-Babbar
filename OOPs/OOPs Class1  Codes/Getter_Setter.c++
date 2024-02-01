#include<bits/stdc++.h>
using namespace std;
//by getter and setter function we can easily access private data 
class Animal{
 private:
   int age;
   int weight;
 public:
   void eat(){
    cout<< " Eating "<< endl;
   }
   int getAge(){
    return this->age;
   }
   int setAge(int age){
    this->age = age;
    cout<<age;
   }
};

int main(){
 Animal a;
 a.eat();
a.setAge(8);
}
