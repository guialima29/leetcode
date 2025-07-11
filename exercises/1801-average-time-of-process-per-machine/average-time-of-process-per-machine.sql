# Write your MySQL query statement below
SELECT machine_id, round(avg(end_time - start_time), 3) AS processing_time
FROM (
    SELECT
        machine_id,
        process_id,
        MAX(IF(activity_type = 'start', `timestamp`, NULL)) AS start_time,
        MAX(IF(activity_type = 'end', `timestamp`, NULL)) AS end_time
    FROM activity
    GROUP BY machine_id, process_id
) AS process_times
GROUP BY machine_id;