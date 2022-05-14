//
//  Product_0f_3.cpp
//  Heap
//
//  Created by CYBERHOAX on 14/05/22.
//

#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>

using namespace std ;

int main(){
    int A[] = {1,5,2,3,4,10};
    int n =  size(A);
    
    priority_queue<int, vector<int> , greater<int>> q ;
    
    stack<int> st ;
    
    vector<int> ans;
    int temp = 1;
    for(int i = 0 ; i < n ; i++ ){
        if( i <2){
            ans.push_back(-1);
            q.push(A[i]);
            
        }
        else if(i ==2){
            q.push(A[i]);
            while(!q.empty()){
                st.push(q.top());
                q.pop();
            }
            
            while(!st.empty()){
                temp *= st.top();
                q.push(st.top());
                st.pop();
            }
            ans.push_back(temp);
            
        }
        else{
            if(A[i] > q.top()){
                temp = 1 ;
                q.pop();
                q.push(A[i]);
                
                while(!q.empty()){
                    st.push(q.top());
                    q.pop();
                }
                
                while(!st.empty()){
                    temp *= st.top();
                    q.push(st.top());
                    st.pop();
                }
              
            }
            else{
                temp = 1 ;
                while(!q.empty()){
                    st.push(q.top());
                    q.pop();
                }
                
                while(!st.empty()){
                    temp *= st.top();
                    q.push(st.top());
                    st.pop();
                }
              
            }
            ans.push_back(temp);
        }
    }
    for(auto x : ans)
        cout << x << endl;
}
