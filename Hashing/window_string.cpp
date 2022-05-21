//
//  window_string.cpp
//  Hashing
//
//  Created by CYBERHOAX on 19/05/22.
//

#include <stdio.h>
#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    string A = " ADOBECODEBANC" ;
    string B = "ABC";
    
    vector<int> table(128,0);
    
    for(auto c :B){
        table[c] ++;
        cout << table[c];
    }
    
    int start = 0 ;
    int end =0 ;
    int counter = B.size();
    int startMin = 0;
    int minimum = INT_MAX;
    
    while(end< A.size()){
        cout << table[A[end]] << endl ;
        if(table[A[end]] > 0){
            counter -- ;
        }
        
        cout <<table[A[end]] <<endl;
        table[A[end]] -- ;
        cout <<table[A[end]] <<endl;
        end ++ ;
        
        while(counter == 0){
            cout << table[A[start]] << endl ;
            if(end - start < minimum){
                startMin = start ;
                cout<< startMin << endl ;
                minimum = end - start ;
                cout<< minimum << endl ;
                
            }
            table[A[start]] ++ ;
            cout << table[A[start]] << endl ;
            
            if(table[A[start]] > 0){
                counter ++;
            }
            start ++ ;
        }
    }
    
    if(minimum == INT_MAX){
        cout <<" no match" ;
        
    }
    cout <<  A.substr(startMin, minimum) ;
    
    return 0 ;
    
}
