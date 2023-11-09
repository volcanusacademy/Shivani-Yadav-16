
use volcanus;
show databases;
show tables;
select * from customers;
select * from orders;
select * from shippings;


---  insert into Orders(Order_ID,Item,Amount,Customer_ID) values (6,'Charger',850,null);
-- 1.	Retrieve the first names of customers along with the item names they have ordered.
select first_name,item from customers inner join orders;
-- 2.	List all customers and their orders, including those who haven't placed any orders.
select distinct first_name,last_name,stats from customers inner join shippings where stats='pending';
-- 3.	Display all orders and their corresponding customer names, including orders without associated customers.
select item,first_name,last_name from orders left join customers on orders.customerID=customers.customerID;
-- 4.	Retrieve a list of all customers and their orders. Include both customers without orders and orders without customers.
select * from orders left join customers on orders.customerID=customers.customerID;
-- 5.	List customers who haven't placed any orders.
select distinct first_name,last_name,stats from shippings inner join customers where stats="pending";
-- 6.	Display orders without associated customers.
select * from orders left join customers on orders.customerID=customers.customerID where customers.customerID is null;
-- 7.	Find pairs of customers from the same country.
select country,count(*) as Pairs_of_customer from customers group by country;
-- 8.	Generate all possible combinations of products (items) and customers.
select customers.customerID,orders.item from customers cross join orders;
-- 9.	Retrieve the item names and shipping statuses for orders with shipping information.
SELECT item,stats AS shipping_stats FROM orders LEFT JOIN shippings ON orders.orderID = shippings.shippingID;
-- 10.	List all orders and their shipping statuses, including orders without shipping information.
SELECT item,stats AS shipping_stats FROM orders inner join shippings ON orders.orderID = shippings.shippingID;
-- 11.	Display all shipping records and their corresponding order items, including records without associated orders.
select * FROM shippings s LEFT JOIN  orders o ON s.shippingID = o.orderID ORDER BY s.shippingID, o.item;
-- 12.	Retrieve a list of all orders and their shipping statuses.
-- Include both orders without shipping information and shipping records without associated orders.
select * from shippings right join orders on orders.orderID=shippings.shippingID;
-- 13.	List orders without shipping information.
select distinct item from orders inner join shippings;
-- 14.	Display shipping records without associated orders.
select stats,item from shippings left join orders on shippingID=orders.orderID;
-- 15.	Find pairs of orders with the same item and amount.
select o1.item,o1.amount from orders o1
join orders o2
where o1.item = o2.item and o1.amount = o2.amount
and o1.orderID < o2.orderID;
-- 16.	Generate all possible combinations of orders and shipping records.
select * from orders cross join shippings;