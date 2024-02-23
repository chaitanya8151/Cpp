#include<iostream>
using namespace std;
int main()
{
    //if statement
    int n;
    cin>>n;
    if(n>0)
    {
        cout<<"positive"<<endl;
    }
    //if-else 
    int num;
    cout<<"Enter an number: ";
    cin>>num;
    if(num>=0){
        cout<<"you entered an positive integer: "<<num<<endl;
    }
    else{
        cout<<"you've entered an negative integer: "<<num<<endl;
    }

    //if else....elseif Statement.
    int checkNum;
    cout<<"Enter an number to check whethere it is positive or negative: ";
    cin>>checkNum;
    if(checkNum>0){
        cout<<"You've entered an positve number: "<<checkNum<<endl;
    }
    else if(checkNum<0){
        cout<<"You've entered an negative number: "<<checkNum<<endl;
    }
    else{
        cout<<"You've entered 0"<<endl;
    }
    cout<<"This line is always printed/executed\n";
    return 0;
}