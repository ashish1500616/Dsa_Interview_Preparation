vector<int> Solution::plusOne(vector<int> &A)
{
    int size = A.size();
    //  123 + 1 = 124
    //  129 + 1 = 130
    //  999 + 1 = 1000
    //  0121 + 1 = 122
    //  0    + 1 = 1
    // Count 0's at the front .
    int s0 = 0;
    while (A[s0] == 0 && ++s0)
        ;
    int ones_sum = A[size - 1] + 1;
    int carry = ones_sum / 10;
    A[size - 1] = ones_sum % 10;
    if (carry > 0)
    {
        for (int i = size - 2; i >= s0; i--)
        {
            int digit_sum = A[i] + carry; // 9 + 1 = 10
            carry = digit_sum / 10;       // 10 / 10 = 1
            A[i] = digit_sum % 10;        // 10 % 10 = 0
        }
    }
    if (carry != 0)
    {
        cout << carry << " ";
        return vector<int>(size, 0);;
    }
    // Handle When Inpute Has Multiple 0's ..
    if (s0 != size)
    {
        return vector<int>(A.begin() + s0, A.end());
    }
    else
    {
        return {1};
    }
}