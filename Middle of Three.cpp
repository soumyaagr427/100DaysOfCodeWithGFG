#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
       
       if(B<A)
       {
           if(C<B)
                return B;
           else if(A>C)
                return C;
           else
                return A;
       }
       else{
            if(C<A)
                 return A;
            else if(B<C)
                 return B;
            else 
                 return C;
       }
      
      
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 
