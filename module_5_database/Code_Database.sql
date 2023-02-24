-- ----------------------------------------------------------------------------------------------------------- 
drop database Student_Exam;
drop table Salesperson;

-- DataBase Name ------------------------------------------------------------------------------------------------------------
create database Student_Exam;
create database Employee_Incentive;
create database Salesperson_and_Customer;

-- USE DataBase --------------------------------------------------------------------------------------------------------------
use Student_Exam;
use Employee_Incentive;
use Salesperson_and_Customer;

-- ----------------------------------------------------------------------------------------------------------------------------
--  Student_Exam DataBase ------------------------------------------------------------------------------------------------------
-- -----------------------------------------------------------------------------------------------------------------------------

create table student (
Roll_No int auto_increment,
Student_Name varchar(30),
Branch varchar(30),
primary key (Roll_No)
);
insert into student(Roll_No, student_Name , Branch) values(1, "Jay", "BCA");
insert into student(Roll_No, student_Name , Branch) values(2, "Chirag", "B.Com");
insert into student(Roll_No, student_Name , Branch) values(3, "Jignesh", "B.Com");
insert into student(Roll_No, student_Name , Branch) values(4, "Milan", "BBA");
-- ------------------------------------------------------------------------------------------------------------------------- 
create table exam ( 
Roll_No int , 
S_Code varchar(10) ,
Marks int,
P_Code varchar(10),

primary key (S_Code),
foreign key (Roll_No) references student (Roll_No)

);

insert into exam( Roll_No, S_Code , Marks , P_Code) values(1, "CS11",50,"CS");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(1, "CS12",60,"CS");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(2, "CS13",70,"CS");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(2, "CS14",45,"CS");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(3, "EC101",66,"EC");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(3, "EC102",70,"EC");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(4, "EC103",45,"EC");
insert into exam(Roll_No, S_Code , Marks , P_Code) values(4, "EC104",50,"EC");


-- ----------------------------------------------------------------------------------------------------------------------------
-- Employee_Incentive ---------------------------------------------------------------------------------------------------------
-- ----------------------------------------------------------------------------------------------------------------------------

create table Employee (
Employee_Id int ,
First_Name varchar(30),
Last_Name varchar(30),
Salary int,
Joinig_Date varchar(30),
Department varchar(30),

primary Key (Employee_Id)
);
insert into Employee(Employee_Id , First_Name , Last_Name , Salary , Joinig_Date , Department) 
values
(1,"John","Abraham",1000000,"2013-01-01 12:00:00","Banking"),
(2,"Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
(4,"Torn","Jose",600000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"TestName1","123",650000,"2013-01-01 12:00:00","Services"),
(8,"TestNmae2","Lname%",600000,"2013-02-01 12:00:00","Insurance");
-- ********************************************************************************************************************
--  Date And Time Format (fsp)
/* */
/*
  %Y = Year for 4 digit  ex: 2023
  %y = Year for 2 digit  ex: 23
  %M = Month name in full (January to December)
  %m = Month name as a numeric value (00 to 12)
  %d = Day of the month as a numeric value (01 to 31)
  %W = Weekday name in full (Sunday to Saturday)
  %a = Abbreviated weekday name (Sun to Sat)
  %b = Abbreviated month name (Jan to Dec)
  %H = Hour (00 to 23)
  %h = Hour (00 to 12)
  %i = Minutes (00 to 59)
  %S = Seconds (00 to 59)
  %s = Seconds (00 to 59)
  %T = Time in 24 hour format (hh:mm:ss)
  %p = AM or PM
  %r = Time in 12 hour AM or PM format (hh:mm:ss AM/PM)
*/
SELECT DATE_FORMAT(Joinig_Date,"%d-%b-%y %H.%i.%S %p ") FROM employee; 



-- ********************************************************************************************************************

-- a) Get First_Name from employee table using Tom name “Employee Name”.
SELECT  First_Name FROM Employee WHERE First_Name ="Tom";

UPDATE Employee SET First_Name = "Tom" WHERE Employee_Id = 2;

SELECT  *FROM Employee WHERE First_Name ="Jerry";

-- ********************************************************************************************************************

-- b) Get FIRST_NAME, Joining Date, and Salary from employee table.
select First_Name, Joinig_Date ,Salary from Employee;

-- ********************************************************************************************************************

-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending? 
select * from Employee order by First_Name ,Salary desc;
select First_Name,Salary from Employee order by First_name, Salary desc;

-- ********************************************************************************************************************

-- d) Get employee details from employee table whose first name contains ‘J’
select * from Employee where First_Name like 'J%'; 
select * from Employee where First_name  between  "j" and "l";
select * from Employee where First_name like "Ro%";
select * from Employee where First_name like "tom%";
select * from Employee where First_name like "%oh%";
select * from Employee where First_name like "r%" or First_name like "t%";
select * from Employee where First_name not like "r%";
select * from Employee where binary First_name like "t%";
select * from Employee where First_name like "m%l";
select * from Employee where First_name like "__rr%";
select * from Employee where First_name like "_h%";
select * from Employee where First_name like "t_s%";
select * from Employee where binary First_name like "p_i%";
select * from Employee where binary First_name like "P_i%";

-- ********************************************************************************************************************

-- e) Get department wise maximum salary from employee table order by salaryascending?
select max(Salary) from Employee;

select Department,max(Salary) from Employee group by Department order by Salary asc ;

-- select Department,max(Salary) from Employee group by Department order by Salary ;
		
-- select Department,Salary from Employee group by Department order by Salary;
select Department,max(Salary) from Employee group by Department order by Salary;

-- ********************************************************************************************************************

-- f) Select first_name, incentive amount from employee and incentives table forthose employees who have incentives and incentive amount greater than 3000
     select Employee.first_name,sum(Incentive.Incentuve_Amount) as Incentive from Employee inner
     join Incentive on Employee.Employee_id = Incentive.Employee_ref_Id
		 where incentive.Incentuve_Amount or Incentive.Incentuve_Amount > 3000 group by Employee.First_name;


-- ********************************************************************************************************************

-- g) Create After Insert trigger on Employee table which insert records in viewtable


-- ------------------------------------------------------------------------------------------------------------------- 
create table Incentive (
Employee_ref_Id int,
Incentive_date varchar(20),
Incentuve_Amount int,

primary Key (Incentuve_Amount),
foreign key (Employee_ref_Id) references Employee (Employee_Id)

);

insert into Incentive(Employee_ref_Id , Incentive_date , Incentuve_Amount)
values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);


-- ---------------------------------------------------------------------------------------------------------------------------------
-- Salesperson_and_Customer ---------------------------------------------------------------------------------------------------------
-- ----------------------------------------------------------------------------------------------------------------------------------

 create table Salesperson(
 SNo int auto_increment,
 SNAME varchar(20),
 CITY varchar(20),
 COMM FLOAT,
 
primary Key(SNo)
 );

insert into Salesperson (SNo , SNAME , CITY , COMM )
values
(1001 , 'Peel' , 'London' , .12),
(1002 , 'Serres' , 'San Jose' , .13),
(1003 ,' Motika', 'London' , .11),
(1004 , 'Rafkin' , 'Barcelona' , .15),
(1007, 'Axelro' , 'New York' , .1);

-- --------------------------------------------------------------------------------------------------------------------

create table Customer (
CNM int ,
CNAME varchar(30),
CITY varchar(30),
RATING int,
SNo int,
 
primary Key(CNM),
foreign key (SNo) references Salesperson (SNo)
 );
 
insert into Customer (CNM , CNAME , CITY , RATING , SNo)
values
(201 , 'Hoffman' , 'London' , 100 , 1001),
(202 , 'Giovanne' , 'Roe' , 200 , 1003),
(203 ,'Liu', 'San Jose' , 300 , 1002),
(204 , 'Grass' , 'Barcelona' , 100 , 1002),
(205 , 'Clemens' , 'London' , 300 , 1007),
(206 , 'Pereira' , 'Roe' , 100 , 1004);

-- ********************************************************************************************************************

-- b)	Names and cities of all salespeople in London with commission above 0.12
		select * from Salesperson where CITY = "London" and  COMM > 0.12 ;

-- ********************************************************************************************************************

-- c)	All salespeople either in Barcelona or in London
	    select * from Salesperson where CITY = "London" or CITY = "Barcelona" ;

-- ********************************************************************************************************************

-- a)	All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).
		select * from Salesperson where COMM > 0.10 and COMM < 0.12;

	-- ********************************************************************************************************************

      
-- b)	All customers excluding those with rating <= 100 unless they are located in Rome  
		
		select CNAME as "Customer Name" ,CITY, RATING from Customer WHERE (RATING > 100) OR (RATING <= 100 AND CITY = 'Rome');
		select CNAME as "Customer Name" ,CITY, RATING from Customer where RATING >100 or CITY = "rome";

	-- ********************************************************************************************************************
