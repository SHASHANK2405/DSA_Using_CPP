#include<iostream>
using namespace std;

void transpose(int arr[][3] , int r , int c ,int transposeArr[][3]){
    for(int i=0 ;i<r ;i++){
        for(int j=0; j<c ; j++){
            // swap(arr[i][j] , arr[j][i]);
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void printArray(int arr[][3], int r , int c){
    for(int i=0 ;i<r ;i++){
        for(int j=0; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3]={{1,7,3}, {11,32,2},{69,33,10}};
    int row =3;
    int col =3;


    cout<<"Printing array "<<endl;
    printArray(arr , row , col);
    int transposeArr[3][3];
    cout<<"starting transpose "<<endl;
    transpose(arr , row , col , transposeArr);
    cout<<"printing array again "<<endl;
    printArray(transposeArr , row , col);
    return 0;
}