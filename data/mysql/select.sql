CREATE DATABASE IF NOT EXISTS student_db;
USE select_db;

CREATE TABLE IF NOT EXISTS stu (
    id INT AUTO_INCREMENT PRIMARY KEY,
    sname VARCHAR(50) NOT NULL,
    age INT NOT NULL,
    math DECIMAL(5,2) DEFAULT NULL, 
    english DECIMAL(5,2) DEFAULT NULL, 
    sex ENUM('M', 'F') DEFAULT 'M',
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

INSERT INTO stu (sname, age, math, english, sex) 
VALUES
('张三', 19, 85.5, 90.0, 'M'),
('李四', 21, 78.0, 88.5, 'F'),
('王五', 22, 92.0, 75.0, 'M'),
('赵六', 20, 67.5, 80.0, 'F'),
('周七', 23, 88.0, 82.5, 'M');


/* #region 0 */
select * from stu;
select sname,age from stu;
select sname,math as 数学成绩,english as 英文成绩 from stu;
/* #endregion 0 */

/* #region 1 */
select * from stu where age > 20;
select * from stu where age >= 20 and  age <= 30;
select * from stu where hire_date BETWEEN '1998-09-01' and '1999-09-01';
select * from stu where age = 18 or age = 20 or age = 22;
select * from stu where age in (18,20 ,22);
select * from stu where english is null;
select * from stu where english is not null;

select * from stu where sname like '马%';
select * from stu where sname like '%德%';
/* #endregion 1 */

/* #region 2 */
select * from stu order by age ;
select * from stu order by math desc ;
select * from stu order by math desc , english asc ;
/* #endregion 2 */

/* #region 3 */
select count(id) from stu;
select max(math) from stu;
select min(math) from stu;
/* #endregion 3 */

/* #region 4 */
select sex, avg(math) from stu group by sex;
select sex, avg(math),count(*) from stu group by sex;
select sex, avg(math),count(*) from stu where math > 70 group by sex having count(*)  > 2;
/* #endregion 4 */

/* #region 5 */
select * from stu limit 0 , 3;
select * from stu limit 1 , 3;
/* #endregion 5 */