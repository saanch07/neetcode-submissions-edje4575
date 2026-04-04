class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str="";
        for(string s:strs)
        {
            encoded_str += to_string(s.length()) + "#";
            for(char c:s)
            {
                encoded_str.push_back(c);
            }
        }
        return encoded_str;

    }

    vector<string> decode(string s) {

        vector<string>decoded;
        int i = 0;
        while(i < s.length())
        {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            i = pos + 1;
            decoded.push_back(s.substr(i, len));
            i += len;
        }
        return decoded;


    }
};
