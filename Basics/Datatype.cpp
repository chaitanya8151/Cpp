#include<iostream>
using namespace std;
int main()
{
    //Use int when you need to store a whole number without decimals, like 35 or 1000
    int no=43;
    cout<< no<<endl;

    float fln=15.3652;
    cout<<fln<<endl;

    double dnm=12.457896;
    cout<<dnm<<endl;

    //scientific numbers
    /*A floating point number can also be a scientific number with an "e" to indicate the power of 10:*/
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1<<endl;
    cout << d1<<endl;

    int var=45e3;
    cout<<var<<endl;

    string name="Chaitanya Yadwad";
    cout<<"the name of student is: "<<name<<endl;
    bool coding=true;
    cout<<coding<<endl;
    bool partying=false;
    cout<<partying<<endl;



    return 0;
}
