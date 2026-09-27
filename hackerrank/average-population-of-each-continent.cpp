// Problem: Average Population of Each Continent
// Link: https://www.hackerrank.com/challenges/average-population-of-each-continent/problem?isFullScreen=true

SELECT CO.CONTINENT,FLOOR(AVG(C.POPULATION))
FROM CITY C
INNER JOIN COUNTRY CO
ON CO.CODE = C.COUNTRYCODE
GROUP BY CO.CONTINENT;