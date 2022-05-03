//
//  Sort_Array_Parity.cpp
//  LeetCode
//
//  Created by CYBERHOAX on 02/05/22.
//

#include <stdio.h>
#include <iostream>
#include <stack>
#include <queue>

using namespace std ;

int main(){
    //using stack
    
//    stack<int> even;
//          stack<int> odd ;
//          vector<int> v ;
//
//          for(int i = 0; i<nums.size(); i++){
//              if(nums[i] % 2 == 0)
//                  even.push(nums[i]);
//              else{
//                  odd.push(nums[i]);
//              }
//          }
//
//          while(!even.empty()){
//              v.push_back(even.top());
//              even.pop();
//          }
//
//
//          while(!odd.empty()){
//              v.push_back(odd.top());
//              odd.pop();
//          }
//
//          return v ;
    
    
    //using queue
    
    //         queue<int> q;
    //         vector<int> v ;
            
//            for(int i = 0; i<nums.size(); i++){
//                if(nums[i] % 2 == 0)
//                    v.push_back(nums[i]);
//                else{
//                    q.push(nums[i]);
//                }
//            }
//
//            while(!q.empty()){
//                v.push_back(q.front());
//                q.pop();
//            }
            
    
    
    //using two pointer
//    int j = 0 ;
//          for(int i = 0; i<nums.size(); i++){
//              if(nums[i] % 2 == 0){
//
//                  swap(nums[i], nums[j]);
//                  j++ ;
//              }
//              }
    
//    int nums[] = {0,1,0,3,12};
//    for(int i = 0 , j = 0 ; j < size(nums) ; j++){
//               if(nums[j] != 0){
//                   if(i!=j){
//                        swap(nums[i], nums[j]) ;
//                   }
//                   i++ ;
//
//               }
//
//           }
//
    return 0 ; 
}
