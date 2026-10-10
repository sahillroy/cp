// Problem: Employees Earning More Than Their Managers
// Link: https://leetcode.com/problems/employees-earning-more-than-their-managers/submissions/2168453099/

# Write your MySQL query statement below
SELECT e2.name AS Employee
FROM Employee e1
INNER JOIN  Employee e2
ON e2.managerId  = e1.id
WHERE e1.salary<e2.salary;