#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the operator which you want to perform the operation:";
    char op;
    cin>>op;
    cout<<"enter two no on which youve to perfrom operations:";
    float n1,n2;
    cin>>n1>>n2;
    switch(op){
        case '+':
            cout<<"the sum of two numbers is: "<<n1+n2<<endl;
        case '-':
            cout<<"The subtraction between two numbers is: "<<n1-n2<<endl;
        case '*':
            cout<<"Multiplication of two numbers is: "<<n1*n2<<endl;
        case '/':
            cout<<"the division of given two number is: "<<n1/n2<<endl;
        default:
            cout<<"you havent choose operator any betweeen( '+','-','*','/' )";
        
    }
    return 0;
}