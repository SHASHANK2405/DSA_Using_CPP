#include<iostream>
#include<vector>
using namespace std;

int main(){

            // to print every pair from an array 

        // vector<int>arr{10,20,30,40,50,60};
        // for(int i = 0 ; i<arr.size(); i++){
        //     int element = arr[i];
        //     for(int j= i+1 ; j< arr.size() ; j++){
        //         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        //     }
        // }

    vector<int>arr{10,20,30,40,50,60};
    int sum= 80;
        for(int i = 0 ; i<arr.size(); i++){
            int element = arr[i];
            for(int j= i+1 ; j< arr.size() ; j++){
                if(element + arr[j] == sum ){
                cout<<"element found :"<<"("<<element<<","<<arr[j]<<")"<<endl;
               }
            }
        }


    return 0;
}