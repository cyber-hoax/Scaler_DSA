//
//  Shortest_Unsorted_Continous_Subarray.cpp
//  LeetCode
//
//  Created by CYBERHOAX on 03/05/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int nums[] = {1};
    int n = size(nums);
    vector<int> v ;
    for(int i = 0 ; i < n ; i++){
    
        v.push_back(nums[i]);
    }
    
    sort(v.begin() , v.end());
    
    int start = -1 ;
    int end = 0 ;
    
    
    for( int i= 0 ;i< n ; i++){
        
        if(nums[i] != v[i]){
            
            if(start < 0){
                start = i ;
            }
            else{
                end=i;
                
            }
        }
    
    }
    if(end == 0){
        cout<< 0 ;
    }
    cout<< end - start+1 ;
}
