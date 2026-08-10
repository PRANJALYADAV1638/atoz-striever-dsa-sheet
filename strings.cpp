//   1 Remove Outermost Parentheses



/*class Solution {
public:
    string removeOuterParentheses(string s) {
    stack<char> st;
    string ans="";
    for(char x: s){
        if(x=='('){
            if(!st.empty()){
                ans+=x;
            }
                st.push(x);
        }
        else{
            st.pop();
            if(!st.empty()){
                ans+=x;
            }
        }
    }
    return ans;
    }
};


*/

//  2  Reverse words in a given string / Palindrome Check


/*class Solution {
public:
    string reverseWords(string s) {
        int n =s.length();
        string ans = "";
        reverse(s.begin(),s.end());
   for(int b=0;b<n;b++){
        string word="";
    
        while(b<n&&s[b]!= ' ' ){
            word+= s[b];
            b++;
        }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+= " "+word;
            
        }
   
    }
    return ans.substr(1);
    }
};

*/


// 3  Largest Odd Number in a String



/*class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int x =-1;
         for(int b=num.length()-1;b>=0;b--){
            if(num[b]%2!=0){
  x=b;
  break;
            }
            
         }
         for(int b=0;b<=x;b++){
            ans+=num[b];
         }
    return ans;
    }
};


*/




//  4  Longest Common Prefix



/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        for(int i = 0; i < strs[0].size(); i++){

            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++){

                if(i >= strs[j].size() || strs[j][i] != ch){
                    return ans;
                }
            }

            ans += ch;
        }

        return ans;
    }
};



*/

//   5   Isomorphic String
   


/*class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.length() != t.length())
            return false;

        map<char, char> mp1;
        map<char, char> mp2;

        for (int b = 0; b < s.length(); b++) {

            if (mp1.find(s[b]) == mp1.end())
                mp1[s[b]] = t[b];
            else if (mp1[s[b]] != t[b])
                return false;

            if (mp2.find(t[b]) == mp2.end())
                mp2[t[b]] = s[b];
            else if (mp2[t[b]] != s[b])
                return false;
        }

        return true;
    }
};



*/



//   6   Rotate String




/*
class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.size() != goal.size())
            return false;

        return (s + s).find(goal) != string::npos;
    }
};


*/

// 7     Check if two strings are anagram of each other


/*class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int x=s.length();
        int y=t.length();
        if(x!=y)return false;
        for(int b=0;b<x;b++){
            if(s[b]!=t[b])return false;
        }
    return true;
    }
};


*/


/**/

//   MEDIUM AND HARD


//  8    Sort Characters by Frequency




/*class Solution {
public:
    string frequencySort(string s) {
     map<char,int> mp;
     for(char x:s){
        mp[x]++;
     }   
     vector<pair<char,int>> v;
     for(auto x: mp){
        v.push_back(x);
     }
     sort(v.begin(),v.end(),[](pair<char,int> a , pair<char, int > b){
        return a.second>b.second;
     });
     string ans="";
      for (auto x : v) {
            ans += string(x.second, x.first);
     }
     return ans;
    }
};



*/

//  9  	Maximum Nesting Depth of the Parentheses



/*

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;

        for(char x : s){
            if(x == '('){
                st.push(x);
                ans = max(ans, (int)st.size());   
            }
            else if(x == ')'){
                st.pop();
            }
        }

        return ans;
    }
};

*/


//   10   Roman to Integer



/*

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
mp['V'] = 5;
mp['X'] = 10;
mp['L'] = 50;
mp['C'] = 100;
mp['D'] = 500;
mp['M'] = 1000;
int ans=0;
for(int b=0;b<s.length();b++){
    if(b+1==s.length()||mp[s[b]]>=mp[s[b+1]]){
        ans+=mp[s[b]];
    }
    else{
        ans-=mp[s[b]];
    }
}
return ans;
    }
};

*/


// 11     String to Integer (atoi)



/*class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();
        int sign = 1;
        long long ans = 0;

        while (i < n && s[i] == ' ')
            i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < n && s[i] >= '0' && s[i] <= '9') {

            ans = ans * 10 + (s[i] - '0');

            if (sign == 1 && ans > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -ans < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * ans;
    }
};

*/

//    12  	Count Number of Substrings






//   13      Longest Palindromic Substring


/*

class Solution {
public:
    string solve(string s, int left, int right) {
        int n = s.length();

        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }

        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        int n = s.length();

        string ans = "";

        for (int i = 0; i < n; i++) {

            string odd = solve(s, i, i);
            if (odd.length() > ans.length())
                ans = odd;

            string even = solve(s, i, i + 1);
            if (even.length() > ans.length())
                ans = even;
        }

        return ans;
    }
};

*/



//   14       Sum of Beauty of All Substrings

/*class Solution {
public:
    int beautySum(string s) {
         
         int ans=0;
int n =s.length();
string sub="";
        for(int left=0;left<n;left++){
         map<char , int > mp;
         for(int right=left;right<n;right++){
            mp[s[right]]++;
         
        int maxFreq = INT_MIN;
    int minFreq = INT_MAX;





      for (auto it : mp) {
                    maxFreq = max(maxFreq, it.second);
                    minFreq = min(minFreq, it.second);
                }
ans+=maxFreq-minFreq;
         }
    }
         return ans;
    }
};

*/


//    15   Reverse every word in a string
/*class Solution {
public:
    string reverseWords(string s) {
        int n =s.length();
        string ans = "";
        reverse(s.begin(),s.end());
   for(int b=0;b<n;b++){
        string word="";
    
        while(b<n&&s[b]!= ' ' ){
            word+= s[b];
            b++;
        }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+= " "+word;
            
        }
   
    }
    return ans.substr(1);
    }
};

*/

