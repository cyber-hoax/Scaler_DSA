//
//  colorfulNumbers.cpp
//  Hashing
//
//  Created by CYBERHOAX on 23/12/21.
//

/*
 Problem Description

 For Given Number A find if its COLORFUL number or not.

 If number A is a COLORFUL number return 1 else return 0.

 What is a COLORFUL Number:

 A number can be broken into different contiguous sub-subsequence parts.
 Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245.
 And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different.


 Problem Constraints

 1 <= A <= 2 * 109

 Input Format
 Single Argument which denotes integer A.

 Output Format
 Return 1 if integer A is COLORFUL else return 0.
 
 Example Input
 Input 1:
  A = 23
 
 Input 2:
  A = 236

 Example Output

 Output 1:
  1
 Output 2:
  0

 Example Explanation

 Explanation 1:

  Possible Sub-sequences: [2, 3, 23] where
  2 -> 2
  3 -> 3
  23 -> 6  (product of digits)
  This number is a COLORFUL number since product of every digit of a sub-sequence are different.
 Explanation 2:

  Possible Sub-sequences: [2, 3, 6, 23, 36, 236] where
  2 -> 2
  3 -> 3
  6 -> 6
  23 -> 6  (product of digits)
  36 -> 18  (product of digits)
  236 -> 36  (product of digits)
  This number is not a COLORFUL number since the product sequence 23  and sequence 6 is same.
 */


#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    int A = 236;
    int n = 0;
    vector<long> convert ;
    unordered_map<long long, int> filters ;
    while(A> n){
        int count  = A%10 ;
        
        convert.push_back(count);
//        filters.insert({count , 1});
        A /=10;
    }
//    for(auto s : convert)
//        cout << s << endl ;

    int sizes = size(convert);
    int sum = convert[sizes-1];
    
   
    for(int i = sizes-2  ; i >=0; i--){
//
        sum *= convert[i] ;
        
        convert.push_back(sum );



    }
//
//    for(auto s : convert)
//        cout << s << endl ;

//    for(int j = 0 ; j < size(A) ; j++ ){
//        if(filters.find(convert[j]) != filters.end()){
//
//            n = 0;
//            break;
//        }
//        else{
//            filters.insert({convert[j] , 1});
//            n = 1;
//
//        }
//    }
    
    for(auto a : convert){
        if(filters.find(a) != filters.end()){
       //
                   n = 0;
                   break;
               }
        else{
            filters.insert({a , 1});
            n = 1;
            
        }
    }
    
    return n;

}



