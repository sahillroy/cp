// Problem: Primary Department for Each Employee
// Link: https://leetcode.com/problems/primary-department-for-each-employee/submissions/2114830067/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT employee_id, department_id
FROM Employee
WHERE primary_flag ='Y'
UNION
SELECT employee_id, department_id
FROM Employee
GROUP BY employee_id
HAVING COUNT(*) =1;
