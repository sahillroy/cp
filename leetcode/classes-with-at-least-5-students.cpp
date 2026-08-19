// Problem: Classes With at Least 5 Students
// Link: https://leetcode.com/problems/classes-with-at-least-5-students/submissions/2112504180/?envType=study-plan-v2&envId=top-sql-50

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(*) >= 5;