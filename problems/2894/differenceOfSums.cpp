class Solution {
public:
    int differenceOfSums(int n, int m) {
        int k = n / m;
        int t = n * (n + 1) / 2;
        return t - m * k * (k + 1);
    }
};
