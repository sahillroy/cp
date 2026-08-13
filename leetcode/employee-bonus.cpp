// Problem: Employee Bonus
// Link: https://leetcode.com/problems/employee-bonus/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT e.name AS name,b.bonus AS bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE bonus IS NULL OR bonus<1000;