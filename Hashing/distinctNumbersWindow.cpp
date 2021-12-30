//
//  distinctNumbersWindow.cpp
//  Hashing
//
//  Created by CYBERHOAX on 27/12/21.
//

/*
 You are given an array of N integers, A1, A2 ,…, AN and an integer B. Return the of count of distinct numbers in all windows of size B.

 Formally, return an array of size N-B+1 where i'th element in this array contains number of distinct elements in sequence Ai, Ai+1 ,..., Ai+B-1.

 NOTE: if B > N, return an empty array.

 Input Format

 First argument is an integer array A
 Second argument is an integer B.

 Output Format

 Return an integer array.

 Example Input

 Input 1:

  A = [1, 2, 1, 3, 4, 3]
  B = 3
 Input 2:

  A = [1, 1, 2, 2]
  B = 1

 Example Output

 Output 1:

  [2, 3, 3, 2]
 Output 2:

  [1, 1, 1, 1]

 Example Explanation

 Explanation 1:

  A=[1, 2, 1, 3, 4, 3] and B = 3
  All windows of size B are
  [1, 2, 1]
  [2, 1, 3]
  [1, 3, 4]
  [3, 4, 3]
  So, we return an array [2, 3, 3, 2].
 Explanation 2:

  Window size is 1, so the output array is [1, 1, 1, 1].
 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;

int main() {
    int A[] = {1, 2, 1, 3, 4, 3};
    int B = 3 ;
    int n = size(A);
    vector<int> vect ;
  
    unordered_map<int,int> hash;
    
    for(int i = 0 ; i < n-B ; i++){
        hash[A[i]]++ ;
    }
    
//    for(auto m : hash){
//        cout << m.first << " " << m.second << endl;
   
    vect.push_back(hash.size()) ;
    for(int i =1 ; i< n -B ; i++){
        hash[A[i -1]] -- ;
        if(hash[A[i -1]] ==  0){
            hash.erase(A[i -1]) ;
        }
        
        hash[A[i + B -1]] ++ ;
        vect.push_back(hash.size());
        
    }
   

    for(auto m : vect){
        cout <<m << endl ;
    }
    
    return 0 ;

}

