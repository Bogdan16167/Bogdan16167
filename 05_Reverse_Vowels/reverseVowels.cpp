#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string reverseVowels(string &s) 
{
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int left = 0;
    int right = s.size()-1;
    while (left<right)
    {
        while(left < right && find(vowels.begin(), vowels.end(), s[left])==vowels.end()){
            left++;
        }
        while(left < right && find(vowels.begin(), vowels.end(), s[right])==vowels.end()){
            right--;
        }
        if (left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    return s;
}

int main()
{
    string s = "leetcode";
    cout<<reverseVowels(s);
    return 0;
}