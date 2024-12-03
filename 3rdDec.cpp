class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        vector<string> v;
        int n = spaces.size();

        
        v.push_back(s.substr(0, spaces[0]));

     
        for (int i = 0; i < n - 1; i++) {
            v.push_back(s.substr(spaces[i], spaces[i + 1] - spaces[i]));
        }

      
        v.push_back(s.substr(spaces[n - 1]));

       
        string result = "";
        for (int i = 0; i < v.size(); i++) {
            if (i > 0) result += " ";
            result += v[i];
        }

        return result;
    }
};
