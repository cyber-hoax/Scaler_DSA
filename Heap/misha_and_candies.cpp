//
//  misha_and_candies.cpp
//  Heap
//
//  Created by CYBERHOAX on 10/05/22.
//

#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std ;

int main(){
    int A[] = { 9, 818, 174, 237, 892, 109, 522, 27, 59, 336, 605, 865, 714, 86, 708, 535, 138, 948, 836, 287, 179, 754, 466, 856, 153, 53, 958, 951, 262, 341, 769, 491, 772, 509, 336, 120, 98, 805, 169, 984, 520, 447, 256, 266, 348, 351, 60, 563, 45, 638, 29, 479, 400};
    int B = 852 ;
    
    priority_queue<int , vector<int>, greater<int>> q ;
    int count = 0 ;
    for(auto x : A ){
        q.push(x);
    }
    
    int temp2 = 0;
   
    while(!q.empty() && q.top()<B){
            int temp  = q.top();
            q.pop();
            
            
            count = count + temp /2 ;
        
            temp2= temp - count ;
            
        temp2 += q.top();
        q.pop();
        q.push(temp2);
        temp2 = 0;
        
            
           
            
            
        
        }
    cout << count ;
    

}
