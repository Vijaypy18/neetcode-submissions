class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix[0].size();j++)
        //     {
        //         if(matrix[i][j]==target)
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //method -2 flatten 2-d matrix into 1-d matrix
        int n=matrix.size();
        int m=matrix[0].size();

        int s=0;
        int e=(n*m)-1;
        int mid=s+(e-s)/2;

        while(s<=e)
        {
            int row=mid/m;
            int col=mid%m;

            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};
