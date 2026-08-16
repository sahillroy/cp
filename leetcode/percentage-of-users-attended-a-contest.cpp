// Problem: Percentage of Users Attended a Contest
// Link: https://leetcode.com/problems/percentage-of-users-attended-a-contest/submissions/2108857222/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT r.contest_id,ROUND(COUNT(r.user_id)*100/(SELECT COUNT(*) FROM users),2) AS percentage
FROM Register r
GROUP BY r.contest_id
ORDER BY percentage DESC,r.contest_id ASC;