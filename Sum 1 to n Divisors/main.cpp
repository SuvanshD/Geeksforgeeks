//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    int divisor(int n)
    {
        int sum=0;
        
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=i;
                
                if(i!=n/i)
                {
                    sum+=n/i;
                }
            }
        }
        
        return sum;
    }
    
    int sumOfDivisors(int n) {
        
        int sum=0;
        
        for(int i=1;i<=n;i++)
        {
            sum+=divisor(i);
        }
        
        return sum;
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends