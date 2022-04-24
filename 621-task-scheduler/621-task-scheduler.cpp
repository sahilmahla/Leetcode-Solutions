class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int char_map[26] = {0};
        
        for(auto c:tasks){
            char_map[c-'A']++;
        }
        
        sort(char_map,char_map+26);
       // cout<<char_map[25];
        int maxi = char_map[25]-1;
        int idleSlot = maxi*n;
        for(int i = 24;i>=0;i--){
            idleSlot -= min(maxi,char_map[i]);
        }
        
        return idleSlot > 0?tasks.size()+idleSlot:tasks.size();
    }
};