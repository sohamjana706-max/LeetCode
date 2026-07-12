# Write your MySQL query statement below
select
p.firstName,
p.lastName,
a.city,
a.state
from 
Person p
Left JOIN 
Address a ON p.personId = a.personId;
