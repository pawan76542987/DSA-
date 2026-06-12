#include <iostream>
#include <vector>

using namespace std;
vector<int> calculateSpan(vector<int>& prices) {
    int n = prices.size();
    vector<int> span(n);
    span[0] = 1;

    for (int i = 1; i < n; i++) {
        span[i] = 1; 
        for (int j = i - 1; j >= 0; j--) {
            if (prices[j] <= prices[i]) {
                span[i]++; 
            } else {
                break; 
            }
        }
    }

    return span;
}

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    
    vector<int> result = calculateSpan(prices);


    cout << "Stock Prices: ";
    for (int p : prices) cout << p << " ";
    cout << "\nSpan Values:  ";
    for (int s : result) cout << s << " ";
    cout << endl;

    return 0;
}