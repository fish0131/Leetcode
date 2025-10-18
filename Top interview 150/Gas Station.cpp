class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int total_gas = 0;
        int cur_gas = 0;

        for(int i=0; i<gas.size(); i++) {
            total_gas += gas[i]-cost[i];
            cur_gas += gas[i]-cost[i];
            if(cur_gas < 0) {
                start = i+1;
                cur_gas = 0;
            }
        }
        return total_gas >= 0 ? start : -1;
    }
};
