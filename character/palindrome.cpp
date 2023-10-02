#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

bool isPalindrome(char word[]){
    int i=0;
    int n = strlen(word);
    int j=n-1;

    while(i<=j){
        if(word[i] != word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    char word[100];
    cin.getline(word , 100);

    if(isPalindrome(word)){
        cout<<"Palindrome";
    }
    else{
        cout<<"not Palindrone";
    }

    return 0;

}