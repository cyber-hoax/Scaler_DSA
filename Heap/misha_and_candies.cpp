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
    int A[] = {3,2,3};
    int B = 10;
    
    priority_queue<int , vector<int>, greater<int>> q ;
    int count = 0 ;
    for(auto x : A ){
        q.push(x);
    }
    
    while( !q.empty() ){
        
            int temp = q.top() ;
            q.pop();
        if(temp > B ){
                cout <<  count ;
                break;
        }
            if(temp == 1){
                int temp2 = q.top();
                q.pop();
                q.push(temp2+1);
               
            }
            else{
                int div = temp /2 ;
                count += div ;
                int temp2 = q.top();
                q.pop();
                int temp3 = temp - div;
                q.push(temp2 + temp3);
                
            }
           

        }

    cout << count ;


    
    return 0 ;

}
