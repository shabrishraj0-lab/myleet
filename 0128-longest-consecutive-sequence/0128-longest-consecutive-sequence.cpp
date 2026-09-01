class Solution {
public:


    int longestConsecutive(vector<int>& nums) {
           unordered_set<int> st(nums.begin(), nums.end());
int longest = 0;

for (int value : st) {
   
    if (st.find(value - 1) == st.end()) {
        int current = value;
        int count = 1;

        while (st.find(current + 1) != st.end()) {
            current++;
            count++;
        }

        longest = max(longest, count);
    }
}

return longest;
    }
};