//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        
        vector <int> vec;
        
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                vec.push_back(i);
            }
        }
        
        sort(vec.begin(),vec.end());
        
        for(auto it:vec)
        {
            cout<<it<<" ";
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends