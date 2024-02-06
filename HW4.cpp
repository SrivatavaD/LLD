#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    //We have to use the concepts of functions to solve these question.
    //Q1 :- Reverse a string

    // void reverseString(string &st){
    //     int i = 0;
    //     int j = st.length()-1;
    //     while(i<=j){
    //         swap(st[i],st[j]);
    //         i++;
    //         j--;
    //     }
    // }
    // int main(){
    //     string st = "Devansh";
    //     reverseString(st);
    //     cout<<st;
    //     return 0 ;
    // }


     //Q2:- Check for Palindrome

     //A number is a palindrome number if reverse a of a number and number itself are equal.

    //  int main(){
    //     string st = "abccba";
    //     string temp = st;
    //     reverse(st.begin(),st.end());
    //     if(st==temp){
    //         cout<<"Palindrome";
    //     }
    //     else{
    //         cout<<"Not Palindrome";
    //     }
    //     return 0 ;

    //  }






    //Q3:- Count Vowel and consonants

    // int main(){
    //     string st = "Devansh is a good programmer";
    //     int vowelCount = 0;
    //     transform(st.begin(), st.end() , st.begin(), ::tolower);
    //     for(int i = 0; i<st.length(); i++){
    //         if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'){
    //             vowelCount++;
    //         }
    //     }
    //     cout<<"Number of vowel = "<<vowelCount;
    //     return 0 ;

    // }


    //Q4:- Valid Anagram or not
    //Q5:- Convert Case from upper to lower and vice versa
    //Q6:- To Convert a string into a integer

    int main(){
        string st ="10.26";
        cout<<stoi(st);
        return 0;
    }


    