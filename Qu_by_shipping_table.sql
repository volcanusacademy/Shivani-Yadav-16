 
  USE volcanus;
  select * from shippings;
 -- Queries on the 'Shippings' Table:
-- 41.	Retrieve all shipping information from the 'Shippings' table.
select * from shippings;

-- 42.	Find the number of shipping records in the 'Shippings' table.
select count(*) from shippings;

-- 43.	Retrieve the shipping statuses for orders with customer IDs 3 and 4.
select stats from shippings where customer_id in (3,4);

-- 44.	List the distinct shipping statuses.
select distinct stats from shippings;

-- 45.	Count the number of pending and delivered orders.
select stats,count(*) from shippings group by stats;

-- 46.	Retrieve the shipping statuses for orders with shipping IDs 1 and 3.
select stats from shippings where customer_id in (1,3);

-- 47.	Find the most common shipping status in the 'Shippings' table.
select stats, COUNT(*) AS stats_count from Shippings GROUP BY stats ORDER BY stats_count DESC LIMIT 1;

-- 48.	Retrieve the shipping statuses for orders with customer IDs 1, 2, and 3.
 select stats from shippings where shippingID in (1,2,3);
 
-- 49.	List the shipping records in ascending order of shipping ID.
select shippingID from shippings order by customer_id asc;


-- 50.	Find the shipping status for order with shipping ID 5.
select stats from shippings where shippingID in (5);

-- 51.	Retrieve the shipping statuses for orders with customer IDs 1, 2, and 4.
select statS from shippings where customer_id in (1,2,4);

-- 52.	List the shipping records in descending order of status.
select * from shippings order by status desc;

-- 53.	Find the total number of pending orders.
select count(*) from shippings where stats="Pending";

-- 54.	Retrieve the shipping statuses for orders with customer IDs 2 and 5.
select stats from shippings where customer_id in (2,5);

-- 55.	Count the number of delivered orders.
select count(*) from shippings where stats="delivered";

-- 56.	Retrieve the shipping statuses for orders with shipping IDs 2 and 4.
select stats from shippings where customer_id in (2,4);

-- 57.	List the shipping records in alphabetical order by status.
Select * from shippings order by stats;

-- 58.	Find the total number of records with 'Pending' status.
select * from shippings where stats="Pending";

-- 59.	Retrieve the shipping statuses for orders with customer IDs 3 and 5.
select stats from shippings where customer_id in (3,5);

-- 60.	List the shipping records in reverse alphabetical order by status.
Select * From shippings order by stats DESC;