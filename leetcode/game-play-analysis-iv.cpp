// Problem: Game Play Analysis IV
// Link: https://leetcode.com/problems/game-play-analysis-iv/submissions/2110059899/?envType=study-plan-v2&envId=top-sql-50

# Write your MySQL query statement below
SELECT
  ROUND(COUNT(DISTINCT player_id) / (SELECT COUNT(DISTINCT player_id) FROM Activity), 2) AS fraction
FROM
  Activity
WHERE
  (player_id, DATE_SUB(event_date, INTERVAL 1 DAY))
  IN (
    SELECT player_id, MIN(event_date) AS first_login FROM Activity GROUP BY player_id
  );
