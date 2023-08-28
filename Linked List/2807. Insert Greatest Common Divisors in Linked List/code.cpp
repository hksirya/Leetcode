class Solution {
public:
   int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode* temp = head;
    
    while (temp && temp->next != NULL) {
        int n = gcd(temp->val, temp->next->val);
        ListNode* newNode = new ListNode(n);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = newNode->next; // Move temp to the next original node
    }
    
    return head;
}

};
