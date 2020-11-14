public class Solution {
	public int[] solve(int[] A, int B) {
		int size = A.length;
		long sum = A[0];
		int l = 0,
		r = 1;
		while (l <= r) {
			if (sum == B) {
				int[] found = new int[r - l];
				for (int x = l; x < r; x++) {
					found[x - l] = A[x];
				}
				return found;
			}
			else if (sum < B && r != size) {
				sum += A[r++];
			}
			else {
				if (l == size) {
					break;
				}
				sum -= A[l++];
			}
		}
		int[] notFound = { - 1
		};
		return notFound;
	}
}