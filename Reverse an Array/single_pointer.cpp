//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    //Via single pointer 
    void swaps(int i, int n, vector<int> &arr)
    {
        if(i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        swaps(i+1,n, arr);
    }
  
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        swaps(0,n,arr);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends