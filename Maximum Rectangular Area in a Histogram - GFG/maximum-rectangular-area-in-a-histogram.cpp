// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int> S;
        long long area = 0;
        for (int i = 0; i <= n; i++) {
            auto v = i < n ? arr[i] : 0;
            while (S.size() && arr[S.top()] >= v) {
                auto j = S.top(); S.pop();
                auto k = S.size() ? S.top() : -1;
                area = max(area, arr[j] * (i - k - 1));
            }
            S.push(i);
        }
        return area;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends