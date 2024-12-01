class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int> mp;

        // Populate the map
        for (int num : arr) {
            mp[num]++;
        }

        for (int num : arr) {
            // Special case for 0
            if (num == 0) {
                if (mp[num] > 1) {
                    return true;
                }
            } else if (mp.find(2 * num) != mp.end()) {
                return true;
            }
        }

        return false;
    }
};
