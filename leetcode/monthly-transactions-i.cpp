// Problem: Monthly Transactions I
// Link: https://leetcode.com/problems/monthly-transactions-i/submissions/2108896572/?envType=study-plan-v2&envId=top-sql-50

SELECT
    DATE_FORMAT(t.trans_date, '%Y-%m') AS month,
    t.country,
    COUNT(t.id) AS trans_count,
    SUM(t.state = 'approved') AS approved_count,
    SUM(t.amount) AS trans_total_amount,
    SUM(CASE
        WHEN t.state = 'approved' THEN t.amount
        ELSE 0
    END) AS approved_total_amount
FROM Transactions t
GROUP BY
    DATE_FORMAT(t.trans_date, '%Y-%m'),
    t.country;