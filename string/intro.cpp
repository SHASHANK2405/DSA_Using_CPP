#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
    // string str;
    // cin>>str;

    // cout<<str;

    // cout<<"length :"<<str.length()<<endl;
    // cout<<"isEmpty :"<<str.empty()<<endl;

    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // cout<<str.substr(0 , 4)<<endl;               //important 

    // string a ="shashank";
    // string b ="shashank";
    // if(a.compare(b) ==0){
    //     cout<<"a and b are exactly same string"<<endl;
    // }
    // else{
    //     cout<<"a and b are not same"<<endl;
    // }

    // string sen ="hello my friend how are you";
    // string target = "myass";

    // cout<<sen.find(target);

    // if(sen.find(target) == std::string::npos){     //important
    //     cout<< " Not Found "<<endl;
    // }

    // string word ="hello i am shashank gulati ";
    // word.replace(11 , 3, "second");
    // cout<<word<<endl;

    string alphabets ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    alphabets.erase(1 , 5 );
    cout<<alphabets;
    return 0;
}