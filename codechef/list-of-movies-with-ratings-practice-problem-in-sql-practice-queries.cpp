// Problem: List of Movies with Ratings Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP01

-- your code goes here
SELECT movie_name
FROM Cinema
WHERE rating>7 AND rating<9;