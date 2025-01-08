class Solution {
public:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
        return str2.starts_with(str1) && str2.ends_with(str1);
        
    }
    int countPrefixSuffixPairs(const vector<string>& words){
        int count = 0;
        int n = words.size();
        for(int i = 0;i<n;++i){
            for(int j = i+1;j<n;++j){
                if(isPrefixAndSuffix(words[i], words[j])){
                    ++count;
                }
            }

        }
        return count;
    }
    int main() {
    vector<string> words = {"a", "aba", "ababa", "aa"};
    int result = countPrefixSuffixPairs(words);
    cout << "Number of pairs: " << result << endl; 
    return 0;
}
};
