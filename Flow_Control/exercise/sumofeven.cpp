#include<iostream>
using namespace std;
int sumeven(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<"the sum of even number is:"<<sumeven(n);
}