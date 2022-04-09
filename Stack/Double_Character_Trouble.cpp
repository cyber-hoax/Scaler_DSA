//
//  Double_Character_Trouble.cpp
//  Stack
//
//  Created by CYBERHOAX on 09/04/22.
//
/*
 You are given a string A.

 An operation on the string is defined as follows:

 Remove the first occurrence of the same consecutive characters. eg for a string "abbcd", the first occurrence of same consecutive characters is "bb".

 Therefore the string after this operation will be "acd".

 Keep performing this operation on the string until there are no more occurrences of the same consecutive characters and return the final string.



 Problem Constraints
 1 <= |A| <= 100000



 Input Format
 First and only argument is string A.



 Output Format
 Return the final string.



 Example Input
 Input 1:

  A = abccbc
 Input 2:

  A = ab


 Example Output
 Output 1:

  "ac"
 Output 2:

  "ab"


 Example Explanation
 Explanation 1:

 Remove the first occurrence of same consecutive characters. eg for a string "abbc",
 the first occurrence of same consecutive characters is "bb".
 Therefore the string after this operation will be "ac".
 Explanation 2:

  No removals are to be done.
 */


#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std ;

int main(){
    string A = "cddfeffe";
    stack<char> st ;
    vector<char> vec;
    for(auto s: A){
        if(st.empty()){
            st.push(s);
        }
        else{
            if(st.top() == s)
                st.pop();
            else{
                st.push(s);
            }
        }
    }
    
    while(!st.empty()) {
           
        vec.push_back(st.top());
           st.pop();
       }
    
    string ans = "";
    for(int i = vec.size() ; i>=0 ; i--  ){
        ans += vec[i];
    }
        
        
    cout<< ans;
}