#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        // vector to store answer
        vector<int>ans;
        
        // prefix array
        int pref[n+2];
        pref[0]=0;
        pref[1]=arr[0];
        
        for(int i=2;i<=n;i++)
             pref[i]=pref[i-1]+arr[i-1];
            
        int sum=0;    
        for(int i=0;i<2*q-1;i+=2)
        {
            sum=pref[queries[i+1]]-pref[queries[i]-1];
            ans.push_back(sum);
        }
        
        
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cin>>q;
        int queries[2*q];
        for(int i = 0;i < 2*q;i += 2)
            cin>>queries[i]>>queries[i+1];
        
        Solution ob;
        vector<int> ans = ob.querySum(n, arr, q, queries);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code En
