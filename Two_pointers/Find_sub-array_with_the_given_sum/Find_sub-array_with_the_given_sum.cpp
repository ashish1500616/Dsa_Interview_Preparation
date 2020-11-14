vector<int> Solution::solve(vector<int> &A, int B)
{
    int size = A.size();
    long sum = A[0];
    int l = 0, r = 1;
    while (l <= r)
    {
        if (sum == B)
        {
            vector<int> ans;
            for (int i = l; i < r; i++)
            {
                ans.push_back(A[i]);
            }
            return ans;
            // l  :   0-> 1
            // sum :  6-1 = 5
        }
        else if (sum < B && r != size)
        {
            sum += A[r++];
            //  r :    1 2->3
            //  sum :  3 6
        }
        else
        {
            sum -= A[l++];
        }
        //  Case 1 : When Sum equals B;
        //  Case 2 : When Sum Less Than B ;
        //  Case 3 : When Sum Greater Than B;
        //  Case 4 : When Sum Equals The First Number Of the Array .
        // [10, 0]
        //  Case 5 : When Sum Ends At The Last Character of the Array .
        // [1 0 , 0 , 10 ] = [0 ,0, 10]
    }
    return {-1};
}
