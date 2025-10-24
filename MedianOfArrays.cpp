// C++ Code to find Median of two Sorted Arrays of 
// Same Size using Sorting

#include <bits/stdc++.h>
using namespace std;

// Function to find the median of two sorted arrays of equal size
double getMedian(vector<int>& a, vector<int>& b) {
  
    // Concatenate
    vector<int> c(a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());

    // Sort the concatenated array
    sort(c.begin(), c.end());
    
    // Calculate and return the median
    int n = c.size();
  	
    int mid1 = n / 2;
    int mid2 = mid1 - 1;
	return (c[mid1] + c[mid2]) / 2.0;
}

int main() {
    vector<int> a = { 1, 12, 15, 26, 38 };
    vector<int> b = { 2, 13, 17, 30, 45 };

    cout << getMedian(a, b) << endl;
    return 0;
}
