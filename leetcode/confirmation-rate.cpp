// Problem: Confirmation Rate
// Link: https://leetcode.com/problems/confirmation-rate/submissions/2108752484/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT s.user_id, ROUND(COALESCE(AVG(c.action = 'confirmed'),0),2) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c
ON s.user_id = c.user_id
GROUP BY user_id;
