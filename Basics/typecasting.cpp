#include<iostream>
using namespace std;
int main(){
    //typecasting:change of resulting datatype
    cout<<(5/3)<<endl;
    //implicit typecasting
    //float + int
    cout<<(5/3.0)<<endl;
    //char+int
    char lett='A';
    cout<<lett+1<<endl;
    lett=lett+1;
    cout<<lett<<endl;
    char ch=70;
    cout<<ch<<endl;
    
    //boolean int
    cout<<(true+1)<<endl;
    //explicit typecasting 
    cout<<(float)5/3<<endl;
    char letter='A';
    cout<<letter<<endl;
    cout<<char(letter+1)<<endl;
    double b=1.2;
    cout<<int(b+1);
    return 0;
}