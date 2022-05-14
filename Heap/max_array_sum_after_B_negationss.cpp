//
//  max_array_sum_after_B_negationss.cpp
//  Heap
//
//  Created by CYBERHOAX on 14/05/22.
//

#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std ;



int main(){
    int A [] = {57, 3, -14, -87, 42, 38, 31, -7, -28, -61};
    int B = 10;
    priority_queue<long long , vector<long long> , greater<long long>> q ;

      for(long long i = 0 ; i< size(A); i++){
          q.push(A[i]);
      }
  
     int ans = 0;
      while(B ){
          if(q.top()< 0){
          long long temp = q.top();
              q.pop();
          q.push(-temp);
          
        
          }
          else{
              
              if(q.top() > 0){
                  long long temp1 = q.top();
                  q.pop();
                  q.push(-temp1);
                  
              }
          }
          B-- ;
      }

      while(!q.empty()){
          ans += q.top();
          q.pop();
      }
    
   
//      return ans ;
}
