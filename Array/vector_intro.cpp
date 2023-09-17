#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;

    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

        // insert element in a vector  

    arr.push_back(5);
    arr.push_back(6);
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

        // delete element in a vector 

    arr.pop_back();
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    vector<int>brr(10 , 69);
    cout<<"size of brr :"<<brr.size()<<endl;
    cout<<"capacity of brr :"<<brr.capacity()<<endl;

    for(int i = 0 ; i<brr.size() ; i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}