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
    int A[] ={1,2,6,6,7,9,9};
    int B = 13;
    unordered_map<int, int> m;
        int n = size(A);
       int count = 0;
       for (int i = 0; i < n; i++) {
           if (m.find(B - A[i]) != m.end()) {
               count += m[B - A[i]];
           }
           m[A[i]]++;
       }
       return count;
       }

