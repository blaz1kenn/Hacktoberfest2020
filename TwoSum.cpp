lass Solution {
public:
    
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0; i<numbers.size(); i++){
            // not found the second one
            if (m.find(numbers[i])==m.end() ) { 
                // store the first one poisition into the second one's key
                m[target - numbers[i]] = i; 
            }else { 
                // found the second one
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }

    // we also can store nums[i] into map, and find target - nums[i]
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i=0; i<nums.size(); i++) {
            if ( m.find(target - nums[i]) == m.end() ) {
                m[nums[i]] = i;
            }else{
                result.push_back(m[target - nums[i]]);
                result.push_back(i);
            }
        }
        return result;
    }
};
