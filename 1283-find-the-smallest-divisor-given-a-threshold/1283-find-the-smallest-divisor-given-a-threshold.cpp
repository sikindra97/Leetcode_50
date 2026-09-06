class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());

        while (start <= end) {
            int mid = start + (end - start) / 2;

            long long sum = 0;

            for (int it : nums) {
                sum += (it + mid - 1) / mid;
            }

            if (sum <= threshold) {
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return start;
    }
};