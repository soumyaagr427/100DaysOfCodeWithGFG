// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans;
    int c=0;
 
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            c++;
    }
    
    if(c==0) 
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }   
    else
        {
            for(int i=0;i<n;i++)
                {
                    if(arr[i]==x)
                    {
                        ans.push_back(i);
                        ans.push_back(i+c-1);
                        break;
                    }
                }
        }
        
        return ans;
}
