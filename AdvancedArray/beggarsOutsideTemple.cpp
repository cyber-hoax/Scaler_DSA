//
//  beggarsOutsideTemple.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 14/01/22.
//
/*
 There are N (N > 0) beggars sitting in a row outside a temple. Each beggar initially has an empty pot. When the devotees come to the temple, they donate some amount of coins to these beggars. Each devotee gives a fixed amount of coin(according to his faith and ability) to some K beggars sitting next to each other.

 Given the amount donated by each devotee to the beggars ranging from i to j index, where 1 <= i <= j <= N, find out the final amount of money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.

 Example:

 Input:
 N = 5, D = [[1, 2, 10], [2, 3, 20], [2, 5, 25]]

 Return: [10, 55, 45, 25, 25]

 Explanation:
 => First devotee donated 10 coins to beggars ranging from 1 to 2. Final amount in each beggars pot after first devotee: [10, 10, 0, 0, 0]

 => Second devotee donated 20 coins to beggars ranging from 2 to 3. Final amount in each beggars pot after second devotee: [10, 30, 20, 0, 0]

 => Third devotee donated 25 coins to beggars ranging from 2 to 5. Final amount in each beggars pot after third devotee: [10, 55, 45, 25, 25]
 */

// the most optimised approach to use prefix sum


#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int A[3][3] = { {1,2,10}, {2,3,20} , {2,5,25}};
    int B = 5 ;
    
    vector<int> coins(B , 0 );
    int n  = size(A);
    for(int i = 0 ; i <n ; i++ ){
        int start = A[i][0] -1;
        int end = A[i][1] -1 ;
        int donation = A[i][2] ;
        
        coins[start] += donation ;
        
        if(end +1 <B ){
            coins[end +1 ] -= donation ;
        }
    }
    
//    for(auto m : coins){
//        cout << m << " ";
//    }
//    cout << endl ;
    vector <int > t ;
    int temp = 0  ;
    for(int i = 0 ; i< B ; i++ ){
//        coins[i] = coins[i] + coins[i -1];
//        cout << coins[i-1] << endl;
//        cout << coins[i] << " " ;
        temp += coins[i];
        t.push_back(temp);
    }
    
    
    for(auto m : t){
        cout << m << " ";
    }
    cout << endl ;
    
    return 0;
}
