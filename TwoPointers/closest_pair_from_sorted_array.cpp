//
//  closest_pair_from_sorted_array.cpp
//  TwoPointers
//
//  Created by CYBERHOAX on 24/05/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> A;
    vector<int> B;
    int C = 9;

    A.push_back(1);
//    A.push_back(2);
//    A.push_back(3);
//    A.push_back(4);
//    A.push_back(5);
    
    B.push_back(2);
    B.push_back(4);
//    B.push_back(6);
//    B.push_back(8);
//
    int left =0 , right= B.size()-1;
    
    int i =0 , j =0;
    int ans = INT_MAX ;
        while(left<A.size() && right>=0){
            if( abs(A[left]+B[right]-C) < ans ){
                 i= A[left];
                 j = B[right];
                 ans = abs(A[left]+B[right]-C);
            }
            if(A[left]+B[right]>=C){
                right -- ;
            }
            else left ++;

        }
    cout << i << " " << j ;
//        return {i,j};
}

