class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix.size() - 1;     // bottom boundary (row index)
    int m = matrix[0].size() - 1;  // right boundary (col index)
    int p = 0;                     // left boundary (col index)
    int g = 0;                    

    int total = (n + 1) * (m + 1);
    vector<int> a(total);
    int k = 0, o = 0;

    while (k < total) {
        if (o % 2 == 0) {
            // top row: left -> right
            for (int j = p; j <= m; j++) {
                a[k] = matrix[g][j];
                k++;
            }
            g++;

            // right column: top -> bottom
            for (int j = g; j <= n; j++) {
                a[k] = matrix[j][m];
                k++;
            }
            m--;

        } else {
            // bottom row: right -> left
            for (int j = m; j >= p; j--) {
                a[k] = matrix[n][j];
                k++;
            }
            n--;

            // left column: bottom -> top
            for (int j = n; j >= g; j--) {
                a[k] = matrix[j][p];
                k++;
            }
            p++;
        }
        o++;
    }

    return a;
}
    
};