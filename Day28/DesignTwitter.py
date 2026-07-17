from collections import defaultdict
import heapq

class Twitter(object):

    def __init__(self):
        self.time = 0
        self.tweets = defaultdict(list)
        self.following = defaultdict(set)

    def postTweet(self, userId, tweetId):
        self.time += 1
        self.tweets[userId].append((self.time, tweetId))

    def getNewsFeed(self, userId):

        heap = []

        self.following[userId].add(userId)

        for user in self.following[userId]:
            for tweet in self.tweets[user][-10:]:
                heapq.heappush(heap, tweet)

                if len(heap) > 10:
                    heapq.heappop(heap)

        return [tweet for _, tweet in sorted(heap, reverse=True)]

    def follow(self, followerId, followeeId):
        self.following[followerId].add(followeeId)

    def unfollow(self, followerId, followeeId):
        if followeeId != followerId:
            self.following[followerId].discard(followeeId)
            