class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() -1;
        int flag = 0;
        string res = "";
        int temp = 0;
        while(i >= 0 && j >= 0)
        {
            temp = (a[i] - '0') + (b[j] - '0') + flag;
            flag = temp / 2;
            temp %= 2;
            res = to_string(temp) + res;
            --i;
            --j;
        }
        while(i >= 0)
        {
            temp = (a[i] - '0') + flag;
            flag = temp / 2;
            temp %= 2;
            res = to_string(temp) + res;
            --i;
            if(flag == 0)
            {
                res = a.substr(0, i + 1) + res;
                break;
            }
        }
        
        while(j >= 0)
        {
            temp = (b[j] - '0') + flag;
            flag = temp / 2;
            temp %= 2;
            res = to_string(temp) + res;
            --j;
            if(flag == 0)
            {
                res = b.substr(0, j + 1) + res;
                break;
            }
        }
        
        if(flag != 0)
        {
            res = to_string(flag) + res;
        }
        return res;
    }
};