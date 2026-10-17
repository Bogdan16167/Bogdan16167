#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string word3 = "";
    for (int i = 0; i<max(word1.length(),word2.length())*2; i++)
    {
        if (i%2==0 and i/2 < word1.length()) {
            word3+=word1[i/2];
        }
        if (i%2!=0 and i/2 < word2.length()){
            word3+=word2[i/2];
            }
    }
    return word3;
}
int main()
{
    string word1, word2;
    cin>>word1;
    cin>>word2;
    cout<<mergeAlternately(word1,word2);
    return 0;
}