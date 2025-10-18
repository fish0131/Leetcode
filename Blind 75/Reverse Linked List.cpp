/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<ListNode*> nodes;
        if (!head) return nullptr;
        while(head) {
            nodes.push_back(head);
            head = head->next;
        }
        reverse(nodes.begin(), nodes.end());
        
        // 重新串接
        for (int i = 0; i < nodes.size() - 1; i++) {
            nodes[i]->next = nodes[i + 1];
        }

        // 最後一個節點 next = nullptr
        nodes.back()->next = nullptr;

        // 回傳新的頭節點
        return nodes[0];
    }
};
