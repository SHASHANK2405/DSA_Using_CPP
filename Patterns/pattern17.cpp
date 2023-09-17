#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the value of n :";
    cin>>n;
    int c=0;
    for(int i=0 ; i<n;i++){
        for(int j =0; j<i+1 ; j++){
            cout<<c+1;
            c++;
        }
        cout<<endl;
    }
}