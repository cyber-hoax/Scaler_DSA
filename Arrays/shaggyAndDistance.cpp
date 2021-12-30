//
//  shaggyAndDistance.cpp
//  Arrays
//
//  Created by CYBERHOAX on 30/12/21.
//

/*
 Shaggy has an array A consisting of N elements. We call a pair of distinct indices in that array as a special pair if elements at that index in the array are equal.

 Shaggy wants you to find a special pair such that distance between that pair is minimum. Distance between two indices is defined as |i-j|. If there is no special pair in the array then return -1.



 Problem Constraints

 1 <= |A| <= 105

 Input Format

 First and only argument is the array A.

 Output Format

 Return one integer corresponding to the minimum possible distance between a special pair.

 Example Input

 Input 1:

 A = [7, 1, 3, 4, 1, 7]
 Input 2:

 A = [1, 1]


 Example Output

 Output 1:

  3
 Output 2:

  1

 Example Explanation

 Explanation 1:

 Here we have 2 options:
 1. A[1] and A[4] are both 1 so (1,4) is a special pair and |1-4|=3.
 2. A[0] and A[5] are both 7 so (0,5) is a special pair and |0-5|=5.
 Therefore the minimum possible distance is 3.
 Explanation 2:

 Only possibility is choosing A[1] and A[2].
 */
#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std ;

int main() {
    int A []= {7, 1, 3, 4, 1, 7} ;
    int n = size(A);
    unordered_map<long long, int> hash ;
    vector<int> ans ;
    for(int i = 0 ; i < n ; i++){
        if(hash.find(A[i]) == hash.end()){
            hash.insert({A[i] , i });
        }
//        else{
//            if(hash.find(A[i]) != hash.end()){
//                int temp= i - hash.(A[i]) ;
//                ans.pushback(sdf);
//            }
//        }
    }
   
    cout <<c ;
    
    
}
