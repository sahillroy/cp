// Problem: Ollivander's Inventory
// Link: https://www.hackerrank.com/challenges/harry-potter-and-wands/problem?isFullScreen=true

SELECT 
    W.ID, 
    WP.AGE, 
    W.COINS_NEEDED, 
    W.POWER
FROM WANDS W
JOIN WANDS_PROPERTY WP 
    ON W.CODE = WP.CODE
WHERE WP.IS_EVIL = 0
  AND W.COINS_NEEDED = (
      SELECT MIN(W1.COINS_NEEDED)
      FROM WANDS W1
      JOIN WANDS_PROPERTY WP1 
          ON W1.CODE = WP1.CODE
      WHERE WP1.IS_EVIL = 0
        AND W1.POWER = W.POWER
        AND WP1.AGE = WP.AGE
  )
ORDER BY 
    W.POWER DESC, 
    WP.AGE DESC;