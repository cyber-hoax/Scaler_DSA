//
//  kOccurence.cpp
//  Arrays
//
//  Created by CYBERHOAX on 30/12/21.
//

/*
 Groot has N trees lined up in front of him where the height of the i'th tree is denoted by H[i].

 He wants to select some trees to replace his broken branches.

 But he wants uniformity in his selection of trees.

 So he picks only those trees whose heights have frequency K.

 He then sums up the heights that occur K times. (He adds the height only once to the sum and not K times).

 But the sum he ended up getting was huge so he prints it modulo 10^9+7.

 In case no such cluster exists, Groot becomes sad and prints -1.

 Constraints:

 1.   1<=N<=100000
 2.   1<=K<=N
 3.   0<=H[i]<=10^9
 Input: Integers N and K and array of size A

 Output: Sum of all numbers in the array that occur exactly K times.

 Example:

 Input:

 N=5 ,K=2 ,A=[1 2 2 3 3]
 Output:

 5
 Explanation:

 There are 3 distinct numbers in the array which are 1,2,3.
 Out of these, only 2 and 3 occur twice. Therefore the answer is sum of 2 and 3 which is 5.
 See Expected Output
 */
#include <stdio.h>
#include <unordered_map>

#include <iostream>

using namespace std ;

int main() {
    int A[] = {1,2,2,3,3};
    int N = 5 ;
    int B  = 2 ;
     
    
    unordered_map<long long , int> hash ;
    
    
    for(int i = 0 ; i < N  ; i++){
        if(hash.find(A[i]) == hash.end()){
            hash.insert({A[i] , 1});
            
        }
        else{
            hash[A[i]] ++;
        }
    }
    int ans = 0 ;
    for(auto m : hash){
        if(m.second == B){
            ans += m.first ;
        }
        
            
            
        
    }
    auto it = hash.find(0) ;
    if(ans == 0 && hash.find(0)!= hash.end()  && it->second == B){
       ans =0  ;
        return 0 ;
       
    }
    else{
        if(ans > 0 ){
            ans = ans % 1000000007 ;
        }
    }
    return ans ;
}
