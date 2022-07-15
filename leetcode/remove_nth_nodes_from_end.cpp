#include <iostream>
#include <vector>


using namespace std;

//Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 


ListNode* first_solution(ListNode* head, int n);



int main(){

}


// pretty good solution 
ListNode* first_solution(ListNode* head, int n) {
        
    size_t l {};
    ListNode* current_node = head;
    
    while (current_node != NULL){
        current_node = current_node->next;
        l++;
    }
    
    if (l == 1){
        return NULL;
    }

    size_t objective = l - n;
    int i {};
    
    current_node = head;
    
    if (objective == 0){
        return head->next;
    }
    
    while (objective - 1 != i){
        current_node = current_node->next;
        i++;
    }
    
    
    // deleting the node 
    current_node->next = current_node->next->next; 
    return head;    
        
}
