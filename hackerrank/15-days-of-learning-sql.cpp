// Problem: 15 Days of Learning SQL
// Link: https://www.hackerrank.com/challenges/15-days-of-learning-sql/problem?isFullScreen=true

SELECT 
    s1.submission_date,
    (
        -- Part 1: Count hackers who made at least 1 submission EVERY day up to s1.submission_date
        SELECT COUNT(DISTINCT s2.hacker_id)
        FROM Submissions s2
        WHERE s2.submission_date = s1.submission_date
          AND (
              SELECT COUNT(DISTINCT s3.submission_date)
              FROM Submissions s3
              WHERE s3.hacker_id = s2.hacker_id
                AND s3.submission_date <= s1.submission_date
          ) = DATEDIFF(s1.submission_date, '2016-03-01') + 1
    ),
    (
        -- Part 2: Find the hacker_id with the max submissions on s1.submission_date
        SELECT s4.hacker_id
        FROM Submissions s4
        WHERE s4.submission_date = s1.submission_date
        GROUP BY s4.hacker_id
        ORDER BY COUNT(s4.submission_id) DESC, s4.hacker_id ASC
        LIMIT 1
    ) AS max_hacker_id,
    (
        -- Get the name of the top hacker
        SELECT h.name
        FROM Hackers h
        WHERE h.hacker_id = max_hacker_id
    )
FROM (
    SELECT DISTINCT submission_date 
    FROM Submissions
) s1
ORDER BY s1.submission_date;