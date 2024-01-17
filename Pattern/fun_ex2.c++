#include<bits/stdc++.h>
using namespace std;
//student grade problem
char getGrade(int marks){
    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=60){
        return 'C';
    }
    else if(marks>=40){
        return 'D';
    }
    else{
        return 'F';
    }
}
int main()
{
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;

    char finalgrade = getGrade(marks);
    cout<<finalgrade;
}