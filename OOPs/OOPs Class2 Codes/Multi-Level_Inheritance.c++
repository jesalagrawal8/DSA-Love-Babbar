#include<bits/stdc++.h>
using namespace std;
// when parent class is inherit by child class and child class is inhrited by grandchild class
//multilevel inheritance occur
class Fruits{
public: 
string name;

};

class Mango: public Fruits{
    public:
    int weight; 
};
class Alphanso : public Mango{
    public:
    int sugarlevel;
};
int main(){
Alphanso a ;
cout<< a.name << " " << a.weight<< " "<< a.sugarlevel;
} 