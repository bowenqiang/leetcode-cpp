class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        pair<int,int> msg(userId,tweetId);
        messages.push_back(msg);
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> news;
        vector<pair<int,int>>::reverse_iterator rit=messages.rbegin();
        while(rit!=messages.rend() && news.size()<10)
        {
            if(userId==rit->first || relations[userId].find(rit->first)!=relations[userId].end())
            {
                cout<<rit->second<<endl;
                news.push_back(rit->second);
            }
            rit++;
        }
        return news;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        if(followerId==followeeId)
            return;
        relations[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        if(followerId==followeeId)
            return;
        relations[followerId].erase(followeeId);
    }
private:
    vector<pair<int,int>>messages;
    unordered_map<int,set<int>> relations;

};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * vector<int> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */
