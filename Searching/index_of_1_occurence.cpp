//  LOWER BOUND is a inbuild function for finding 1 occurrence

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOccurence(vector<int>v , int target){
    int s=0;
    int e = v.size() -1;
    int mid = s+ (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(v[mid] == target){
            ans = mid;
            e = mid -1;       // for first occurence
            //s = mid +1;       // for the last occurence
        }
        else if(target > v[mid]){
            s = mid +1;
        }
        else if(target < v[mid]){
            e=mid-1;
        }
        mid = s+ (e-s)/2;
    }
    return ans ;
}

int main(){
    vector<int> v{1,3,4,4,4,4,6,7};
    int target = 4;
    int index_of_1_occurence = firstOccurence(v , target);

    cout<<"ans is "<< index_of_1_occurence<<endl;

    return 0;
}