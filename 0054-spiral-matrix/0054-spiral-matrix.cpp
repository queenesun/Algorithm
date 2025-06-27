class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size(); // How many rows are present?
        if(m == 0) return ans;
        int n = matrix[0].size(); // How many cols are present?
        if(n == 0) return ans;
        
        int sr = 0, er = m - 1, sc = 0, ec = n - 1;
        int cnt = 0; // How many elements has been pushed into the ans vector?

        while(sr <= er && sc <= ec)
        {
            // print sr
            for(int i = sc; i <= ec; i++)
            {
                ans.push_back(matrix[sr][i]);
                cnt++;
            }
            sr++;
            if(cnt == m * n) return ans;

            // print ec
            for(int i = sr; i <= er; i++)
            {
                ans.push_back(matrix[i][ec]);
                cnt++;
            }
            ec--;
            if(cnt == m * n) return ans;

            // print er
            for(int i = ec; i >= sc; i--)
            {
                ans.push_back(matrix[er][i]);
                cnt++;
            }
            er--;
            if(cnt == m * n) return ans;

            // print sc
            for(int i = er; i >= sr; i--)
            {
                ans.push_back(matrix[i][sc]);
                cnt++;
            }
            sc++;
            if(cnt == m * n) return ans;
        }
        return ans;
    }
};

/*
Space complexity = O(1)
Time complexity = O(m*n)
*/