//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        int n = arr.size();
        
        int largest = arr[0];
        int second = -1;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>largest)
            {
                largest = arr[i];
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>second && arr[i]<largest)
            {
                second = arr[i];
            }
        }
        
        vector <int> final;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=largest && arr[i]!=second)
            {
                final.push_back(arr[i]);
            }
        }
        
        sort(final.begin(),final.end());
        
        return final;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        vector<int> res = ob.findElements(arr);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends