// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    long long int ans=0;
    
    // first sorting increasing order
    sort(arr,arr+n);
    
    vector<long long int>v;
    
   // for alternates to be max we need high and small numbers alternatively 
   // so we are pushing accordingly into new vector
    for(int i=0,j=n-1;i<=j;i++,j--)
        {
            if(i==j)
           {
            v.push_back(arr[i]);
            break;
           }
            else
                {
                 v.push_back(arr[i]);
                 v.push_back(arr[j]);
                }
                
        
         }
    
    // getting the sum
    for(int i=1;i<n;i++)
    {
        ans+=abs(v[i]-v[i-1]);
    }
    
    // adding for last n-1 - 0th sum
    ans+=abs(v[n-1]-v[0]);
    
    return ans; 
    
}
