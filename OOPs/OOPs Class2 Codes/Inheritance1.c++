#include<bits/stdc++.h>
using namespace std;
 //when child classcan acces all the properties of parent class this is called inheritance
class Animal{
public:
int age;
int weight;

void eat(){
    cout<< " Eating "<< endl;

}
};

class Dog : public Animal{

};
int main(){
    Dog d1;
    d1.eat();


}
