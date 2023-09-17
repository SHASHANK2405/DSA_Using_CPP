#include<iostream>
using namespace std;

int areaCircle(int rad){
    float pi = 3.14;
    return pi*rad*rad;
}

int main(){
    int r;
    cout<<"enter the radius of circle :";
    cin>>r;
    float ans = areaCircle(r);
    cout<<"the area of circle of givrn radius :"<<ans<<endl;
}