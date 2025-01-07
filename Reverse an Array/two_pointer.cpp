//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    //via two pointers 
    void swaps(int l, int r, vector<int> &arr)
    {
        if(l>=r) return;
        swap(arr[l],arr[r]);
        swaps(l+1,r-1, arr);
    }
  
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        swaps(0,n-1,arr);
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