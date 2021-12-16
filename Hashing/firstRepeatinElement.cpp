//
//  firstRepeatinElement.cpp
//  Hashing
//
//  Created by CYBERHOAX on 16/12/21.
//

#include <stdio.h>
#include <unordered_map>
#include <iostream>

using namespace std ;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int A [] = {10,5,3,4,3,5,6};
    int n = size(A);
        unordered_map<long long , int > hashtable ;
        int result = -1;
       
        for (int i = 0 ; i < n; i ++) {
            if(hashtable.find(A[i]) !=  hashtable.end()){
                hashtable[A[i]] ++;
                
            }
            else{
                hashtable.insert({A[i], 1});
            }
        }
        for (int i = 0 ; i < n; i ++) {
            if(hashtable[A[i]] > 1){
                result = A[i];
                break ;
                
            }
            
            
        }
        
        
       
        return result;
}


