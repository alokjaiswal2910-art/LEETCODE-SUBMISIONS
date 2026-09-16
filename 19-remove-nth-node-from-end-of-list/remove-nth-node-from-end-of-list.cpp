class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Find size
        int size = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            size++;
            temp = temp->next;
        }

        // Position of node to delete from beginning
        int pos = size - n;

        // If first node has to be deleted
        if (pos == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Move to node BEFORE the node to delete
        ListNode* curr = head;

        for (int i = 1; i < pos; i++) {
            curr = curr->next;
        }

        // Node to delete
        ListNode* aage = curr->next;

        // Skip that node
        curr->next = aage->next;

        delete aage;

        return head;
    }
};