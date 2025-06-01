create database capgemini;
use capgemini;
create table employee(
    id int,
    name varchar(25),
    salary decimal
);

insert into employee
(id,name,salary)
values
(1,"adam",(25000)),
(2,"bob",(3000)),
(3,"casey",(40000));
select * from employee;

create table temp(
  cust_id int,
  salary int default 25000);

insert into temp (cust_id) values (101);


