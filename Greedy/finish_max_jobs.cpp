//
//  finish_max_jobs.cpp
//  Greedy
//
//  Created by CYBERHOAX on 12/05/22.
//

#include <stdio.h>
#include <iostream>
#include <utility>

using namespace std ;

int main(){
    int A[]= {4, 4, 8, 15, 6 };
    int B[]={9, 5, 15, 16, 7};
    int n = size(A);
       pair<int,int> pair[n];

       for(int i= 0 ; i < n; i++){
           pair[i].first = B[i];
           pair[i].second = A[i];
       }

       sort(pair , pair + n);
    
//    for(int i = 0 ; i< n ; i++)
//        cout<< pair[i].first << "s" << pair[i].second <<endl ;
       int count = 1 ;
       int lastTime= pair[0].first ;
//    cout << lastTime ;
       for(int i = 1 ; i <n ; i++){
           if(lastTime <= pair[i].second){
               count ++ ;
               lastTime = pair[i].first ;
           }

       }
    
    cout << count ;

//       return count ;
}
