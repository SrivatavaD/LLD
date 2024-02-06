#include<iostream>
using namespace std;

//Write a function to populate an array with multiple of 10.
// void printArray(int arr[] , int size){
//     //printing
//     for(int index=0; index<=size-1;index++){
//         cout<<arr[index]<<" ";
//     }
// }

// void storeMultipleOf10(int num[] ,int size){
//     int count =1;
//     for(int index=0;index<=size-1;index++){
//         num[index] = 10*count;
//         count++;
//     }
// }
// int main(){
//     int arr[10];
//     int size = 10;
//     storeMultipleOf10(arr,size);
//     printArray(arr,size);
// }

//Flip 1 to 0 and 0 to 1 in ans array

void printArray(int arr[] , int size){
    //printing
    for(int index=0; index<=size-1;index++){
        cout<<arr[index]<<" ";
    }
}

void flipZerotoOne(int arr[], int size){
    for(int index = 0 ; index<size ; index++){
        if(arr[index]==1){
            arr[index] == 0;
        } else {
            arr[index] == 1;
        }
        }
}
int main(){
    int arr[] = {1,1,0,0,0,1,0,1};
            int size = 8;
            cout<<"Before";
            printArray(arr,size);
            cout<<endl;
            cout<<"After";
            printArray(arr,size);
            cout<<endl;
            flipZerotoOne(arr,size);
            return 0;

}
    