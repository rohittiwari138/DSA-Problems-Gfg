class Solution {
public:
    int countNumbers(int n) {
        int limit = sqrt(n);

        vector<bool> prime(limit + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i * i <= limit; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= limit; j += i)
                    prime[j] = false;
            }
        }

        vector<int> primes;
        for (int i = 2; i <= limit; i++) {
            if (prime[i]) primes.push_back(i);
        }

        int ans = 0;

        // Case 1: p^8
        for (long long p : primes) {
            long long val = 1;
            for (int i = 0; i < 8; i++) {
                val *= p;
                if (val > n) break;
            }
            if (val <= n)
                ans++;
            else
                break;
        }

        // Case 2: p^2 * q^2
        int m = primes.size();
        for (int i = 0; i < m; i++) {
            long long p2 = 1LL * primes[i] * primes[i];
            for (int j = i + 1; j < m; j++) {
                long long q2 = 1LL * primes[j] * primes[j];
                if (p2 * q2 <= n)
                    ans++;
                else
                    break;
            }
        }

        return ans;
    }
};