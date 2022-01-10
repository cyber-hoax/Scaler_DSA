//
//  stack.cpp
//  LearningTheLang
//
//  Created by CYBERHOAX on 04/01/22.
//

#include <iostream>
#include <stack>

using namespace std ;

int n =100 , top = -1 ;
stack<int> stacktable ;
void push(int data){
    
    stacktable.push(data);
    
}

void pop(){
    if(stacktable.empty())
        cout<<"stack is empty";
    else{
        stacktable.pop();
    }
    
}

int main(){
    int val = 10;
    push(val);
    int c = stacktable.top();
//    cout<<stacktable.top() << endl;
//    int c = pop();
    cout << c ;
    
}

