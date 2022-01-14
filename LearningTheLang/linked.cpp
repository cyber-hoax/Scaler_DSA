//#include<iostream>
//
//using namespace std;
//
//struct Node {
//    int data;
//    struct Node * next;
//};
//
//struct Node * root = NULL;
//int size_of_ll = 0;
//
//void print_ll() {
//    // Output each element followed by a space
//    struct Node * temp = root;
//    int flag = 0;
//    while (temp != NULL) {
//        if (flag == 0) {
//            cout << temp -> data;
//            flag = 1;
//        } else
//            cout << " " << temp -> data;
//        temp = temp -> next;
//    }
//}
//
//void insert_node(int position, int value) {
//    // @params position, integer
//    // @params value, integer
//    if (position >= 1 && position <= size_of_ll + 1) {
//        struct Node * temp = new Node;
//        temp -> data = value;
//        if (position == 1) {
//            temp -> next = root;
//            root = temp;
//        } else {
//            int count = 1;
//            struct Node * prev = root;
//            while (count < position - 1) {
//                prev = prev -> next;
//                count++;
//            }
//            temp -> next = prev -> next;
//            prev -> next = temp;
//
//        }
//        size_of_ll++;
//    }
//}
//
//void delete_node(int position) {
//    // @params position, integer
//    if (position >= 1 && position <= size_of_ll) {
//        struct Node * temp = NULL;
//        if (position == 1) {
//            temp = root;
//            root = root -> next;
//        } else {
//            int count = 1;
//            struct Node * prev = root;
//            while (count < position - 1) {
//                prev = prev -> next;
//                count++;
//            }
//            temp = prev -> next;
//            prev -> next = prev -> next -> next;
//        }
//        size_of_ll--;
//    }
//}
//
//
//int main(){
//
//}
