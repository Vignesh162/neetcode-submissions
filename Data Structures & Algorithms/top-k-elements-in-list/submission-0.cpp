class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        int highestFreq = 0,count = 0;
        for(int& num : nums){
            freq[num]++;
            if(freq[num] > highestFreq)highestFreq = freq[num];
        }
        map<int,vector<int>>freqNums;
        for( auto & mp: freq){
            freqNums[mp.second].push_back(mp.first);
        }
        vector<int>ans;
        for( int i = highestFreq; i >=1 && count != k; --i){
            for( int& num : freqNums[i]){
                ans.push_back(num);
                count++;
            }
        }
        return ans;
    }
};
