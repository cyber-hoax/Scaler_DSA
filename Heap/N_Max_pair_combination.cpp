//
//  N_Max_pair_combination.cpp
//  Heap
//
//  Created by CYBERHOAX on 17/05/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>

#include <queue>

using namespace std ;

int main(){
    int a[] = {1, 4, 2, 3};
    int b[] = {2, 5, 1, 6};
    
    vector<int> A;
    vector<int >B ;
    
    for(auto x : a)
        A.push_back(x);
    
    for(auto l: b)
        B.push_back(l);
        
    
    
    sort(A.rbegin() , A.rend());
       sort(B.rbegin() , B.rend());
    
    for(auto u : A)
        cout << u << endl ;
       int n = A.size();
       priority_queue<tuple<int,int,int> > pq;
       for(int i=0; i<n; i++)
       {
           pq.push({A[i] + B[0], i , 0});
       cout<<A[i] <<endl ;
       cout << B[0] << endl ; ;
       
       }
       vector<int> ans;
       while(n--)
       {
           auto [sum, i , j] = pq.top();
            
           cout<<sum<<endl;
       cout <<i<<endl;
       cout << j<<endl ;
           pq.pop();
           ans.push_back(sum);
           pq.push({A[i] + B[j+1] ,i , j+1});
       }
//       return ans;
}
