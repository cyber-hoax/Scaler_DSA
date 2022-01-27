//
//  isDictionary.cpp
//  Hashing
//
//  Created by CYBERHOAX on 23/01/22.
//

/*
 Q1. Is Dictionary?
 Solved
 character backgroundcharacter
 Stuck somewhere?
 Ask for help from a TA & get it resolved
 Get help from TA
 Problem Description

 In an alien language, surprisingly they also use english lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.

 Given an array of words A of size N written in the alien language, and the order of the alphabet denoted by string B of size 26, return 1 if and only if the given words are sorted lexicographicaly in this alien language else return 0.



 Problem Constraints

 1 <= N, length of each word <= 105

 Sum of length of all words <= 2 * 106



 Input Format

 First argument is a string array A of size N.

 Second argument is a string B of size 26 denoting the order.



 Output Format

 Return 1 if and only if the given words are sorted lexicographicaly in this alien language else return 0.



 Example Input

 Input 1:

  A = ["hello", "scaler", "interviewbit"]
  B = "adhbcfegskjlponmirqtxwuvzy"
 Input 2:

  A = ["fine", "none", "no", mango ]
  B = "qwertyuiopasdfghjklzxcvbnm"                          i-1 < i < i+1 < i+2  ;


 Example Output

 Output 1:

  1
 Output 2:

  1

 Example Explanation

 Explanation 1:

  The order shown in string B is: h < s < i for the given words. So return 1.
 Explanation 2:

  "none" should be present after "no". Return 0.

 */

#include <stdio.h>
#include <iostream>
#include<vector>
#include <unordered_map>
#include <string>

using namespace std;

bool isDictionary(string&a ,string&b ){

    
}


int main(){
//    string A[] = {"hello", "scaler", "interviewbit" };
    vector<string> A ;
    A.push_back("hello");
    A.push_back("scaler");
    A.push_back("interviewbit");
    string B = "adhbcfegskjlponmirqtxwuvzy" ;
    unordered_map<char, int > hash;
    
//    int mapping[26];
//    for(int i = 0 ; i < 26 ;i++){
//        mapping[B[i] - 'a'] = i ;
//
//
//
//    }
//    for(int i = 0 ; i< 26 ; i++){
//        cout << B[i] << " => " << mapping[i] << " =>" <<  endl ;
//    }
//
//    for(string &w : A){
//        for(char &c : w){
////            cout << c << endl ;
//            c = mapping[c- 'a'] ;
////         cout << w << " " <<  endl ;
//
//        }
//    }
//
//    return is_sorted(A.begin(), A.end());


    for(int i = 0; i <26 ; i++){
        hash.insert({B[i],i});
        
    }
    string order ;
    for(int i =0 ; i < A.size() -1 ; i++){
        if(!isDictionary(A[i] , A[i+1])) return false;
        
    }
    return true;
    
}
