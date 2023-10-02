#include<iostream>
#include<algorithm>
using namespace std;

int getLength(char name[]){
    int len =0;
    int i=0;

    while (name[i] != '\0')
    {
        len ++;
        i++;
    }
    return len;
    
}

int reverseArray(char name[]) {
    int i=0;
    int n= getLength(name);
    int j=n-1;

    while(i<= j){
        swap(name[i] , name[j]);
        i++;
        j--;
    }
}

int main(){

    char name[100];
    cin>>name;
    cout<<"initially :"<<name<<endl;
    reverseArray(name);
    cout<<"final :"<<name<<endl;
return 0;
}