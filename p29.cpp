class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
         unordered_map<int, int> frequency_map;
    
    // Count the frequency of each integer in arr
    for (int num : arr) {
        frequency_map[num]++;
    }
    
    // Sort the frequency map by values in ascending order
    vector<int> sorted_freq;
    for (auto& pair : frequency_map) {
        sorted_freq.push_back(pair.second);
    }
    sort(sorted_freq.begin(), sorted_freq.end());
    
    int unique_count = 0;
    for (int freq : sorted_freq) {
        k -= freq;
        if (k < 0) {
            break;
        }
        unique_count++;
    }
    
    return sorted_freq.size() - unique_count;  
    }
};
