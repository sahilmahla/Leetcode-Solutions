// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    int n = Query.size();
	    vector<int> v;
	 //   cout<<n<<" ";
	    vector<int>
	    unordered_set<int> s;
	    for(int i = 0;i<n;i++){
	        int l = Query[i][0];
	        l--;
	        int h = Query[i][1];
	        s.clear();
	        while(l<h){
	            s.insert(str[l]);
	            l++;
	        }
	        v.push_back(s.size());
	    }
	    return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends