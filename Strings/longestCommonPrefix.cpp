//
//  longestCommonPrefix.cpp
//  Strings
//
//  Created by CYBERHOAX on 15/01/22.
//

/*
 Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.

 Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

 For Example: longest common prefix of "abcdefgh" and "abcefgh" is "abc".



 Problem Constraints

 0 <= sum of length of all strings <= 1000000



 Input Format

 The only argument given is an array of strings A.



 Output Format

 Return the longest common prefix of all strings in A.



 Example Input

 Input 1:

 A = ["abcdefgh", "aefghijk", "abcefgh"]
 Input 2:

 A = ["abab", "ab", "abcd"];


 Example Output

 Output 1:

 "a"
 Output 2:

 "ab"


 Example Explanation

 Explanation 1:

 Longest common prefix of all the strings is "a".
 Explanation 2:

 Longest common prefix of all the strings is "ab".
 */


#include <stdio.h>
#include <iostream>;

using namespace std ;

int main() {
    string A[] = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa"  };
    int n = size(A);
   
    if(size(A) == 0 ) return 0;
    
    string prefix = A[0];
   
    for (int i = 1; i< n ; i++) {
        while(A[i].find(prefix)!= 0 ){
            prefix = prefix.substr(0, prefix.size() -1);
           
            
        }
    }
    
    
    cout << prefix ;
    return 0 ;
}
