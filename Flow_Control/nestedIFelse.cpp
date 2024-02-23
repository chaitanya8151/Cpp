// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an number: ";
    cin>>num;
    if(num!=0)
    {
        if(num>0)
            cout<<"You have entered positive number: "<<num<<endl;
        else  
            cout<<"You have entered negative number: "<<num<<endl;
    }
    else
        cout<<"the number is 0 and it is neither positive nor zero"<<endl;
}