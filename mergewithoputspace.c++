


// #include <bits/stdc++.h>
// using namespace std;

// void merge(long long arr1[], long long arr2[], int n, int m) {

//     //Declare a 3rd array and 2 pointers:
//     long long arr3[n + m];
//     int left = 0;
//     int right = 0;

//     int index = 0;

//     //Insert the elements from the 2 arrays
//     // into the 3rd array using left and right
//     // pointers:

//     while (left < n && right < m) {
//         if (arr1[left] <= arr2[right]) {
//             arr3[index] = arr1[left];
//             left++, index++;
//         }
//         else {
//             arr3[index] = arr2[right];
//             right++, index++;
//         }
//     }

//     // If right pointer reaches the end:
//     while (left < n) {
//         arr3[index++] = arr1[left++];
//     }

//     // If left pointer reaches the end:
//     while (right < m) {
//         arr3[index++] = arr2[right++];
//     }

//     // Fill back the elements from arr3[]
//     // to arr1[] and arr2[]:
//     for (int i = 0; i < n + m; i++) {
//         if (i < n) arr1[i] = arr3[i];
//         else arr2[i - n] = arr3[i];
//     }
// }

// int main()
// {
//     long long arr1[] = {1, 4, 8, 10};
//     long long arr2[] = {2, 3, 9};
//     int n = 4, m = 3;
//     merge(arr1, arr2, n, m);
//     cout << "The merged arrays are: " << "\n";
//     cout << "arr1[] = ";
//     for (int i = 0; i < n; i++) {
//         cout << arr1[i] << " ";
//     }
//     cout << "\narr2[] = ";
//     for (int i = 0; i < m; i++) {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {

    int left = n - 1;
    int right = 0;

    //Swap the elements until arr1[left] is
    // smaller than arr2[right]:
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }

    
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

