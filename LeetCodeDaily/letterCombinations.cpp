class Solution {
public:
void findCombinations(string s, int n , vector<string> mapping, int index, string current, vector<string> &output){
	if(index==n){
		output.push_back(current);
		return;
	}
	int mapNo = int(s[index]) - '0';
	if(s[index]!='7' && s[index]!='9'){
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][0], output);
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][1], output);
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][2], output);
	}

	else{
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][0], output);
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][1], output);
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][2], output);
		findCombinations(s, n, mapping, index+1, current+mapping[mapNo][3], output);
	}
	return ;
}

    vector<string> letterCombinations(string s) {
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	vector<string> output;
    if(s=="")return output;
	int n = s.length();
	string current="";
	findCombinations(s, n, mapping, 0, current, output);
	return output;
    }
};