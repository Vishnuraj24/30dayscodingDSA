class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<char,int>mp;
        for(int i = 0 ; i < stones.length(); i++){
            mp[stones[i]]++;
        }
        for(int i = 0 ; i < jewels.length(); i++){
            count += mp[jewels[i]];
        }
        return count;
    }
};