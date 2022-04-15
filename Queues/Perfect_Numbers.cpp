//
//  Perfect_Numbers.cpp
//  Queues
//
//  Created by CYBERHOAX on 14/04/22.
//
/*
 Given an integer A, you have to find the Ath Perfect Number.

 A Perfect Number has the following properties:

 It comprises only 1 and 2.

 The number of digits in a Perfect number is even.

 It is a palindrome number.

 For example, 11, 22, 112211 are Perfect numbers, where 123, 121, 782, 1 are not.



 Problem Constraints
 1 <= A <= 100000



 Input Format
 The only argument given is an integer A.



 Output Format
 Return a string that denotes the Ath Perfect Number.



 Example Input
 Input 1:

  A = 2
 Input 2:

  A = 3


 Example Output
 Output 1:

  22
 Output 2:

  1111


 Example Explanation
 Explanation 1:

 First four perfect numbers are:
 1. 11
 2. 22
 3. 1111
 4. 1221
 Explanation 2:

 First four perfect numbers are:
 1. 11
 2. 22
 3. 1111
 4. 1221
 */


#include <stdio.h>
#include <iostream>
#include <queue>
#include <string>

using namespace std ;

int main(){
    int A = 4;
    
    if(A == 1){
        cout << "11" ;
            return 0;
        }
        if(A==2){
            cout << "22" ;
            return 1;
        }
        queue<string> stq;
        stq.push("11");
        stq.push("22");
        string st1 = "11", st2 = "22";
        string ans;
        while(A-2 > 0){
            string x1 = stq.front();
            int n1 = x1.length();
            int half1 = n1/2;
            x1.insert(half1, st1);
            stq.push(x1);

            string x2 = stq.front();
            int n2 = x2.length();
            int half2 = n2/2;
            x2.insert(half2, st2);
            stq.push(x2);

            stq.pop();

            A--;
            
//            string x1 = stq.front();
//
//            for(int i =1 ; i < 3 ; i++){
//                if(A-2 == 0){
//                    break ;
//                }else{
//                string x = stq.front();
//                int n1 = x.length();
//                int half = n1/2;
//                x.insert(half, x);
//                stq.push(x);
//                stq.pop();
//                A -- ;
//                }
            //}
        }
        stq.pop();
    cout << stq.front() ;
//        return stq.front();
    
}
