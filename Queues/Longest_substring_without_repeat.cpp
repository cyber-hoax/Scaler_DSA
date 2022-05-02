//
//  Longest_substring_without_repeat.cpp
//  Queues
//
//  Created by CYBERHOAX on 02/05/22.
//

#include <stdio.h>
#include <unordered_set>
#include <iostream>

using namespace std ;

int main(){
    string s = "abcabcbb";
    unordered_set<char> set;
        
            int i = 0, j = 0, n = s.size(), ans = 0;
        
            while( i<n && j<n)
            {
                if(set.find(s[j]) == set.end()) //If the character does not in the set
                    {
                    cout << s[j++];
                    set.insert(s[j++]); //Insert the character in set and update the j counter
                    ans = max(ans, j-i); //Check if the new distance is longer than the current answer
                }
                else
                {
                cout << s[i++];
                    set.erase(s[i++]);
                    /*If character does exist in the set, ie. it is a repeated character,
                    we update the left side counter i, and continue with the checking for substring. */
                }
            }
        
            return ans;
}
