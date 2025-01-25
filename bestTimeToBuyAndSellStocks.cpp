#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices,int n){
    int mini = prices[0], maximumProfit = 0;
    for(int i = 1;i < n;i++){
        int profit = prices[i] - mini; //prices[i] is the selling price and mini is the cost price at which we bought the shares
        maximumProfit = max(maximumProfit, profit); //to maximise the profit
        mini = min(prices[i], mini); //update the minimum prices till that day
    }
    return maximumProfit;
}
int main(){
    vector<int> prices = {7,1,3,4,6,5};
    int n = prices.size();
    int profitAtMax = maxProfit(prices,n);
    cout << "You can get a maximum profit of " << "$";
    cout << profitAtMax << endl;
    return 0;
}