#include<iostream>
using namespace std;

 int getLength(char arr[]) {

    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;

    }
    return count;
}
    void concatArray(char a[], char b[]){
        int aIndex = getLength(a);
        int bIndex = 0;

        while(b[bIndex] != "\0"){
            //start copying
            a[aIndex] = b[bIndex];
            aIndex++;
            bIndex++;

        }

        //end a string with null character

        a[aIndex] = '\0';

    }

    void copyArray(char actualArr[], char copyArr[]){
        int aIndex = 0;
        int BIndex = 0 ;
        while(actualArr(aIndex) != '\0'){

            //start copying
            copyArr[bIndex] = actualArr[aIndex];
            aIndex++;
            bIndex;

                    }
                    copyArr[bIndex] = '\0';
    }



int main(){

    char a[50] = "Love";
    char b[50] = "babbar";
    concatArray(a,b);

    cout<<"Printing a: " <<a<<endl;

    // char arr[] = "Devansh";
    // cout<<getLength(arr) << endl;

     //decalare
    //  char arr[10];
    //  cout<<arr[3]<<endl;

    // int arr[4] = {1,2,3,4};
    // cout<<arr<<endl;

    // char brr[5] = "love";
    // cout<<brr<<endl;
  
    //Common Operations

    //Find length



     return 0;
}