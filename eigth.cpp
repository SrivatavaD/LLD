#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    //printing
    for(int index=0; index<=size-1;index++){
        cout<<arr[index]<<" ";
    }
}

void storeMultipleOf10(int num[] ,int size){
    int count =1;
    for(int index=0;index<=size-1;index++){
        num[index] = 10*count;
        count++;
    }
}
int main(){
    // int arr[] = {10,20,30,40};
    // int size = 4;
    // printArray(arr,size);

    int arr[10];
    int size = 10;
    storeMultipleOf10(arr,size);
    printArray(arr,size);

    // intialising the value from 0.
    // int arr[5] = {-1};
    // int size = 5;
    // printArray(arr,size);

    //array
    //int arr[10000];

    //decalation
    // int laxman[101];
    // int arr[11];

    // //initialization
    // int brr[] = {1,2,3,4,4,5};
    // int crr[5] = {1,2,3,4,5};

    //accessing elements in an array ; traverse.
    // int multipleof2 [10] = {2,4,6,8,10,12,14,16,18,20};

    
    // for(int i=0;i<=9;i++){
    //     cout << multipleof2[3] << endl;
    // }

    //input in an array
    // int arr[5];
    // for(int index = 0; index<=5; index++){
    //     cout<<"Enter the value for arr["<<index<<"]: ";
    //     cin>> arr[index] ;
    //     cout<< endl;
    // }
    // for(int index=0;index<=5;index++){
    //     cout << arr[index] << " ";
    // }

    // int arr[] = {10,20,30,40,50};
    // int sum = 0;
    // for(int index=0; index<=4; index++) {
    //     sum = sum+arr[index];
    // }
    // cout<< "Total sum: " << sum << endl;





    return 0;
}