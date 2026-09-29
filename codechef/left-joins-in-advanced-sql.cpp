// Problem: Left Joins in Advanced SQL
// Link: https://www.codechef.com/learn/course/sql-intermediate/SQ00BS01/problems/GSQ63

/* Write a query to do the following:
 - JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table.
 - LEFT JOIN the tables 'student' and 'course' using 'Course_id' to match both the tables and output the joined table. */
    SELECT *
     FROM student
     JOIN course
     ON student.course_id = course.course_id;
     
     SELECT *
     FROM student
     LEFT JOIN course
     ON student.course_id = course.course_id;