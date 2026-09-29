// Problem: Revising Aggregations
// Link: https://www.hackerrank.com/challenges/revising-aggregations-the-count-function/problem?isFullScreen=true

SELECT COUNT(COUNTRYCODE) 
FROM CITY
WHERE POPULATION>100000;