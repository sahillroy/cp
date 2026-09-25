// Problem: Article views Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP06

-- your code goes here
SELECT author_id, author_name, publication_name
FROM Views
WHERE view_count = 0 
ORDER BY author_id;