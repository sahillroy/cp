// Problem: Department of Each Employee Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP09?tab=statement

-- your code goes here
SELECT department, COUNT(department) AS total_employees
FROM Employees
GROUP BY department;