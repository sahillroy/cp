// Problem: Fiction Collection Size Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP02

-- your code goes here
SELECT COUNT(genre) AS fiction_count
FROM Books
WHERE genre = "Fiction";