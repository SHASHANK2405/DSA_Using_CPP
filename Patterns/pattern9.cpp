#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j = 0 ; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0 ; j<2*i+1 ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=0; i<n; i++){
        for(int j = 0 ; j<i+1; j++){
            cout<<"*";
        }
        for(int r=0 ; r<2*n-2*i-1 ; r++){
                cout<<" ";
            }
        for(int j = 0 ; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}