// #include<bits/stdc++.h>
// using namespace std;

//   vector<int> RearrangebySign(vector<int>A, int n){
    

//   vector<int> pos;
//   vector<int> neg;
  
//   // Segregate the array into positives and negatives.
//   for(int i=0;i<n;i++){
      
//       if(A[i]>0) pos.push_back(A[i]);
//       else neg.push_back(A[i]);
//   }
  
//   // Positives on even indices, negatives on odd.
//   for(int i=0;i<n/2;i++){
      
//       A[2*i] = pos[i];
//       A[2*i+1] = neg[i];
//   }
  
  
//   return A;
    
// }

// int main() {
    
//   int n = 4;
//   vector<int> A {1,2,-4,-5};

//   vector<int> ans = RearrangebySign(A,n);
  
//   for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;

  vector<int> RearrangebySign(vector<int>A){
    
  int n = A.size();
  

  vector<int> ans(n,0);
  
  // positive elements start from 0 and negative from 1.
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      
      // Fill negative elements in odd indices and inc by 2.
      if(A[i]<0){
          ans[negIndex] = A[i];
          negIndex+=2;
      }
      
      // Fill positive elements in even indices and inc by 2.
      else{
          ans[posIndex] = A[i];
          posIndex+=2;
      }
  }
  
  return ans;
    
}

int main() {
  
  vector<int> A = {1,2,-4,-5};

  vector<int> ans = RearrangebySign(A);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}