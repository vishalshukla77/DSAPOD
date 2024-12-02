class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordIndex = 0;
        stringstream ss(sentence);
        string word;

        while (ss >> word) { 
            wordIndex++;
           
            if (word.find(searchWord) == 0) {
                return wordIndex;
            }
        }

        return -1;
    }
};
