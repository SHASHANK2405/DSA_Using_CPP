// INDEX BASED  algo.

#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;

    while(s <= e){
        //if single element is present that is the answer
        if(s == e){
            return s;
        }
        if(mid%2==0){
            //answer is at right side
            if(arr[mid] == arr[mid+1]){
                s=mid+2;
            }
            //answer is at left side 
            else{
                e=mid;
            }
        }
        else{
            ////answer is at right side
            if(arr[mid] == arr[mid-1]){
                s = mid+1;
            }
            //answer is at left side
            else{
                e = mid -1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout<<"Index of odd one among pairs is "<<ans<<" and the value is : "<<arr[ans]<<endl;    

    return 0;
}