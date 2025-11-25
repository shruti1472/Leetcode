# Write your MySQL query statement below

select p.product_name,sum(o.unit) as unit from Products p join Orders o on p.product_id=o.product_id  where order_date BETWEEN '2020-02-01' AND '2020-02-29' GROUP BY p.product_id,product_name having sum(o.unit)>=100;