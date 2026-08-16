// Problem: Managers with at Least 5 Direct Reports
// Link: https://leetcode.com/problems/managers-with-at-least-5-direct-reports/submissions/2108726873/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT e1.name 
FROM  Employee e1
JOIN Employee e2
ON e1.id = e2.managerId
GROUP BY e1.name,e1.id
HAVING COUNT(e2.id)>=5;