//
//  Another_coin_problem.cpp
//  Greedy
//
//  Created by CYBERHOAX on 16/05/22.
//

#include <stdio.h>
#include <queue>
#include <iostream>
#include <cmath>

using namespace std ;

int main(){
    int A = 60;
    
//    priority_queue <long long, vector<long long>  , less <long long>> q ;
//
//       q.push(1);
//
//       while(q.top() <= A){
//           q.push(q.top()*5);
//
//       }
//
//
//       int count = 0 ;
//    cout << q.top();
//       q.pop() ;
//       while(A){
//           if(A >= q.top()){
//               count +=1;
//               A -= q.top() ;
//
//           }
//           else{
//               q.pop();
//           }
//       }
////    cout << count  ;
//       return count;
    
//approach 2
    int ans = 0;
      while (A > 0) {
        ans += (A % 5);
          cout << "ans " << ans << endl ;
        A /= 5;
          cout << "A" << A <<endl ;
      }
      return ans;
}
