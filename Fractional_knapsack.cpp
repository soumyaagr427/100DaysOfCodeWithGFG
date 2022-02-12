#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool compare(Item a,Item b)
   {
    double v1=(double)a.value/(double)a.weight;
    double v2=(double)b.value/(double)b.weight;
    
    return v1>v2;
}

class Solution
{
    public:
    
    // for sorting according to the ratio of values / weight
      

    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        double ans=0;
        // added third parameter for sorting order and conditions
        sort(arr,arr+n,compare);
        
        int curr=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=w)
            {
                ans+=arr[i].value;
                w-=arr[i].weight;
             }
             else
             {
                 ans+=(arr[i].value/(double)arr[i].weight)*w;
                 break;
             }
                
        }
        
        return ans;
        
        
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
