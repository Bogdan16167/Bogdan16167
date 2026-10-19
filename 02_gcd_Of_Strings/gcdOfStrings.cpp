#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}
string gcdOfStrings(string str1, string str2) {
    if (str1+str2 != str2+str1) return "";
    int gcdLen = gcd(str1.length(), str2.length());
    return str1.substr(0, gcdLen); 
}
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    cout<<gcdOfStrings(str1,str2);
    return 0;
}