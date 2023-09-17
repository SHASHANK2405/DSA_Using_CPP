#include<iostream>
using namespace std;
bool find(int arr[], int size , int key){
    for(int i=0 ; i<size ; i++){
        if(arr[i] == key){
            return true;
        }
        
        return false;
        
    }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int size = 8;
    int key ;
    cout<<"enter key to find :";
    cin>>key;

    if(find(arr,size,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}