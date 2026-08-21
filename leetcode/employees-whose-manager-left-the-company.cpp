// Problem: Employees Whose Manager Left the Company
// Link: https://leetcode.com/problems/employees-whose-manager-left-the-company/submissions/2115481743/?envType=study-plan-v2&envId=top-sql-50

select e1.employee_id
from employees e1
left join employees e2
on e1.manager_id = e2.employee_id
where e1.salary < 30000 and e1.manager_id is not null and e2.employee_id is null
order by e1.employee_id;
