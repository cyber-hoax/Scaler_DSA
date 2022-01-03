//
//  main.cpp
//  Trees
//
//  Created by CYBERHOAX on 02/01/22.
//

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left ;
    Node* right ;
};

Node* GetNewNode(int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

Node* Insert(Node* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
        
    }
    else if(data<= root -> data){
        root -> left = Insert(root -> left, data);
        
    }
    else{
        root -> right = Insert(root -> right, data);
    }
    
    return root;

}

bool Search(Node* root, int data){
    if(root == NULL) return false;
    else if(root -> data == data) return true;
    else if (data <= root -> data ){
        return  Search(root -> left,data);
        
    }
    else return Search(root -> right, data);
        
}

int main(){
    Node* root = NULL ;
   
    Insert(root,15);
    Insert(root,10);
    Insert(root, 20);
    Insert(root,25);
    Insert(root,8);
    Insert(root, 12);
    int num ;
    cout<<"number" ;
    cin>> num ;
    if(Search(root, num) == true){
        cout << "found ";
        
    }else{
        cout << "false" ;
    }

}

