// Problem: Top Earners
// Link: https://www.hackerrank.com/challenges/earnings-of-employees/problem?isFullScreen=true

SELECT (MONTHS * SALARY), COUNT(*)
FROM EMPLOYEE
GROUP BY (MONTHS * SALARY)
ORDER BY (MONTHS * SALARY) DESC
LIMIT 1;