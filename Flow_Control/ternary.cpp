#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter two numbers to be compared: ";
    cin>>m>>n;
    (m>n)?cout<<m<<" is greater than "<<n:cout<<n<<" is greater than "<<m<<endl;
}