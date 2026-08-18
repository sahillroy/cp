// Problem: Product Sales Analysis III
// Link: https://leetcode.com/problems/product-sales-analysis-iii/submissions/2111856840/?envType=study-plan-v2&envId=top-sql-50

SELECT s.product_id,
       s.year AS first_year,
       s.quantity,
       s.price
FROM Sales s
JOIN (
    SELECT product_id, MIN(year) AS first_year
    FROM Sales
    GROUP BY product_id
) f
ON s.product_id = f.product_id
AND s.year = f.first_year;