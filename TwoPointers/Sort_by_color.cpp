//
//  Sort_by_color.cpp
//  TwoPointers
//
//  Created by CYBERHOAX on 03/05/22.
//

#include <stdio.h>
#include <vector>

#include <iostream>

using namespace std ;

int main(){
    int A[] = { 0,1,2,0,1,2};
   
    vector<int> v ;
        int zero = 0 ;
        int one = 0;
        int two = 0 ;

        for(int i =0 ; i<size(A); i++){
            if(A[i] == 0)
                zero ++ ;
            else if(A[i] == 1)
                one ++ ;
            else if(A[i] == 2)
                two ++ ;
        }

        for(int i = 0 ; i < zero ; i++){
           v.push_back(0);
        }
        for(int i = 0 ; i < one ; i++){
            v.push_back(1);
        }
        for(int i = 0 ; i < two ; i++){
           v.push_back(2);
        }
//
//        return v;
    for(auto x: v)
        cout<< x <<" " ;

}
