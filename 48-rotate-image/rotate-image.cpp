class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i, j, temp;
        for(int i=0;i<matrix.size();i++){
            for(j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(i=0;i<matrix.size();i++){
        reverse(matrix[i].begin(),matrix[i].end()) ;
    }
    }
};