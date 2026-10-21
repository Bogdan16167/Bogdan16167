#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (accumulate(flowerbed.begin(), flowerbed.end(), 0) == 0) return (flowerbed.size()+1)/2>=n;
    int bgn = 0;
    bool isBgn = true;
    int zeros = 0;
    int k = 0;
    int m = 0;
    for (int plot: flowerbed){
        zeros++;
        m++;
        if (plot == 1){
            if (isBgn==false) k+= (zeros-2)/2;
            else k+=bgn/2;
            zeros = 0;
            isBgn = false;
        }
        if (isBgn == true) bgn++;
        if (m == flowerbed.size()) k+= zeros/2;
    }
    return (k>=n);
}
int main(){
    vector <int> flowerbed = {1,0,0,0,1,0,0};
    int n = 2;
    cout<<canPlaceFlowers(flowerbed, n);
    return 0;
}