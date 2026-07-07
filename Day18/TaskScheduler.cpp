class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        vector<int> freq(26, 0);

        for(char task : tasks)
            freq[task - 'A']++;

        sort(freq.begin(), freq.end());

        int maxFreq = freq[25] - 1;
        int idle = maxFreq * n;

        for(int i = 24; i >= 0 && idle > 0; i--)
            idle -= min(freq[i], maxFreq);

        idle = max(0, idle);

        return tasks.size() + idle;
    }
};
