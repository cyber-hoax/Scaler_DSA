//
//  checkPalindrome.cpp
//  Hashing
//
//  Created by CYBERHOAX on 23/12/21.
//

/*
 Problem Description -->

 Given a string A consisting of lowercase characters.
 Check if characters of the given string can be rearranged to form a palindrome.
 Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.
 Problem Constraints

 1 <= |A| <= 105

 A consists only of lower-case characters.

 Input Format

 First argument is an string A.

 Output Format

 Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.

 Example Input

 Input 1:

  A = "abcde"
 Input 2:

  A = "abbaee"


 Example Output

 Output 1:

  0
 Output 2:

  1

 Example Explanation

 Explanation 1:

  No possible rearrangement to make the string palindrome.
 Explanation 2:

  Given string "abbaee" can be rearranged to "aebbea" to form a palindrome.
 */

#include <stdio.h>
#include <iostream>
#include <unordered_map>

using namespace std ;

int main(){
    
    string A = "inttnikjmjbemrberk" ;
    int n  =  A.size();
    int count  = 0;
    if( n ==1 ){
        count = 1;
    }
    else{
    unordered_map<long long , int > palindrome ;
    
    for(int i = 0 ; i<n ; i++){
        if(palindrome.find(A[i]) == palindrome.end() ){
            palindrome.insert({A[i],1});
            
        }
        else{
            if(palindrome.find(A[i]) != palindrome.end()){
                palindrome[A[i]] ++ ;
            }
        }
        
    }
        
        for(auto q : palindrome){
            cout << q.first << " " << q.second << endl ;
        }
   
    int counter =  0;
    for(auto m : palindrome)
        
        if(m.second %2 == 0 ){
            count = 1 ;
        }
        
        else if(m.second %2 ==  1 ){
            counter ++ ;
            if(counter > 1 ){
                count = 0 ;
                break;
            }
        }
        else{
            count = 0 ;
        }
    }
    cout << count ;
    return 0 ;
}
