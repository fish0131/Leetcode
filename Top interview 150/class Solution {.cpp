class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size(), h = 0;
        sort(citations.begin(), citations.end());
        for(int i=0; i<n; i++) {
            int papers = n-i;
            if(citations[i] >= papers) {
                h = papers;
                break;
            }
        }
        return h;
    }
};
