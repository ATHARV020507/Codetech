class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count = 0;
    for (const string& word : words) {
        if (word.size() >= pref.size() && word.substr(0, pref.size()) == pref) {
            count++;
        }
    }
    return count;
};
int main() {
    vector<string> words = {"pay", "attention", "practice", "attend"};
    string pref = "at";

    int result = prefixCount(words, pref);
    cout << "Number of strings with prefix '" << pref << "': " << result << endl; 

    return 0;
}
};
