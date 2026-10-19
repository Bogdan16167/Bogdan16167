#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> res;
    int mx = *max_element(candies.begin(), candies.end());
    for (int candy:candies){
        if (candy+extraCandies >= mx) res.push_back(true);
        else res.push_back(false);
    }
    return res;
}

int main()
{
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    for (bool a: kidsWithCandies(candies,extraCandies)){
        cout<<a<<" ";
    }
    return 0;
}