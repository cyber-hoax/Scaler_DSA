//
//  free_cars.cpp
//  Greedy
//
//  Created by CYBERHOAX on 12/05/22.
//

#include <stdio.h>
#include <iostream>
#include <queue>
#include <utility>

using namespace std ;

int main(){
    int A[]= {1, 7, 6, 2, 8, 4, 4, 6, 8, 2};
    int B[]= {8, 11, 7, 7, 10, 8, 7, 5, 4, 9};
    int n = size(A);
       //step1 : sort the array
       pair<int,int> pair[n];

       for(int i = 0 ; i<n ; i++ ){
           pair[i].first = A[i];
           pair[i].second = B[i];

       }
       int maxBeauty = 0 ;
       sort(pair , pair + n);
       //step2 : store the min value

       int time = 0;
    
    for(int i = 0 ; i < n ; i ++){
        cout<< pair[i].first << "s" << pair[i].second <<endl ;
    }

       priority_queue<int , vector<int>, greater<int>> q ;
       
       
       
       //if time end check if the min value can be replaced or not

       for(int i = 0 ; i < n ; i++){
           if(time<pair[i].first){
               maxBeauty += pair[i].second ;
               q.push(pair[i].second);
               time ++;
           }
           else{
               if(pair[i].second > q.top()){
                   maxBeauty -= q.top();
                   q.pop();
                   q.push(pair[i].second);
                   maxBeauty += pair[i].second ;
               }
           }
   }
    
    cout << maxBeauty ;
}
