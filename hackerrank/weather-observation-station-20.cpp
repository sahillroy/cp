// Problem: Weather Observation Station 20
// Link: https://www.hackerrank.com/challenges/weather-observation-station-20/problem?isFullScreen=true

/*
Enter your query here.
*/SELECT ROUND(LAT_N, 4)
FROM STATION S
WHERE (
    SELECT COUNT(LAT_N) 
    FROM STATION 
    WHERE LAT_N < S.LAT_N
) = (
    SELECT COUNT(LAT_N) 
    FROM STATION 
    WHERE LAT_N > S.LAT_N
);