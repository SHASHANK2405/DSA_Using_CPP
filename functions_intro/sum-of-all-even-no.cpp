#include<iostream>
using namespace std;
int evenSum(int num){
    int sum = 0;
    for(int i =2; i<=num ; i=i+2){
        sum = sum +i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the no. of elements :";
    cin>>n;
    int ans = evenSum(n);
    cout<<"total sum of all even elements is :"<<ans<<endl;
    return 0;
}