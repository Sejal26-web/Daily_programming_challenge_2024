#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    // Create a dp array to store the minimum number of coins for each amount
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0; // Base case: No coins are needed to make amount 0
    
    // Fill the dp array
    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            if (dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    // If dp[amount] is still INT_MAX, it means it's impossible to make the amount
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    
    int result = coinChange(coins, amount);
    
    if (result != -1) {
        cout << "Minimum number of coins required: " << result << endl;
    } else {
        cout << "Not possible to make the amount with the given coins." << endl;
    }
    
    return 0;
}