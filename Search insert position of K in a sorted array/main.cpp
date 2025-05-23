//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int low = 0 ;
        int high = N-1;
        int ans = -1;
        
        while(low<=high)
        {
            int mid = (low+high)/2;
            
            if(Arr[mid]>k) high = mid-1;
            else
            {
                ans = mid;
                low=mid+1;
            }
        }
        
        if(Arr[ans]==k) return ans;
        else return ans+1;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends