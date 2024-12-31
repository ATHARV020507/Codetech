class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        for (int i = 0; i < s.length(); ++i) {
            int current = romanValues[s[i]];
            int next = (i + 1 < s.length()) ? romanValues[s[i + 1]] : 0;

            if (current < next) {
                result -= current; 
            } else {
                result += current;
            }
        }

        return result;
    }
        
    
};
