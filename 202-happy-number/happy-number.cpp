class Solution {
public:

    int SS(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            n = n / 10;
            sum = sum + digit * digit;
        }

        return sum;
    }

    bool isHappy(int n) {

        int slow = n;
        int fast = n;

        while (true) {

            slow = SS(slow);
            fast = SS(SS(fast));

            if (fast == 1)
                return true;

            if (slow == fast)
                return false;
        }
    }
};