class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        if(s.find("IV") != string::npos)
        {
            res -= 2;
        }
        if(s.find("IX") != string::npos)
        {
            res -= 2;
        }
        if(s.find("XL") != string::npos)
        {
            res -= 20;
        }
        if(s.find("XC") != string::npos)
        {
            res -= 20;
        }
        if(s.find("CD") != string::npos)
        {
            res -= 200;
        }
        if(s.find("CM") != string::npos)
        {
            res -= 200;
        }
        
        for(int i = 0; i < s.size(); ++i)
        {
            switch(s[i])
            {
                case 'I':res += 1;break;
                case 'V':res += 5;break;
                case 'X':res += 10;break;
                case 'L':res += 50;break;
                case 'C':res += 100;break;
                case 'D':res += 500;break;
                case 'M':res += 1000;break;
            }
            
        }
        return res;
        
    }
};

class Solution {
public:
    int romanToInt(string s){
    const string M[] = {"", "M", "MM", "MMM"};
    const string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int size = s.size(), i = 0, state = 0, res = 0;
    string s1, s2, s3;
    while(i < size)
    {
        switch(state)
        {
        case 0:
            if(s[i] == 'C' || s[i] == 'D')
            {
                state = 1;
            }else if(s[i] == 'X' || s[i] == 'L'){
                state = 2;
            }else if(s[i] == 'I' || s[i] == 'V'){
                state = 3;
            }else{
                res += 1000;
                ++i;
            }
            break;
        case 1:
            if(s[i] == 'X' || s[i] == 'L')
            {
                state = 2;
            }else if(s[i] == 'I' || s[i] == 'V'){
                state = 3;
            }else{
                s1 += s[i++];
            }
            break;
        case 2:
            if(s[i] == 'I' || s[i] == 'V')
            {
                state = 3;
            }else{
                s2 += s[i++];
            }
            break;
        case 3:
            s3 = s.substr(i);
            i = size;
            break;
        }
    }


    for(i = 0; i < 10; ++i)
    {
        res += (s1==C[i]?i*100:0)
                +(s2==X[i]?i*10:0)
                +(s3==I[i]?i:0);
    }
    return res;
}
};