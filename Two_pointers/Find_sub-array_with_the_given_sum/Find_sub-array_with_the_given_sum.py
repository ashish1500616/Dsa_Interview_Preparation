class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return a list of integers
    def solve(self, A, B):
        size = len(A)
        sum = A[0]
        l = 0
        r = 1
        while l <= r:
            if sum == B:
                return A[l:r]
            elif sum < B and r != size:
                sum = sum + A[r]
                r = r + 1
            else:
                if l == size:
                    break
                sum = sum - A[l]
                l = l + 1
        return [-1]
