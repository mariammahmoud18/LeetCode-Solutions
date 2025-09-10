# Write your MySQL query statement below
SELECT 
    t.id, 
    CASE 
        WHEN t.p_id IS NULL THEN 'Root'
        WHEN t.p_id IS NOT NULL 
             AND (SELECT COUNT(*) 
                  FROM Tree c 
                  WHERE c.p_id = t.id) > 0 
        THEN 'Inner'
        ELSE 'Leaf'
    END AS type
FROM Tree AS t;
