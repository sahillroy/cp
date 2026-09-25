// Problem: Handling NULL Values Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP07

-- your code goes here
SELECT book_id,title,author,published_year
FROM Library
WHERE rating is NULL;