#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) 
    {
        
        for(int i=N-1;i>=0;i--)
        {
            if (  ceil(sqrt(i)) == floor(sqrt(i))  )
                  return sqrt(i);
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
    }
