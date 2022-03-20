//
//  changeCharacter.cpp
//  Strings
//
//  Created by CYBERHOAX on 19/03/22.
//
/*
 Given a string A of size N consisting of lowercase alphabets.

 You can change at most B characters in the given string to any other lowercase alphabet such that the number of distinct characters in the string is minimized.

 Find the minimum number of distinct characters in the resulting string.

 Problem Constraints

 1 <= N <= 100000

 0 <= B < N

 Input Format

 First argument is a string A.

 Second argument is an integer B.

 Output Format

 Return an integer denoting the minimum number of distinct characters in the string.

 Example Input

 A = "abcabbccd"
 B = 3



 Example Output

 2



 Example Explanation

 We can change both 'a' and one 'd' into 'b'.So the new string becomes "bbcbbbccb".
 So the minimum number of distinct character will be 2.
 */


#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main (){
    string A =  "abcabbccd";
    int B =  3 ;
    
    unordered_map<char, int > hash;
    for(int i = 0 ; i < size(A) ; i++){
        hash[A[i]] ++ ;
    }
    
    vector<int> vect ;
    
    for(auto x : hash)
//        cout << x.first << " " << x.second << endl;
        vect.push_back(x.second) ;
    
    sort(vect.begin() , vect.end()) ;
    
    
    
    for(int j = 0 ; vect.size() ; j++){
        if(A[j] >B)
            cout << vect.size();
        
    }
}
