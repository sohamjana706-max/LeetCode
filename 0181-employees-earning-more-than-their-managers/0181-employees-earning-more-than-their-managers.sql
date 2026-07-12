# Write your MySQL query statement below
Select
emp.name as Employee
from
Employee emp
INNER Join 
Employee mangr On emp.managerId = mangr.id
where
emp.salary > mangr.salary;
