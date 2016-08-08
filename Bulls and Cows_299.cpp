class Solution {
public:
    string getHint(string secret, string guess) {
        map<char, int> cnt;
        for(int i = 0; i < secret.size(); ++i)
        {
            cnt[secret[i]]++;
        }
        
        int match = 0, not_totally = 0;
        
        for(int i = 0; i < guess.size(); ++i)
        {
            if(guess[i] == secret[i])
            {
                ++match;
            }
            if(cnt.find(guess[i]) != cnt.end() && cnt[guess[i]] > 0)
            {
                cnt[guess[i]]--;
                not_totally++;
            }
        }
        
        return to_string(match)+"A"+to_string(not_totally-match)+"B";
    }
};

class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> ser(10, 0);
        vector<int> gue(10 ,0);
        int ant = 0;
        for(int i = 0; i < secret.size(); ++i)
        {
            if(secret[i] == guess[i])
            {
                ant++;
            }
            else
            {
                ++ser[secret[i] - '0'];
                ++gue[guess[i] - '0'];
            }
        }
        
        int nomatch = 0;
        for(int i = 0; i < ser.size(); ++i)
        {
            nomatch += min(ser[i], gue[i]);
        }
        return to_string(ant) + "A" + to_string(nomatch) + "B";
    }
};