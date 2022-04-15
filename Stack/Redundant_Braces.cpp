//
//  Redundant_Braces.cpp
//  Stack
//
//  Created by CYBERHOAX on 15/04/22.
//
/*
 Given a string A denoting an expression. It contains the following operators '+', '-', '*', '/'.

 Check whether A has redundant braces or not.

 NOTE: A will be always a valid expression and will not contain any white spaces.



 Problem Constraints
 1 <= |A| <= 105



 Input Format
 The only argument given is string A.



 Output Format
 Return 1 if A has redundant braces else, return 0.



 Example Input
 Input 1:

  A = "((a+b))"
 Input 2:

  A = "(a+(a+b))"


 Example Output
 Output 1:

  1
 Output 2:

  0

 Example Explanation
 Explanation 1:

  ((a+b)) has redundant braces so answer will be 1.
 Explanation 2:

  (a+(a+b)) doesn't have have any redundant braces so answer will be 0.

 */

#include <stdio.h>
#include <stack>
#include <iostream>

using namespace std ;

int main(){
    string A = "((a+b))";
//    stack<char> s;
//       int n = A.size();
//
//       for(int i=0;i<n;i++){
//         if(A[i] != ')')
//             s.push(A[i]);
//         else{
//           int cnt = 0;
//           while(s.size()>0 && s.top()!= '('){
//              char ch = s.top();
//             s.pop();
//       if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
//           cnt++;
//               }
//               if(cnt == 0)return true;
//               s.pop();
//           }
//       }
//      return false;

    
    
    stack<char> st;

        for(auto x : A){
            if(x != ')')
                st.push(x);
            int count = 0 ;
            while(!st.empty() && st.top() != '('){
                char ch = st.top();
                st.pop();

                if(ch =='-' || ch =='+' || ch == '/' || ch=='*')
                    count ++ ;

                if(count == 0)
                    return true;
                    
            }
        }
        return false ;
}
