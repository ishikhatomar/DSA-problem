#include<iostream>
#include<vector>
int sellBuy(std::vector<int>& prices){
    int min = prices[0];
    int profit =0;
    for(int i =0; i<prices.size(); i++){
        if(min>prices[i]){
            min= prices[i];
        }
        int temp = prices[i]-min;
        if(profit<temp){
            profit=temp;
        }
    }
    return profit;
}

int main(){
    std::vector<int> prices = {7,6,4,3,1};
    std::cout<<sellBuy(prices);
}