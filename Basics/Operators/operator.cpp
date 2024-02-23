/* Operator used to perform operation on variable and values e.g +,-,/,%*/
#include<iostream>
using namespace std;
int main()
{
    //Arithmetic Operator
    int x=5,y=45;
    cout<<x+y<<endl;

    float fl=12.80,f2=2.46;
    cout<<fl-f2<<endl;

    int m1=9,m2=2;
    cout<<"multiplication of given two numbers is: "<<m1*m2<<endl;

    int d1=8,d2=4;
    cout<<d1/d2<<endl;

    int rem1=11,rem2=5; 
    cout<<rem1%rem2<<endl;    // modulous (%) op provide remainder after division

    int inv=8;
    cout<<++inv<<endl;
    cout<<--inv<<endl;

    //Assignment operator: Additional assignment operator
    int add=5;
    add+=40;
    cout<<"the updated value is: "<<add<<endl;

    //Comparision Operator
    int eq1=45;
    float eq2=78.98;
    cout<<(eq1==eq2)<<endl; //'equal to' Operator

    int a=8,b=9;
    cout<<(a!=b)<<endl; //"Not equal" Operator

    int gr1=3,gr2=9;
    cout<<(gr1>gr2)<<endl; //lessthan operator
    int ls1=9,ls2=15;
    cout<<(gr1<gr2)<<endl; //greater than operator


    //Logical Operator
    int land=4;
    cout<<(land>2 && land<45)<<endl; //logical And Gate (&&)

    int lor=45;
    cout<<(lor<18 || lor>93)<<endl; //Logical Or gate(||)

    int lnot=45;
    cout<<!(lnot<18)<<endl; //Logical Not gate(!)
    return 0;

}