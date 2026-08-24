// Problem: Last Person to Fit in the Bus
// Link: https://leetcode.com/problems/last-person-to-fit-in-the-bus/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
Select person_name
from (
    select person_name,SUM(weight) OVER (order by turn) AS total_weight
    from queue
) q
where total_weight<=1000
order by total_weight desc
limit 1;
