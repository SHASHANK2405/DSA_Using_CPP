#include<iostream>
#include<vector>
using namespace std;

int main(){

    //printing vector in vector form 
        // vector< vector<int> >arr;

        // vector<int> a{1,2,3};
        // vector<int> b{4,7,9};
        // vector<int> c{2,1,0};
        
        // arr.push_back(a);
        // arr.push_back(b);
        // arr.push_back(c);

        // for(int i =0 ; i< arr.size() ; i++){
        //     for(int j=0; j<arr[0].size() ; j++){            //if cols are not same in every row then we have to use [i] instead of [0]
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }


int row = 5;
int col =5;
vector< vector<int> >arr(row , vector<int>(col , -8));
for(int i =0 ; i< arr.size() ; i++){
            for(int j=0; j<arr[0].size() ; j++){           
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}
