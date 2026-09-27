// Problem: Employee Salaries
// Link: https://www.hackerrank.com/challenges/salary-of-employees/problem?isFullScreen=true

/*
Enter your query here.
*/
SELECT NAME
FROM EMPLOYEE 
WHERE SALARY>2000 AND MONTHS<10
ORDER BY EMPLOYEE_ID;