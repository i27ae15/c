#include <iostream>
#include <vector>


using namespace std;

struct ListNode {
    int val;   
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
        
        ListNode* current_node = head;
        size_t linked_list_size {1};
        
        while (current_node != NULL){
            current_node = current_node->next;
            linked_list_size++;
        }
        
        
        size_t half = round(linked_list_size / 2);
        size_t current_index {1};
        
        
        if (linked_list_size % 2 == 1){
            half++;
        }
        
        
        while (current_index < half){
            head = head->next;
            current_index++;
        }
        
        cout << current_index;
        
        return head;
        
    }