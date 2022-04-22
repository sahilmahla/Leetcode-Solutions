class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = cost.size();
        int totalGas = 0;
        int currGas = 0;
        int s = 0;
        for(int i = 0;i<n;i++){
            totalGas += gas[i]-cost[i];
            currGas += gas[i]-cost[i];
            
            if(currGas<0){
                s = i+1;
                currGas = 0;
            }
        }
        if(totalGas >= 0){
            return s;
        }
        return -1;
    }
};