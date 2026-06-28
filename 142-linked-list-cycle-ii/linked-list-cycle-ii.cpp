/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Handle empty list or single node with no cycle
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        bool hasCycle = false;

        // Phase 1: Determine if a cycle exists
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        // If no cycle is detected, return NULL
        if (!hasCycle) {
            return NULL;
        }

        // Phase 2: Find the exact node where the cycle begins
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};
