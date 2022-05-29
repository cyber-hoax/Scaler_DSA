//
//  sumDiffererence.cpp
//  Recursion
//
//  Created by CYBERHOAX on 27/05/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void sumdiff(vector<int> &A, int ind, vector<int> &ds, int n, int &sum ){
    if(ind == n){
//        sum += *max_element(ds.begin(), ds.end()) - *min_element(ds.begin(), ds.end());
//        for(auto i : ds){
//            cout << i << " ";
//        }
        sum += *max_element(ds.begin(), ds.end()) - *min_element(ds.begin(), ds.end());
//        cout << endl;
        return ;
    }
    
    ds.push_back(A[ind]);
    sumdiff(A, ind+1, ds, n, sum );
    ds.pop_back();
    sumdiff(A, ind+1, ds, n, sum );
}

int main(){
    vector<int> A;
    A.push_back(5);
    A.push_back(4);
    A.push_back(2);
    
    int sum = 0 ;
    vector<int> ds;
    int n  = A.size();
    sumdiff(A, 0, ds ,n, sum);
        
    cout << sum ;
    return 0;
}

