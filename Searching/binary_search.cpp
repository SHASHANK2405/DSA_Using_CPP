#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[] , int size , int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if(target<element){
            end = mid +1;
        }
        else{
            start = mid +1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[8]={2,4,6,8,10,12,14,16};
    int size = 8;
    int target = 8;

    int ans = binarySearch(arr , size , target);

    if(ans == -1){
        cout<<"target is not fount "<<endl;
    }
    else{
        cout<<"target is found at "<<ans<<endl;
    }

    //PREDEFINED FUNCTION

        // vector<int> v{1,2,3,4,5,6};
        // if(binary_search(v.begin() , v.end() ,3)) {
        //     cout<<"found"<<endl;
        // }
        // else{
        //     cout<<"not found "<<endl;
        // }
        // return 0;
}