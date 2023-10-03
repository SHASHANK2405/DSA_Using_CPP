#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

bool cmp(char first , char second){
    return first > second;
}

bool compare(int a , int b){
    return a>b;
}

int main(){
    string s = "gulati";
    sort(s.begin() , s.end() ,cmp);

    vector<int>v{5,3,1,4,2};
    sort(v.begin() , v.end() , compare);

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<s<<endl;

    return 0;
}