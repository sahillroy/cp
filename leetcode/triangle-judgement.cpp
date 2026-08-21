// Problem: Triangle Judgement
// Link: https://leetcode.com/problems/triangle-judgement/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT x,y,z,
CASE 
   WHEN (x+y>z) AND (x+z>y) AND (z+y>x) THEN 'Yes'
   ELSE 'No' 
   END AS triangle
FROM triangle;
