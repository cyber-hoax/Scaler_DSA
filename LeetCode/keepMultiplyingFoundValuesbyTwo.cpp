//
//  keepMultiplyingFoundValuesbyTwo.cpp
//  LeetCode
//
//  Created by CYBERHOAX on 30/01/22.
//
/*
 You are given an array of integers nums. You are also given an integer original which is the first number that needs to be searched for in nums.

 You then do the following steps:

 If original is found in nums, multiply it by two (i.e., set original = 2 * original).
 Otherwise, stop the process.
 Repeat this process with the new number as long as you keep finding the number.
 Return the final value of original.

  

 Example 1:

 Input: nums = [5,3,6,1,12], original = 3
 Output: 24
 Explanation:
 - 3 is found in nums. 3 is multiplied by 2 to obtain 6.
 - 6 is found in nums. 6 is multiplied by 2 to obtain 12.
 - 12 is found in nums. 12 is multiplied by 2 to obtain 24.
 - 24 is not found in nums. Thus, 24 is returned.
 Example 2:

 Input: nums = [2,7,9], original = 4
 Output: 4
 Explanation:
 - 4 is not found in nums. Thus, 4 is returned.
  

 Constraints:

 1 <= nums.length <= 1000
 1 <= nums[i], original <= 1000


 */

#include <stdio.h>
#include <iostream>
#include <unordered_map>

using namespace std ;

int main () {
    int A[] = {161,28,640,264,81,561,320,2,61,244,183,108,773,61,976,122,988,2,370,392,488,375,349,432,713,563};
    int original = 61;
    unordered_map<int, int> hs ;
    int n = size(A);
    for(int i = 0 ; i<n ; i++ ){
        hs[A[i]] ++ ;
    
    }
    
//    for(auto n : hs)
//        cout << n.first << endl ;
    
    for(int i = original ; i <= 1000 ; i= i*2){
      
        if(hs.find(i) == hs.end())
            return i ;
        else{
//            cout << i << endl ;
          
        }
        cout << i << endl;
    }
    
}
//[161,28,640,264,81,561,320,2,61,244,183,108,773,61,976,122,988,2,370,392,488,375,349,432,713,563]
//61
