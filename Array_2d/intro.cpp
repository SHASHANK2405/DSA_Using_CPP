#include<iostream>
#include<limits.h>           //for INT_MIN
using namespace std;

int getMax(int arr[][3] , int row , int col){
    int maxi = INT_MIN;
    for(int i =0;i<row ; i++){
        for(int j=0; j<col ; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
    
}

// bool findKey(int arr[][3] , int row , int col , int key){
//     for(int i =0;i<row ; i++){
//         for(int j=0; j<col ; j++){
//             if(arr[i][j] == key){
//                 return true;
//             }
//         }
//     }
//     return false;
    
// }

int main(){
        // int arr[3][3];

        // int brr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

        // // cout<< brr[2][2]<<endl;

        // for(int i = 0 ; i< 3 ;i++){
        //     for(int j=0 ;j<3 ;j++){
        //         cout<<brr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;

        // for(int i = 0 ; i< 3 ;i++){
        // for(int j=0 ;j<3 ;j++){
        //     cout<<brr[j][i]<<" ";
        // }
        // cout<<endl;
        // }

// printing 2d array 

        // int arr[4][3];
        // int rows =4;
        // int cols =3;
        // cout<<"enter the array :"<<endl;
        // for(int i=0 ;i<rows ;i++){
        //     for(int j=0 ;j<cols ;j++){
        //         cin>>arr[i][j];
        //     }
        // }
        // cout<<"printing array"<<endl;

        // for(int i=0 ;i<rows ;i++){
        //     for(int j=0 ;j<cols ;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

// sum row wise

        // int arr[3][3]={{1,7,3}, {11,32,2},{69,33,10}};
        // int row =3;
        // int col =3;


        // for(int i=0 ;i<row ;i++){
        //     int sum =0;
        //     for(int j=0 ;j<col ;j++){
        //         sum = sum + arr[i][j];
        //     }
        //     cout<<"sum of row "<<i<<"is "<<sum<<endl;
        // }

// 
// searching 
        // int arr[3][3]={{1,7,3}, {11,32,2},{69,33,10}};
        // int row =3;
        // int col =3;
        // int key = 3;
        // cout<<findKey(arr , 3 , 3 , key);

// get max 
int arr[3][3]={{1,7,3}, {11,32,2},{69,33,10}};
int row =3;
int col =3;
cout<<getMax(arr , 3 , 3);

    return 0;
}