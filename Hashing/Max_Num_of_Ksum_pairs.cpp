//
//  Max_Num_of_Ksum_pairs.cpp
//  Hashing
//
//  Created by CYBERHOAX on 04/05/22.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int nums[] ={3,1,3,4,3};
    int k = 6;
    int count = 0 ;
       unordered_map<int , int> hm;
       
       for(auto x : nums){
           int curr = k - x ;
           if(hm[curr] > 0){
               count ++;
               hm[curr] -- ;
           }
           else
           hm[x] ++ ;
       }
       
       return count ;
       }
}
