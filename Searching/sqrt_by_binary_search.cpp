#include<iostream>
using namespace std;

 int findSqrt(int n){
    int s=0;
    int e = n;
    int mid = s+(e-s)/2;
    int target = n;
    int ans =-1;

    while(s<=e){
        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid > target){
            e= mid -1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    } 
    return ans;
}

int main(){
    int n;
    cout<<"enter the no. whose sqrt is to be calculated :";
    cin>>n;

    int value =findSqrt(n);
    cout<<"the Sqrt of given no. is :"<<value<<endl;

    int precision;
    cout<<"enter the no. of floating digits :";
    cin>>precision;
    double step =0.1;
    double finalAns =value ;

    for(int i= 0; i<precision ; i++){

        for(double j=finalAns ; j*j <=n ; j=j+step ){
            finalAns =j;
        }
        step=step/10;
    }
    cout<<"Final ans is :"<<finalAns<<endl;

    return 0;
}