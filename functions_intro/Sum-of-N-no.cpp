#include<iostream>
using namespace std;

int sum(int num){
    int sum = 0;
    for(int i = 0; i<=num ; i++){
        sum = sum +i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the no. of elements :";
    cin>>n;
    int ans = sum(n);
    cout<<"total sum of all elements is :"<<ans<<endl;
    return 0;
}