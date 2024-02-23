#include<iostream>
using namespace std;
int main(){
    char ipc;
    cin>>ipc;
    if(ipc>='a' && ipc<='z'){
        cout<<"this is lower case"<<endl;
    }
    else if(ipc>='A' && ipc<='Z'){
        cout<<"this is upper case"<<endl;
    }
    else if(ipc>='0'&& ipc<='9'){
        cout<<"this is digit"<<endl;
    }
    return 0;
}