#include<iostream>
using namespace std;

long long int fact(long long int num){
    long long int fac =1;
    for(int i=1 ; i<=num ; i++){
        fac = fac *i;

    }
    return fac;
}

int main(){
    int n;
    cout<<"enter the nuber :";
    cin>>n;
    long long int ans = fact(n);
    cout<<"factorial of "<<n<<" is :"<<ans;
    // cout<<13*12*11*10*9*8*7*6*5*4*3*2*1;
}