#include <bits/stdc++.h>
using namespace std;

int main() {
    int testop;
    cin >> testop;
    int i = 1;
    while (i <= testop) {
        unordered_map<char, char> charMap;
        char c = 'A';
        while (c <= 'Z') {
            char digit;
            cin >> digit; 
            charMap[c] = digit;
            c++;
        }
        int num;
        cin >> num; 
        vector<string> wordList(num);
        int j = 0;
        while (j < num) {
            cin >> wordList[j]; 
            j++;
        }
        unordered_map<string, int> encodedWords;
        bool hasCollision = false;
        for (const string& word : wordList) {
            string encodedWord = "";
            for (char c : word) {
                encodedWord += charMap.at(c);
            }
            if (encodedWords.count(encodedWord) > 0) {
                hasCollision = true;
                break;
            }
            encodedWords[encodedWord]++;
        }
        if (hasCollision) {
            cout << "Case #" << i << ": YES" << endl;
        } else {
            cout << "Case #" << i << ": NO" << endl;
        }
        i++;
    }

    return 0;
}
