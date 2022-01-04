//
//  rowColumnZero.cpp
//  Hashing
//
//  Created by CYBERHOAX on 04/01/22.
//

#include <stdio.h>
#include <map>
#include <iostream>

using namespace std ;

int main(){
    int A [] = {{1,2,3,4},{5,6,7,0},{9,2,0,4}}
    map<int,int>  col , row;
    int n = size(A);
    int m = size(A[0]);
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(A[i][j] == 0){
                col[i] = 1;
                row [j] =1;
                
            }
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j= 0 ; j< m ; j++){
            if(col[j] == 1 || row[i]==0 )
                A[i][j]
        }
    }
}


map<int,int>c,r;
for(int i=0;i<A.size();i++){
    for(int j=0;j<A[0].size();j++){
        if(A[i][j]==0){
            c[j]=1;
            r[i]=1;
        }
    }
}
for(int i=0;i<A.size();i++){
    for(int j=0;j<A[0].size();j++){
        if(c[j]==1 || r[i]==1){
            A[i][j]=0;
        }
    }
}
}
