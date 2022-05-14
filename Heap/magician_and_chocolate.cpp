//
//  magician_and_chocolate.cpp
//  Heap
//
//  Created by CYBERHOAX on 14/05/22.
//

#include <stdio.h>
#include <queue>
#include <cmath>

#include <iostream>

using namespace std ;

int main(){
    int B[] = {2147483647, 2000000014, 2147483647 };
    int A = 10 ;
    
    long long n= size(B);
    long long temp = 0 ;
    int m = 1000000007 ;
    priority_queue<long long , vector<long long> , less<long long>> q ;
    
    for(int i = 0 ; i < n ; i ++){
           q.push(B[i]);

       }

       long long ans = 0 ;
       
       while(A){
           temp = q.top() ;
           q.pop();
           ans += (temp) % m  ;
           cout << (temp/2) <<endl ;
           q.push((temp/2));
           A --;

       }
    cout << ans%m ;
       return 0;
}

