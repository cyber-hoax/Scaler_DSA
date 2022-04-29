//
//  Sorting_Array_In_Given_Order.cpp
//  Hashing
//
//  Created by CYBERHOAX on 29/04/22.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std ;

int main(){
    int A [] = {10, 2, 18, 16, 16, 16 };
    int B [] = {3, 13, 2, 16, 4, 19};
    
    unordered_map<int, int> hm;
    vector<int > ans;
    
    for(int i = 0 ; i <size(A) ; i++){
        hm[A[i]] ++;
       
        
    }
    
    for(int i = 0 ; i < size(B) ; i++){
        if(hm.find(B[i]) != hm.end()  ){
                    hm[B[i]] -- ;
                    ans.push_back(B[i]);
                }
    }
    for(int i = 0 ; i < size(A) ; i++){
            if(hm.find(A[i]) != hm.end() && hm[A[i]] >0){
                while(hm[B[i]] >0){
                           ans.push_back(B[i]);
                           hm[B[i]] -- ;
                           }
            }
//        }    for(auto x: hm){
//        cout << x.first << " " << x.second <<endl;
//
          
    }
    for(auto x : ans){
        cout<< x <<endl ;
    }

cout << ans.size() << endl ;
}


