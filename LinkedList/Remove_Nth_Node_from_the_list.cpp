//
//  Remove_Nth_Node_from_the_list.cpp
//  LinkedList
//
//  Created by CYBERHOAX on 23/04/22.
//

#include <stdio.h>


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
//
//
//        ListNode * curr = A ;
//        int count = 0 ;
//        ListNode * prev ;
//
//        while(curr!=NULL){
//            count ++ ;
//            curr = curr ->next ;
//        }
//
//        if(count < B || count == B){
//            ListNode * temp = A;
//            A = A-> next ;
//            delete temp;
//            return A;
//        }
//        else{
//            count = count - B ;
//            curr = A;
//            while(count > 0 ){
//                prev = curr;
//                curr = curr->next ;
//                count -- ;
//            }
//            prev->next = curr->next ;
//
//            delete curr;
//        }
//
//        return A;
//
//}
