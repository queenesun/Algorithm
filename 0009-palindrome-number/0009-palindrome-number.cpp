class Solution {
public:
    bool isPalindrome(int x) {
        string xx = to_string(x);
        string xxx = "";

        for(int i=xx.size()-1; i>=0; i--)
        {
            xxx.push_back(xx[i]);
        }

        if(xx == xxx)
            return true;
        else
            return false;
    }
};