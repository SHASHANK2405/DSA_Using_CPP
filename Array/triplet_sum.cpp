#include<iostream>
#include<vector>
using namespace std;

int main(){

            // to print every triplet from an array 

        // vector<int>arr{10,20,30,40,50,60};
        // for(int i = 0 ; i<arr.size(); i++){
        //     int element = arr[i];
        //     for(int j= i+1 ; j< arr.size() ; j++){
        //         int element2 = arr[j];
        //         for(int k = j+1 ; k<arr.size() ; k++){
        //             cout<<"("<<element<<","<<element2<<","<<arr[k]<<")"<<endl;
        //         }
        //     }
        // }

        // to print the triplet sum 

    vector<int>arr{10,20,30,40,50,60};
    int sum= 80;
        for(int i = 0 ; i<arr.size(); i++){
            int element = arr[i];
            for(int j= i+1 ; j< arr.size() ; j++){
                int element2 = arr[j];
                for(int k = j+1 ; k<arr.size() ; k++){
                    int element3 = arr[k];

                    if(element + element2 + element3 == sum ){
                    cout<<"element found :"<<"("<<element<<","<<element2<<","<<element3<<")"<<endl;
                }
                
               }
            }
        }


    return 0;
}