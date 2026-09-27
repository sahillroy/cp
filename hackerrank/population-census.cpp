// Problem: Population Census
// Link: https://www.hackerrank.com/challenges/asian-population/problem?isFullScreen=true

SELECT SUM(C.POPULATION) 
FROM CITY C
INNER JOIN COUNTRY CO 
ON CO.CODE = C.COUNTRYCODE
WHERE CO.CONTINENT = 'Asia';