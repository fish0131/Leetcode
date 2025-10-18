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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // vector<ListNode*> nodes;
        // if (!head) return nullptr;
        // // 收集所有節點
        // ListNode* cur = head;
        // while (cur) {
        //     nodes.push_back(cur);
        //     cur = cur->next;
        // }
        // int t = nodes.size();         // 總節點數
        // int idx = t - n;              // 要刪除的節點索引
        // // 特例：要刪除的是頭節點
        // if (idx == 0) {
        //     head = head->next;
        //     return head;
        // }
        // // 一般情況：讓前一個節點跳過這個節點
        // nodes[idx - 1]->next = nodes[idx]->next;

        // return head;

        // Two pointers method
        ListNode dummy(0, head);       // 建立 dummy 節點
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // fast 先走 n+1 步
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // 同步移動 fast 和 slow
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        // slow->next 是要刪除的節點
        slow->next = slow->next->next;

        // 回傳真實的頭節點
        return dummy.next;
    }
};
