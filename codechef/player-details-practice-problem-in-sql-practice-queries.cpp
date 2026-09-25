// Problem: Player Details Practice Problem in SQL Practice Queries
// Link: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP05

-- your code goes here
SELECT m.match_id, m.player_1, m.player_2, m.winner, m.match_date,p.score
FROM Matches m
JOIN Players P
ON p.player_name = m.winner
ORDER BY m.match_date DESC
LIMIT 5;