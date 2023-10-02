#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void convertArray(char word[]){
    int n = strlen(word);
    for(int i=0; i<n ; i++){
        word[i] = word[i] -'a' +'A';

    }
}

int main(){
    char word[100];
    cin.getline(word , 100);
    convertArray(word);
    cout<<"uppercase word :"<<word;

    return 0;
}