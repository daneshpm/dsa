
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    // int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
      for(int j=i+1;j<arr.size();j++){
    //     minPrice = min(minPrice, arr[i]);
    //     maxPro = max(maxPro, arr[i] - minPrice);
          if(arr[j]>arr[i]){
           maxPro=max(arr[j]-arr[i],maxPro);
          }
    }
  }
    
    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}

