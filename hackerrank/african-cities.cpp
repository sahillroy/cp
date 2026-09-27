// Problem: African Cities
// Link: https://www.hackerrank.com/challenges/african-cities/problem?isFullScreen=true

SELECT (C.NAME) 
FROM CITY C
INNER JOIN COUNTRY CO 
ON CO.CODE = C.COUNTRYCODE
WHERE CO.CONTINENT = 'Africa';