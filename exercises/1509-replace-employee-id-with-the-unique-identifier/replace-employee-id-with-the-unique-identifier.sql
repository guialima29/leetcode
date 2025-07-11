# Write your MySQL query statement below
SELECT eu.unique_id, e.name FROM employees e
LEFT JOIN employeeUNI eu ON eu.id = e.id;
