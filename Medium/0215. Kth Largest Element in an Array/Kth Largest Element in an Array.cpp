class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /* When asked for smallest element, use Max Heap.
           When asked for largest element, use Min Heap. */
           
        // priority_queue<int> pq;
        priority_queue<int, vector<int>, greater<int>> pq;

        // for(int n: nums) pq.push(n);
        for(int n: nums) {
            pq.push(n);
            if(pq.size() > k) pq.pop();
        }

        //for(int i=0; i<k-1; i++) pq.pop();
        return pq.top();
    }
};
