#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the value of n :";
    cin>>n;
    for(int i=0 ; i<n;i++){
        int c=i+1;
        for(int j =0; j<n-1-i ; j++){
            cout<<" ";
            
        }
        for(int j=0 ; j<i+1 ; j++){
            cout<<c;
            c++;
        }
        int s = 2*i;
        for(int j=0; j<i; j++){
            
            cout<<s;
            s--;
        }
        cout<<endl;
    }
}