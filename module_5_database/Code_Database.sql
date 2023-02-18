-- ----------------------------------------------------------------------------------------------------------- 
drop database Student_Exam;
drop table exam;

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
-- ------------------------------------------------------------------------- 
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
-- a) Get First_Name from employee table using Tom name “Employee Name”.


-- b) Get FIRST_NAME, Joining Date, and Salary from employee table.
select First_Name, Joinig_Date ,Salary from Employee;

-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending? 
select * from Employee order by First_Name ,Salary desc;

-- d) Get employee details from employee table whose first name contains ‘J’
select * from Employee where First_Name like 'J%'; 


-- ------------------------------------------------------------------------------------- 
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


-- ----------------------------------------------------------------------------------------------------------------------------
-- Salesperson_and_Customer ---------------------------------------------------------------------------------------------------------
-- ----------------------------------------------------------------------------------------------------------------------------
 
 create table Salesperson(
 SNo int auto_increment,
 SNAME varchar(20),
 CITY varchar(20),
 COMM int,
 
primary Key(SNo)
 );

-- ----------------------------------------------------------------------------
create table Customer (
CNM int ,
CNAME varchar(30),
CITY varchar(30),
RATING int,
SNo int,
 
primary Key(CNM),
foreign key (SNo) references Salesperson (SNo)
 );