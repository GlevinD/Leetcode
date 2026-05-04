class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // cout << "[";
        int l = 0, m =0;
        vector<vector<int>> res = matrix;
        for(int j = 0 ; j < n ; j++,l++){
            // cout << "[";
            for(int i = n-1 ; i >=0 ; i--,m++){
                matrix[l][m] = res[i][j];
            }
            m = 0;
            // cout << "\n";
            // if(j<n)cout << ",";
        }
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < n ; j++){
        //         cout << matrix[i][j];
        //     }
        // }
    }
};
