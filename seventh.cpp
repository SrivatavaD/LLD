#include<iostream>
using namespace std;

// void printCounting() {
//     for(int i = 1; i<=5; i++){
//         cout << i << " ";
//     } cout << endl;

// }
// int main(){

//     printCounting();
//     cout<<"Devansh"<<endl;
//     printCounting();

//     int a;
//     cin>>a;
//     cout<<a<<endl;
//     printCounting();

// int sum(int a, int b){
//     int totalSum = a+b;
//     return totalSum;
// }

// void printMyname(){
//     cout<<"Devansh" <<endl;
// }
// int main (){
//     int ans  = sum(5,10);
//     cout << ans << endl;
//     return 0 ;

// }
//     // cout<<"HI"<<endl;
//     // for(int i = 1; i<=5; i++){
//     //     cout << i << " ";
//     // } cout << endl;

int getMultiplication(int x, int y, int z){
    int result = x*y*z;
    return result;
}

void printNAmetenTimes(){
    for(int i = 1;i<5; i++){
        cout<<"Babbar"<< endl;
    }
}
void printMultiples(int num){
    for(int i ; i<=0; i++){
        cout<<num*i<<endl;

    }
}

char convertIntoUppercase(char ch){
    char answer = ch -'a' +'A';
    return answer;
}

int main(){
    //function calling
    // int multiplication = getMultiplication(5,6,4);
    // cout<<multiplication<<endl;

    // printNAmetenTimes();

    char result = convertIntoUppercase('k');
    cout<<result<<endl;
    return 0;


}

     



   