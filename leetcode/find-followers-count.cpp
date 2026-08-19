// Problem: Find Followers Count
// Link: https://leetcode.com/problems/find-followers-count/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT user_id,COUNT(follower_id) AS followers_count
FROM Followers
GROUP BY user_id
ORDER BY user_id;