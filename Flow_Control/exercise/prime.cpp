#include<iostream>
using namespace std;
void prime(int num){
    int flag=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag++;
        }
    }
    if(flag==0){
        cout<<num<<" is prime number"<<endl;
    }
    else        
        cout<<num<<" is not a prime number"<<endl;
}
int main(){
    int n;
    cin>>n;
    prime(n);
}