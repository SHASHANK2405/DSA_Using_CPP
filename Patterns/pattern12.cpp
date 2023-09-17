#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j = 0 ; j<n+3-i; j++){
            cout<<"*";
        }
        for(int j=0 ; j<2*i+1; j++){
            if(j==0 || j==2 || j==4 || j==6 || j==8){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        for(int j = 0 ; j<n+3-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

        //     OUTPUT
        // ********1********
        // *******2*2*******
        // ******3*3*3******
        // *****4*4*4*4*****
        // ****5*5*5*5*5****