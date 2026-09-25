// Problem: Locate People Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP15

-- your code goes here
SELECT department_name,location
FROM departments
where location LIKE "S%";