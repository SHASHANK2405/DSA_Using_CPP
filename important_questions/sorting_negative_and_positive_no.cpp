#include<iostream>
// #include<vector>
using namespace std;
void moveAllNegative(int*a , int n){
    int l=0 , h=n-1;
    while(l<h){
        if(a[l] <0 ){
            l++;
        }
        else if(a[h] >0 ){
            h++;
        }
        else{
            swap(a[l] , a[h]);
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[]={1,3,4,-3,6,-5};
    int n = sizeof(arr)/sizeof(int);
    
    moveAllNegative(arr , n);
    // for(int i=0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;

    return 0;
}