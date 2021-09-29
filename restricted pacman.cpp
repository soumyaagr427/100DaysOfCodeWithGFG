#include <bits/stdc++.h> 
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int candies(int m, int n) 
    { 
    	queue<int >q;
    	
        unordered_set<int >s;
        //the num which we cant reach
        
        int x=m*n-m-n;
        //largest num which we cant reach
        
        int ans=1;
        
        q.push(x);
        s.insert(x);
        
        while(q.empty()==false)
        {
            int x=q.front();
            if (x-m>1 && s.find(x-m)==s.end())
            {
                q.push(x-m);
                s.insert(x-m);
            }
            if (x-n>1 && s.find(x-n)==s.end())
            {
                q.push(x-n);
                s.insert(x-n);
            }
            ans++;
            q.pop();
            
        }
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		Solution obj;
		cout << obj.candies(m,n)<<endl; 
	}
	return 0; 
} 
