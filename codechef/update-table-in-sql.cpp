// Problem: update table in SQL
// Link: https://www.codechef.com/learn/course/sql/SQ00LS02/problems/GSQ09

/*Write a query to set the Department as 'HR', for the employee with employee_id 2 to the existing table employee. */
UPDATE employee
SET Department = "HR"
WHERE employee_id = 2;
SELECT * FROM employee;