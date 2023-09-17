#include<iostream>
using namespace std;
float convertTemp(float cel){
    return cel*9/5+32;

}

int main(){
    float cel;
    cout<<"enter temperature in celsius :";
    cin>>cel;
    float ans = convertTemp(cel);
    cout<<"temperature in fahrenheit :"<<ans;
}