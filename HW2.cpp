#include <iostream>
#include<math.h>
using namespace std;

// Write a function to print counting from 1 to 100.

// void printCounting()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     printCounting();
// }
        //to find the simple interest usinf function
        // float findSmpleInterest(float P, float R, float T){
        //     return P*R*T/100.0;
        // }
        // int main(){
        //     float P = 1256;
        //     float R = 2.7;
        //     float T = 1.0;
        //     float result = findSmpleInterest(P,R,T);
        //     cout<<"Simple Interest = " <<result;
        //     return 0;
        // }

        //Print prime numbers from 1 to 100.

        // bool isPrime(int num){
        //     bool flag = false;
        //     int factor = 0;
        //     for(int i = 2; i<num; i++){
        //         if(num%i==0){
        //         factor++;
        //         break;
        //     }

        //     }
        //     return factor!=1;
        // }
        // void printPrimeNumbersFrom1to100(){
        //     for(int i = 2; i<=100; i++){
        //         if(isPrime(i)){
        //             cout<<i<<" ";
        //         }
        //     }
        // }
        // int main(){
        //     printPrimeNumbersFrom1to100();
        //     return 0;
        // }

        //write a program to find the eligibility to vote or not.

        // bool isEligibleToVote(int age){
        //     return age>=18;
        // }
        // int main(){
        //     int age = 19;
        //     if(isEligibleToVote(age)){
        //         cout<<"Eligible";
        //     }
        //     else{
        //         cout<<"Not Eligible";
        //     }
        //     return 0;
        // }
        

        //Make a function to calculate SIP.

        float sipCalculator(float val,float payments,float rate){
            float monthly_rate = (rate/1200);
            float fv = val*(1+monthly_rate)*((pow((1+monthly_rate),payments)-1)/monthly_rate);
            return fv;
        }
        int main(){
            float result = sipCalculator(32000,10,2.5);
            cout<<"SIP = "<<result;
            return 0;
        }



