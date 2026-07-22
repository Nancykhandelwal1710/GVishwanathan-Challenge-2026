class Solution {
    struct Candidate {
        int leftZeroStart;
        int oneStart;
        int oneEnd;
        int rightZeroEnd;
        int fullGain;
    };

    vector<int> tree;

    void build(int node, int left, int right, const vector<Candidate>& candidates) {
        if (left == right) {
            tree[node] = candidates[left].fullGain;
            return;
        }

        int mid = left + (right - left) / 2;

        build(node * 2, left, mid, candidates);
        build(node * 2 + 1, mid + 1, right, candidates);

        tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
    }

    int queryMax(int node, int left, int right, int queryLeft, int queryRight) {
        if (queryRight < left || right < queryLeft)
            return 0;

        if (queryLeft <= left && right <= queryRight)
            return tree[node];

        int mid = left + (right - left) / 2;

        return max(
            queryMax(node * 2, left, mid, queryLeft, queryRight),
            queryMax(node * 2 + 1, mid + 1, right, queryLeft, queryRight)
        );
    }

public:
    vector<int> maxActiveSectionsAfterTrade(
        string s,
        vector<vector<int>>& queries
    ) {
        int n = s.size();

        int totalOnes = count(s.begin(), s.end(), '1');

        struct Run {
            char value;
            int start;
            int end;
        };

        vector<Run> runs;

        for (int i = 0; i < n;) {
            int j = i;

            while (j + 1 < n && s[j + 1] == s[i])
                j++;

            runs.push_back({s[i], i, j});
            i = j + 1;
        }

        vector<Candidate> candidates;

        for (int i = 1; i + 1 < runs.size(); i++) {
            if (
                runs[i].value == '1' &&
                runs[i - 1].value == '0' &&
                runs[i + 1].value == '0'
            ) {
                int leftLength =
                    runs[i].start - runs[i - 1].start;

                int rightLength =
                    runs[i + 1].end - runs[i].end;

                candidates.push_back({
                    runs[i - 1].start,
                    runs[i].start,
                    runs[i].end,
                    runs[i + 1].end,
                    leftLength + rightLength
                });
            }
        }

        int m = candidates.size();

        vector<int> oneStarts;
        vector<int> oneEnds;

        for (const Candidate& candidate : candidates) {
            oneStarts.push_back(candidate.oneStart);
            oneEnds.push_back(candidate.oneEnd);
        }

        if (m > 0) {
            tree.resize(4 * m);
            build(1, 0, m - 1, candidates);
        }

        vector<int> answer;

        for (const auto& q : queries) {
            int l = q[0];
            int r = q[1];

            // First one-block having at least one zero before it
            // inside the query.
            int first = upper_bound(
                oneStarts.begin(),
                oneStarts.end(),
                l
            ) - oneStarts.begin();

            // Last one-block having at least one zero after it
            // inside the query.
            int last = lower_bound(
                oneEnds.begin(),
                oneEnds.end(),
                r
            ) - oneEnds.begin() - 1;

            if (first > last) {
                answer.push_back(totalOnes);
                continue;
            }

            auto clippedGain = [&](int index) {
                const Candidate& candidate = candidates[index];

                int leftZeros =
                    candidate.oneStart -
                    max(l, candidate.leftZeroStart);

                int rightZeros =
                    min(r, candidate.rightZeroEnd) -
                    candidate.oneEnd;

                return leftZeros + rightZeros;
            };

            int bestGain = clippedGain(first);

            if (first != last)
                bestGain = max(bestGain, clippedGain(last));

            // Candidates between the first and last have both
            // neighbouring zero-blocks completely inside the query.
            if (first + 1 <= last - 1) {
                bestGain = max(
                    bestGain,
                    queryMax(
                        1,
                        0,
                        m - 1,
                        first + 1,
                        last - 1
                    )
                );
            }

            answer.push_back(totalOnes + bestGain);
        }

        return answer;
    }
};
