//
//  longest_substring_without_repeat.cpp
//  Hashing
//
//  Created by CYBERHOAX on 16/05/22.
//

#include <stdio.h>
#include <iostream>
#include <unordered_set>

using namespace std ;

int main(){
    string A = "abcabcbb" ;
    
    unordered_set<char> s;

    int i =0 , j = 0 ;
    int n = A.size() ;
    int ans = 0 ;

    while(i<n && j<n){
        if(s.find(A[j]) == s.end()){
            s.insert(A[j++]);

            ans = max(ans , j-i);
        }
        else{
            s.erase(A[i++]);
        }
    }
    cout << ans ;
    return ans ;
    
//    unordered_set<char> set;
//
//            int i = 0, j = 0, n = A.size(), ans = 0;
//
//            while( i<n && j<n)
//            {
//                if(set.find(A[j]) == set.end()) //If the character does not in the set
//                {
//                    set.insert(A[j++]); //Insert the character in set and update the j counter
//                    ans = max(ans, j-i); //Check if the new distance is longer than the current answer
//                }
//                else
//                {
//                    set.erase(A[i++]);
//                    /*If character does exist in the set, ie. it is a repeated character,
//                    we update the left side counter i, and continue with the checking for substring. */
//                }
//            }
//
//            return ans;
}
