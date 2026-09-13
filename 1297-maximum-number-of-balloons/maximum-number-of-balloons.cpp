class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> f;

        for (int i = 0; i < text.size(); i++) {
            f[text[i]]++;
        }

        string b = "balloon";
        int count = text.size();

        for (int i = 0; i < b.size(); i++) {
            int required = 1;

            if (b[i] == 'l' || b[i] == 'o') {
                required = 2;
            }

            int possible = f[b[i]] / required;

            if (possible < count) {
                count = possible;
            }
        }

        return count;
    }
};