class Solution {
public:

    string encode(vector<string>& strs) {

        string result;

        for(string s : strs) {
            for(char c : s) {
                int num = c;
                string numString = to_string(num);
                result += numString;
                result += ",";
            }
            result += ".";
        }

        // turn each char into a number and put it in the string.
        // after each char put a ,
        // after each string put a .

        return result;
    }

    vector<string> decode(string s) {

        vector<string> result;
        // put numbers in a string until you reach a ","
        // turn that string into an int, turn int into a char, put in string
        // repeat until reach a "."
        // put string in the vector
        // repeat until end of to-decode string.

        string word = "";
        string curr_unicode = "";

        for(char c : s) {
            if(c == ',') {
                int num = stoi(curr_unicode);
                char character = num;
                word += character;
                curr_unicode = "";
            }
            else if(c == '.') {
                result.push_back(word);
                word = "";
            }
            else {
                curr_unicode += c;
            }
        }

        return result;

    }
};
