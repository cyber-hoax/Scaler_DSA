//
//  GrayCode.cpp
//  BitManipulation
//
//  Created by CYBERHOAX on 18/05/22.
//

#include <stdio.h>
#include <bitset>
#include <vector>
#include <iostream>

using namespace std ;


void utils(bitset<32>&bits, vector<int> ans  ,int A){
    if(A== 0){
        cout << bits.to_ulong()<<endl;
        ans.push_back(bits.to_ulong());
        
    }
    else{
        utils(bits, ans, A-1);
        bits.flip(A-1);
        utils(bits,ans, A-1);
    }
}



int main(){
    int A = 2 ;
    vector<int> ans;
    bitset<32> bits;
//    utils(bits, ans , A);
    
    vector<int> anss(1<<A);
    for (int i=0; i<(1<<A); i++){     //can also use pow(2,A)
                cout << i<<A <<endl ;
            
                anss[i] = i^(i>>1);
            
        cout << anss[i] << endl ;
    }
            return 0;
    
//    return 0 ;
}


