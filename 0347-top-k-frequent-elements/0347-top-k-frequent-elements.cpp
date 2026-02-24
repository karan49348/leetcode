class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        // Step 1: Count frequency
        for(int num : nums){
            freq[num]++;
        }
        
        // Step 2: Min Heap (frequency, element)
        priority_queue<
            pair<int,int>, 
            vector<pair<int,int>>, 
            greater<pair<int,int>>
        > minHeap;
        
        for(auto &it : freq){
            minHeap.push({it.second, it.first});
            
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        
        vector<int> result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        
        return result;
    }
};