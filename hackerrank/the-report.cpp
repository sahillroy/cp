// Problem: The Report
// Link: https://www.hackerrank.com/challenges/the-report/problem?isFullScreen=true

SELECT 
    IF(G.GRADE >= 8, S.NAME, 'NULL'), 
    G.GRADE, 
    S.MARKS
FROM STUDENTS S
JOIN GRADES G 
    ON S.MARKS BETWEEN G.MIN_MARK AND G.MAX_MARK
ORDER BY 
    G.GRADE DESC, 
    CASE 
        WHEN G.GRADE >= 8 THEN S.NAME 
        ELSE S.MARKS 
    END ASC;