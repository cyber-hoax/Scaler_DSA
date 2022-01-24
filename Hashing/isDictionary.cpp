//
//  isDictionary.cpp
//  Hashing
//
//  Created by CYBERHOAX on 23/01/22.
//

#include <stdio.h>
#include <iostream>
#include<vector>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
//    string A[] = {"hello", "scaler", "interviewbit" };
    vector<string> A ;
    A.push_back("hello");
    A.push_back("scaler");
    A.push_back("interviewbit");
    string B = "adhbcfegskjlponmirqtxwuvzy" ;
   
    int mapping[26];
    for(int i = 0 ; i < 26 ;i++){
        mapping[B[i] -'a'] = i ;
        
    }
    
    for(string &w : A){
        for(char &c : w){
//            cout << c << endl ;
            c = mapping[c- 'a'] ;
//            cout << mapping[c - 'a'] << " " << c << endl ;

        }
    }
    return is_sorted(A.begin(), A.end());
   
  

}
