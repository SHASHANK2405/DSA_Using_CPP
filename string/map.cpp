#include<iostream>
#include<algorithm>
#include<string.h>
#include<map>
using namespace std;

int main(){
    map<int , char> meraMap;

    meraMap[0] = 'a';
    meraMap[1] = 'b';
    meraMap[4] = 'c';
    meraMap[8] = 'd';

    cout<<"the ans is : "<<meraMap[8]<<endl;

    return 0;
}