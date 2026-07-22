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
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        bool hasCycle = false;

        // Phase 1: Determine if a cycle exists
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) {
                hasCycle = true;
                break; // 🔴 FIX 1: Must break out to stop infinite looping
            }
        }

        // Phase 2: Find the entry point of the cycle
        if (hasCycle) {
            slow = head;
            // 🔴 FIX 2: Check for equality directly, looping until they meet
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // Both pointers now point to the start of the cycle
        }

        return NULL; 
    }
};
