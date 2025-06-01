
create database college;

use college;

create table student(
rollno int primary key,
name varchar(50),
marks int not null,
grade varchar(1),
city varchar(20));



select * from student;

insert into student
(rollno,name,marks,grade,city)
values
(101,"anil",78,"C","Pune"),
(102,"bhumika",93,"A","Mumbai"),
(103,"chetan",85,"B","Mumbai"),
(104,"dhruv",96,"A","Delhi"),
(106,"farah",82,"B","Delhi");

select name,marks from student;
select * from student;
select city from student;
select distinct city from student;

select * from student where (marks>80);
select * from student where city = ("Mumbai");
select * from student where marks > 80 and city = "Mumbai";
select * from student where marks>90 or city = "Mumbai";
select * from student where marks between 80 and 90;
select * from student where city in ("Delhi","Mumbai");
select * from student where city not in ("Delhi","Mumbai");
select * from student where city in ("Ahmednagar","Nashik");
select * from student  limit 3;
select * from student where marks>80 limit 3;
select * from student order by city asc;
select * from student order by marks asc;
select * from student order by marks desc limit 3;
select max(marks)from student;
select min(marks) from student;
select avg(marks) from student;
select count(rollno) from student;
select city,name, count(rollno) from student group by city,name;
select city, avg(marks) from student group by city;
select marks, avg(marks) from student group by marks;