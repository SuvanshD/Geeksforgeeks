//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    void f2(int n, int M, vector<int>& result)
    {
        if(n>M) return;
        result.push_back(n);
        n+=5;
        f2(n,M,result);
    }
    
    void f1(int n, int M, vector<int>& result)
    {
        if(n<=0)
        {
            f2(n,M,result);
            return;
        }
        result.push_back(n);
        n-=5;
        f1(n,M,result);
    }
    
    vector<int> pattern(int N){
        // code here
        vector<int> result;
        if(N==0) result.push_back(0);
        else f1(N,N,result);
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends