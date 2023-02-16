
drop database Student_Exam;
drop table exam;

-- DataBase Name ---------------------------------------------------------------------------------------
create database Student_Exam;
create database Employee_Incentive;

-- USE DataBase ----------------------------------------------------------------------------------------
use Student_Exam;
use Employee_Incentive;
-- -----------------------------------------------------------------------------------------------------
--  Student_Exam DataBase ------------------------------------------------------------------------------
-- -----------------------------------------------------------------------------------------------------
create table student (
Roll_No int ,
Student_Name varchar(30),
Branch varchar(30),
primary key (Roll_No),
foreign key (Roll_No) references exam(Roll_No)
);
insert into student(Roll_No, student_Name , Branch) values(1, "Jay", "BCA");
insert into student(Roll_No, student_Name , Branch) values(2, "Chirag", "B.Com");
insert into student(Roll_No, student_Name , Branch) values(3, "Jignesh", "B.Com");
insert into student(Roll_No, student_Name , Branch) values(4, "Milan", "BBA");

create table exam ( 
Roll_No int auto_increment, 
S_Code varchar(10),
Marks int,
P_Code varchar(10),

primary key (Roll_No)
);

insert into exam(S_Code , Marks , P_Code) values( "CS11",50,"CS");
insert into exam(S_Code , Marks , P_Code) values( "CS12",60,"CS");
insert into exam(S_Code , Marks , P_Code) values( "EC101",66,"EC");
insert into exam(S_Code , Marks , P_Code) values( "EC102",70,"EC");
insert into exam(S_Code , Marks , P_Code) values( "EC103",45,"EC");
insert into exam(S_Code , Marks , P_Code) values( "EC104",50,"EC");
insert into exam(S_Code , Marks , P_Code) values( "CS11",70,"CS");
insert into exam(S_Code , Marks , P_Code) values( "CS12",45,"CS");

-- ----------------------------------------------------------------------------------------------------- 
-- Employee_Incentive ----------------------------------------------------------------------------------
-- -----------------------------------------------------------------------------------------------------

create table Employee (
Employee_Id int auto_increment,
First_Name varchar(30),
Last_Name varchar(30),
Salary int,
Joinig_Date varchar(30),
Department varchar(30),

primary Key (Employee_Id),
foreign key (Employee_Id) references Incentive (Employee_ref_Id)
);

create table Incentive (
Employee_ref_Id int,
Incentive_date varchar(20),
Incentuve_Amount int,

primary Key (Employee_ref_Id)
);
