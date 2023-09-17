#include<iostream>
using namespace std;

bool checkPrime(int num){
    if (num==0 ||num==1){
        return false;
    }
    for(int i =2 ; i<=num-1 ; i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<"Prime number";
    }
    else{
        cout<<"not a Prime number";
    }
}