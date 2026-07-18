#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max1 = 0;
        int max2 = 0;

        for (int i = 0; i < sentences[0].length(); i++) {
            if (sentences[0][i] == ' ') {
                max1++;
            }
        }

        for (int i = 1; i < sentences.size(); i++) {
            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i][j] == ' ') {
                    max2++;
                }
            }

            if (max2 >= max1) {
                max1 = max2;
            }

            max2 = 0;
        }

        return max1 + 1;
    }
};

int main() {
    Solution obj;

    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    cout << "Maximum words in a sentence: "
         << obj.mostWordsFound(sentences) << endl;

    return 0;
}