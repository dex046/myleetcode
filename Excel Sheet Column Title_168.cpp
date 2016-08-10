class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n-- != 0)
        {
            ans = (char)('A' + n % 26) + ans;
            n /= 26;
        }
        return ans;
    }
};

class Solution {
public:
    string convertToTitle(int n) {
        string result = "";
	int temp;
	while (n!=0){
		switch ((temp = n % 26))
		{
		case 0:result = "Z" + result; temp = 26; break;
		case 1:result = "A" + result; break;
		case 2:result = "B" + result; break;
		case 3:result = "C" + result; break;
		case 4:result = "D" + result; break;
		case 5:result = "E" + result; break;
		case 6:result = "F" + result; break;
		case 7:result = "G" + result; break;
		case 8:result = "H" + result; break;
		case 9:result = "I" + result; break;
		case 10:result = "J" + result; break;
		case 11:result = "K" + result; break;
		case 12:result = "L" + result; break;
		case 13:result = "M" + result; break;
		case 14:result = "N" + result; break;
		case 15:result = "O" + result; break;
		case 16:result = "P" + result; break;
		case 17:result = "Q" + result; break;
		case 18:result = "R" + result; break;
		case 19:result = "S" + result; break;
		case 20:result = "T" + result; break;
		case 21:result = "U" + result; break;
		case 22:result = "V" + result; break;
		case 23:result = "W" + result; break;
		case 24:result = "X" + result; break;
		case 25:result = "Y" + result; break;
		
		default:
			break;
		}
		n -= temp;
		n /= 26;
		
	}
	return result;
    }
};