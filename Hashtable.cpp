class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int K = 26;
        vector<int> hashtable(K, 0);
        for(auto &c : allowed){
            hashtable[c-'a'] = 1;
        }
        int counter=0;
        for(auto &word : words){
            bool isfound = true;
            for(auto &c : word){
                if(!hashtable[c-'a']){
                    isfound = false;
                    break;
                }
            }
            if(isfound){
                counter++;
            }
        }
        return counter;
    }
};