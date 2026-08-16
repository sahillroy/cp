// Problem: Queries Quality and Percentage
// Link: https://leetcode.com/problems/queries-quality-and-percentage/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT q.query_name,ROUND(AVG(q.rating/q.position),2) AS quality, ROUND(
    (SUM(q.rating<3) *100)/COUNT(q.query_name),2) AS poor_query_percentage
FROM Queries q
GROUP BY q.query_name;