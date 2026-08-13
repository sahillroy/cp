// Problem: Rising Temperature
// Link: https://leetcode.com/problems/rising-temperature/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT w2.id AS id
FROM weather w1
JOIN weather w2
ON DATEDIFF(w2.recordDate,w1.recordDate) = 1
WHERE w1.temperature<w2.temperature;