// Problem: Immediate Food Delivery II
// Link: https://leetcode.com/problems/immediate-food-delivery-ii/?envType=study-plan-v2&envId=top-sql-50

SELECT ROUND(AVG(order_date = customer_pref_delivery_date)*100,2) AS immediate_percentage
FROM Delivery
WHERE (customer_id,order_date) IN (
    SELECT customer_id,MIN(order_date)
    FROM Delivery
    GROUP BY customer_id
);