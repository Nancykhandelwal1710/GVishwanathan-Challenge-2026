class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int active = count(s.begin(), s.end(), '1');
        string t = "1" + s + "1";

        vector<pair<char, int>> blocks;

        for (char c : t) {
            if (blocks.empty() || blocks.back().first != c)
                blocks.push_back({c, 1});
            else
                blocks.back().second++;
        }

        int maxGain = 0;

        for (int i = 1; i + 1 < blocks.size(); i++) {
            if (blocks[i].first == '1' &&
                blocks[i - 1].first == '0' &&
                blocks[i + 1].first == '0') {

                maxGain = max(
                    maxGain,
                    blocks[i - 1].second + blocks[i + 1].second
                );
            }
        }

        return active + maxGain;
    }
};
