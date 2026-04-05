class Twitter {
public:
unordered_map<int,set<int>> followMap;
unordered_map<int,vector<pair<int,int>>> tweetMap;
int count=0;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweetMap[userId].push_back({count,tweetId});
        count++ ;
    }
    
    vector<int> getNewsFeed(int userId) {
        followMap[userId].insert(userId);
        
         auto cmp = [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0]; // max-heap by "count"
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
        vector<int> res;
        for(int follower:followMap[userId]){
            if(!tweetMap[follower].empty()){
            int index=tweetMap[follower].size()-1;
            int cnt=tweetMap[follower][index].first;
            int tweet=tweetMap[follower][index].second;
            pq.push({cnt,tweet,follower,index-1});
            }
            
        }
        while(!pq.empty() && res.size()<10){
            int cnt=pq.top()[0];
            int tweet=pq.top()[1];
            int follow=pq.top()[2];
            int index=pq.top()[3];
            pq.pop();
            res.push_back(tweet);
            if(index>=0){
                int newcnt=tweetMap[follow][index].first;
                int newtweet=tweetMap[follow][index].second;
                pq.push({newcnt,newtweet,follow,index-1});
            }
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        followMap[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followMap[followerId].count(followeeId)){
            followMap[followerId].erase(followeeId);
        }
    }
};
