class Solution {
public:
    unordered_map<string,string> mp;
    int i = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        mp.insert({to_string(i),longUrl});
        return to_string(i++);
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));