class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;

        for (char task : tasks) {
            freq[task]++;
        }

        priority_queue<int> pq;

        for (auto& it : freq) {
            pq.push(it.second);
        }

        int time = 0;

        while (!pq.empty()) {
            vector<int> temp;

            // We can execute at most n + 1 different tasks
            for (int i = 0; i <= n; i++) {

                if (!pq.empty()) {
                    int count = pq.top();
                    pq.pop();

                    count--;

                    if (count > 0) {
                        temp.push_back(count);
                    }

                    time++;
                }
                else {
                    // No task available
                    if (temp.empty())
                        break;

                    time++;
                }
            }

            // Put remaining tasks back
            for (int count : temp) {
                pq.push(count);
            }
        }

        return time;
    }
};