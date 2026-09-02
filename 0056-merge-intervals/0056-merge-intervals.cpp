class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
            int b=intervals.size();
             sort(intervals.begin(),intervals.end());
            vector<vector<int>> a;
              


    if (b == 0) {
        return a;
    }

    a.resize(b, vector<int>(2));

    int k = 0;

    a[0][0] = intervals[0][0];
    a[0][1] = intervals[0][1];

    for (int i = 1; i < b; i++) {
        if (a[k][1] >= intervals[i][0]) {
            a[k][1] = max(a[k][1], intervals[i][1]);
        } else {
            k++;
            a[k][0] = intervals[i][0];
            a[k][1] = intervals[i][1];
        }
    }

    a.resize(k + 1);

    return a;
    }
};