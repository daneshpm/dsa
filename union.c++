//maps

// #include <bits/stdc++.h>

// using namespace std;

// vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
//   map < int, int > freq;
//   vector < int > Union;
//   for (int i = 0; i < n; i++)
//     freq[arr1[i]]++;
//   for (int i = 0; i < m; i++)
//     freq[arr2[i]]++;
//   for (auto & it: freq)
//     Union.push_back(it.first);
//   return Union;
// }

// int main() {
//   int n = 10, m = 7;
//   int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//   vector < int > Union = FindUnion(arr1, arr2, n, m);
//   cout << "Union of arr1 and arr2 is " << endl;
//   for (auto & val: Union)
//     cout << val << " ";
//   return 0;
// }


//sets

// #include <bits/stdc++.h>

// using namespace std;

// vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
//   set < int > s;
//   vector < int > Union;
//   for (int i = 0; i < n; i++)
//     s.insert(arr1[i]);
//   for (int i = 0; i < m; i++)
//     s.insert(arr2[i]);
//   for (auto & it: s)
//     Union.push_back(it);
//   return Union;
// }

// int main()

// {
//   int n = 10, m = 7;
//   int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//   vector < int > Union = FindUnion(arr1, arr2, n, m);
//   cout << "Union of arr1 and arr2 is  " << endl;
//   for (auto & val: Union)
//     cout << val << " ";
//   return 0;
// }

//2 pointers



#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

