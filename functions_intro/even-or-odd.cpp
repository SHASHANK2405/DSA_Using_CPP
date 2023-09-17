#include<iostream>
using namespace std;

void check(int num){
    if(num%2==0){
        cout<<num<<" is aa even number";
    }
    else{
        cout<<num<<" is an odd number";
    }
}

int main(){
    int n;
    cout<<"enter the nuber :";
    cin>>n;
    check(n);
}