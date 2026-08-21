// Problem: Consecutive Numbers
// Link: https://leetcode.com/problems/consecutive-numbers/submissions/2114870080/?envType=study-plan-v2&envId=top-sql-50

SELECT DISTINCT l1.num AS ConsecutiveNums
FROM Logs l1
JOIN Logs l2
    ON l2.id = l1.id + 1
JOIN Logs l3
    ON l3.id = l1.id + 2
WHERE l1.num = l2.num
  AND l2.num = l3.num;