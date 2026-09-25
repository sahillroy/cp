// Problem: Salary of Employees Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP08?tab=statement

--your code goes here
SELECT employee_name, company, salary
FROM Employees
WHERE category = "Full-Time"
ORDER BY salary DESC;