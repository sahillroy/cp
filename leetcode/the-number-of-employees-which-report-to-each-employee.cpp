// Problem: The Number of Employees Which Report to Each Employee
// Link: https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/submissions/2114295799/?envType=study-plan-v2&envId=top-sql-50

select mgr.employee_id, mgr.name, COUNT(emp.employee_id) as reports_count, ROUND(AVG(emp.age)) as average_age
from employees emp join employees mgr
on emp.reports_to = mgr.employee_id
group by employee_id
order by employee_id