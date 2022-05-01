### Table of Contents

| No. | Questions |
|---- | ---------
|1  | [DATA](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|2  | [Database](#what-is-a-prototype-chain)|
|3  | [DBMS](#what-is-a-prototype-chain)|
|4  | [RDBMS](#what-is-the-difference-between-call-apply-and-bind)|
|5  | [SQL](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|6  | [difference between SQL and MySQL](#what-is-a-prototype-chain)|
|7  | [Tables and Fields](#what-is-the-difference-between-call-apply-and-bind)|
|8  | [Constraints in SQL](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|9  | [Primary Key](#what-is-a-prototype-chain)|
|10 | [UNIQUE constraint](#what-is-the-difference-between-call-apply-and-bind)|
|11 | [Foreign Key](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|12 | [Join and its different types](#what-is-a-prototype-chain)|
|13 | [Self-Join](#what-is-a-prototype-chain)|
|14 | [Cross-Join](#what-is-the-difference-between-call-apply-and-bind)|
|15 | [](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|16 | [](#what-is-a-prototype-chain)|
|17 | [](#what-is-the-difference-between-call-apply-and-bind)|
|18 | [](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|19 | [Database](#what-is-a-prototype-chain)|
|20 | [RDBMS](#what-is-the-difference-between-call-apply-and-bind)|


### DATA
it is the raw data/information available

### Database
A database is an organized collection of data, stored and retrieved digitally from a remote or local computer system. Databases can be vast and complex, and such databases are developed using fixed design and modeling approaches.

### DBMS
DBMS stands for Database Management System. DBMS is a system software responsible for the creation, retrieval, updation, and management of the database. It ensures that our data is consistent, organized, and is easily accessible by serving as an interface between the database and its end-users or application software.

### RDBMS
RDBMS stands for Relational Database Management System. The key difference here, compared to DBMS, is that RDBMS stores data in the form of a collection of tables, and relations can be defined between the common fields of these tables. Most modern database management systems like MySQL, Microsoft SQL Server, Oracle, IBM DB2, and Amazon Redshift are based on RDBMS.

### SQL
SQL stands for Structured Query Language. It is the standard language for relational database management systems. It is especially useful in handling organized data comprised of entities (variables) and relations between different entities of the data

### difference between SQL and MySQL
SQL is a standard language for retrieving and manipulating structured databases. On the contrary, MySQL is a relational database management system, like SQL Server, Oracle or IBM DB2, that is used to manage SQL databases.

### Tables and Fields
A table is an organized collection of data stored in the form of rows and columns. Columns can be categorized as vertical and rows as horizontal. The columns in a table are called fields while the rows can be referred to as records

### Constraints in SQL
Constraints are used to specify the rules concerning data in the table. It can be applied for single or multiple fields in an SQL table during the creation of the table or after creating using the ALTER TABLE command. The constraints are:
->NOT NULL - Restricts NULL value from being inserted into a column.
->CHECK - Verifies that all values in a field satisfy a condition.
->DEFAULT - Automatically assigns a default value if no value has been specified for the field.
->UNIQUE - Ensures unique values to be inserted into the field.
->INDEX - Indexes a field providing faster retrieval of records.
->PRIMARY KEY - Uniquely identifies each record in a table.
->FOREIGN KEY - Ensures referential integrity for a record in another table.

### Primary Key
The PRIMARY KEY constraint uniquely identifies each row in a table. It must contain UNIQUE values and has an implicit NOT NULL constraint.
A table in SQL is strictly restricted to have one and only one primary key, which is comprised of single or multiple fields (columns).

### UNIQUE constraint
A UNIQUE constraint ensures that all values in a column are different. This provides uniqueness for the column(s) and helps identify each row uniquely. Unlike primary key, there can be multiple unique constraints defined per table.

### Foreign Key
A FOREIGN KEY comprises of single or collection of fields in a table that essentially refers to the PRIMARY KEY in another table. Foreign key constraint ensures referential integrity in the relation between two tables.
The table with the foreign key constraint is labeled as the child table, and the table containing the candidate key is labeled as the referenced or parent table.

### Join and its different types
The SQL Join clause is used to combine records (rows) from two or more tables in a SQL database based on a related column between the two.

![image](https://user-images.githubusercontent.com/92531202/166161195-2c181897-20ec-440b-b2d2-d81d72d73a3a.png)

There are four different types of JOINs in SQL:
1) (INNER) JOIN: Retrieves records that have matching values in both tables involved in the join.
2) LEFT (OUTER) JOIN: Retrieves all the records/rows from the left and the matched records/rows from the right table.
3) RIGHT (OUTER) JOIN: Retrieves all the records/rows from the right and the matched records/rows from the left table.
4) FULL (OUTER) JOIN: Retrieves all the records where there is a match in either the left or right table.

### Self-Join
where a table is joined to itself based on some relation between its own column(s). Self-join uses the INNER JOIN or LEFT JOIN clause and a table alias is used to assign different names to the table within the query.

![image](https://user-images.githubusercontent.com/92531202/166161349-bbcc5b86-b018-47ab-ab0a-0c29d072fd35.png)

### Cross-Join
Cross join can be defined as a cartesian product of the two tables included in the join. The table after join contains the same number of rows as in the cross-product of the number of rows in the two tables. If a WHERE clause is used in cross join then the query will work like an INNER JOIN.

### Index its different types
A database index is a data structure that provides a quick lookup of data in a column or columns of a table. It enhances the speed of operations accessing data from a database table at the cost of additional writes and memory to maintain the index data structure.
There are different types of indexes that can be created for different purposes:
 1.Unique and Non-Unique Index:
 Unique indexes are indexes that help maintain data integrity by ensuring that no two rows of data in a table have identical key values.Once a unique index has been     defined for a table, uniqueness is enforced whenever keys are added or changed within the index.
 Non-unique indexes, on the other hand, are not used to enforce constraints on the tables with which they are associated. Instead, non-unique indexes are used solely     to improve query performance by maintaining a sorted order of data values that are used frequently.
 
 2.Clustered and Non-Clustered Index: 
Clustered indexes are indexes whose order of the rows in the database corresponds to the order of the rows in the index. This is why only one clustered index can       exist in a given table, whereas, multiple non-clustered indexes can exist in the table.
The only difference between clustered and non-clustered indexes is that the database manager attempts to keep the data in the database in the same order as the         corresponding keys appear in the clustered index.
Clustering indexes can improve the performance of most query operations because they provide a linear-access path to data stored in the database.


### difference between Clustered and Non-clustered index
-Clustered index modifies the way records are stored in a database based on the indexed column. A non-clustered index creates a separate entity within the table which references the original table.
-Clustered index is used for easy and speedy retrieval of data from the database, whereas, fetching records from the non-clustered index is relatively slower.
-In SQL, a table can have a single clustered index whereas it can have multiple non-clustered indexes


### Data Integrity
Data Integrity is the assurance of accuracy and consistency of data over its entire life-cycle and is a critical aspect of the design, implementation, and usage of any system which stores, processes, or retrieves data. It also defines integrity constraints to enforce business rules on the data when it is entered into an application or a database

### Query
A query is a request for data or information from a database table or combination of tables. A database query can be either a select query or an action query.

### Subquery and its types
A subquery is a query within another query, also known as a nested query or inner query. It is used to restrict or enhance the data to be queried by the main query, thus restricting or enhancing the output of the main query respectively.
There are two types of subquery - Correlated and Non-Correlated.
-A correlated subquery cannot be considered as an independent query, but it can refer to the column in a table listed in the FROM of the main query.
-A non-correlated subquery can be considered as an independent query and the output of the subquery is substituted in the main query.

### SELECT statement
SELECT operator in SQL is used to select data from a database. The data returned is stored in a result table, called the result-set.

### some common clauses used with SELECT query in SQL
-WHERE clause in SQL is used to filter records that are necessary, based on specific conditions.
-ORDER BY clause in SQL is used to sort the records based on some field(s) in ascending (ASC) or descending order (DESC).
-GROUP BY clause in SQL is used to group records with identical data and can be used in conjunction with some aggregation functions to produce summarized results from the database.
-HAVING clause in SQL is used to filter records in combination with the GROUP BY clause. It is different from WHERE, since the WHERE clause cannot filter aggregated records.

### UNION, MINUS and INTERSECT commands
UNION operator combines and returns the result-set retrieved by two or more SELECT statements.
MINUS operator in SQL is used to remove duplicates from the result-set obtained by the second SELECT query from the result-set obtained by the first SELECT query and then return the filtered results from the first.
INTERSECT clause in SQL combines the result-set fetched by the two SELECT statements where records from one match the other and then returns this intersection of result-sets.

### Cursor & How to use a Cursor
A database cursor is a control structure that allows for the traversal of records in a database. Cursors, in addition, facilitates processing after traversal, such as retrieval, addition, and deletion of database records. They can be viewed as a pointer to one row in a set of rows.

Working with SQL Cursor:
1) DECLARE a cursor after any variable declaration. The cursor declaration must always be associated with a SELECT Statement.
2) Open cursor to initialize the result set. The OPEN statement must be called before fetching rows from the result set.
3) FETCH statement to retrieve and move to the next row in the result set.
4) Call the CLOSE statement to deactivate the cursor.
5) Finally use the DEALLOCATE statement to delete the cursor definition and release the associated resources.

### Entities and Relationships
Entity: An entity can be a real-world object, either tangible or intangible, that can be easily identifiable. For example, in a college database, students, professors, workers, departments, and projects can be referred to as entities. Each entity has some associated properties that provide it an identity.

Relationships: Relations or links between entities that have something to do with each other. For example - The employee's table in a company's database can be associated with the salary table in the same database.

![image](https://user-images.githubusercontent.com/92531202/166163275-e87ff975-0a07-4e80-baa9-e64a4316f3ce.png)

### different types of relationships in SQL
One-to-One - This can be defined as the relationship between two tables where each record in one table is associated with the maximum of one record in the other table.
One-to-Many & Many-to-One - This is the most commonly used relationship where a record in a table is associated with multiple records in the other table.
Many-to-Many - This is used in cases when multiple instances on both sides are needed for defining a relationship.
Self-Referencing Relationships - This is used when a table needs to define a relationship with itself.

### Alias in SQL
An alias is a feature of SQL that is supported by most, if not all, RDBMSs. It is a temporary name assigned to the table or table column for the purpose of a particular SQL query. In addition, aliasing can be employed as an obfuscation technique to secure the real names of database fields. A table alias is also called a correlation name.
An alias is represented explicitly by the AS keyword but in some cases, the same can be performed without it as well. Nevertheless, using the AS keyword is always a good practice.

### view in SQL
A view in SQL is a virtual table based on the result-set of an SQL statement. A view contains rows and columns, just like a real table. The fields in a view are fields from one or more real tables in the database.

![image](https://user-images.githubusercontent.com/92531202/166163576-eb878383-8195-48ae-aa12-ba450acdd54c.png)


### Normalization
Normalization represents the way of organizing structured data in the database efficiently. It includes the creation of tables, establishing relationships between them, and defining rules for those relationships. Inconsistency and redundancy can be kept in check based on these rules, hence, adding flexibility to the database.

### Denormalization
Denormalization is the inverse process of normalization, where the normalized schema is converted into a schema that has redundant information. The performance is improved by using redundancy and keeping the redundant data consistent. The reason for performing denormalization is the overheads produced in the query processor by an over-normalized structure.

### various forms of Normalization
Normal Forms are used to eliminate or reduce redundancy in database tables. The different forms are
->First Normal Form
A relation is in first normal form if every attribute in that relation is a single-valued attribute. If a relation contains a composite or multi-valued attribute, it violates the first normal form. 



### TRUNCATE, DELETE and DROP statements
DELETE statement is used to delete rows from a table.
TRUNCATE command is used to delete all the rows from the table and free the space containing the table.
DROP command is used to remove an object from the database. If you drop a table, all the rows in the table are deleted and the table structure is removed from the database.

### difference between DROP and TRUNCATE statements
If a table is dropped, all things associated with the tables are dropped as well. This includes - the relationships defined on the table with other tables, the integrity checks and constraints, access privileges and other grants that the table has. To create and use the table again in its original form, all these relations, checks, constraints, privileges and relationships need to be redefined. However, if a table is truncated, none of the above problems exist and the table retains its original structure.

### difference between DELETE and TRUNCATE statements
The TRUNCATE command is used to delete all the rows from the table and free the space containing the table.
The DELETE command deletes only the rows from the table based on the condition given in the where clause or deletes all the rows from the table if no condition is specified. But it does not free the space containing the table.


### Aggregate and Scalar functions
An aggregate function performs operations on a collection of values to return a single scalar value. Aggregate functions are often used with the GROUP BY and HAVING clauses of the SELECT statement.
widely used SQL aggregate functions:
AVG() - Calculates the mean of a collection of values.
COUNT() - Counts the total number of records in a specific table or view.
MIN() - Calculates the minimum of a collection of values.
MAX() - Calculates the maximum of a collection of values.
SUM() - Calculates the sum of a collection of values.
FIRST() - Fetches the first element in a collection of values.
LAST() - Fetches the last element in a collection of values.
All aggregate functions described above ignore NULL values except for the COUNT function.

A scalar function returns a single value based on the input value.
widely used SQL scalar functions:
LEN() - Calculates the total length of the given field (column).
UCASE() - Converts a collection of string values to uppercase characters.
LCASE() - Converts a collection of string values to lowercase characters.
MID() - Extracts substrings from a collection of string values in a table.
CONCAT() - Concatenates two or more strings.
RAND() - Generates a random collection of numbers of a given length.
ROUND() - Calculates the round-off integer value for a numeric field (or decimal point values).
NOW() - Returns the current date & time.
FORMAT() - Sets the format to display a collection of values.


### User-defined function and its various types
The user-defined functions in SQL are like functions in any other programming language that accept parameters, perform complex calculations, and return a value. They are written to use the logic repetitively whenever required. There are two types of SQL user-defined functions:

Scalar Function: user-defined scalar functions return a single scalar value.
Table-Valued Functions: User-defined table-valued functions return a table as output.
Inline: returns a table data type based on a single SELECT statement.
Multi-statement: returns a tabular result-set but, unlike inline, multiple SELECT statements can be used inside the function body.




