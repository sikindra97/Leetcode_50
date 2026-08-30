class Solution {
public:
    long long power(long long x, long long y) {
        long long ans = 1;
        long long MOD = 1000000007;

        while (y > 0) {
            if (y % 2 == 1)
                ans = (ans * x) % MOD;

            x = (x * x) % MOD;
            y /= 2;
        }

        return ans;
    }

    int sumDecoded(vector<long long>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int w = nums[i] % 10;
            long long d = nums[i] / 10;

            string s = to_string(d);

            string st = s.substr(0, w);
            string st1 = s.substr(w, s.size());

            int x = stoi(st);
            int y = stoi(st1);

            long long val = power(x, y);

            ans = (ans + val) % 1000000007;
        }

        return ans;
    }
};