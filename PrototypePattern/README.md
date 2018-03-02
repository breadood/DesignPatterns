# Prototype Pattern

## Motivation:

Creating a lot of objects with similar arguments. Instead of having writing same thing multiple times, we will use a prototype.

## Use Case:

We have a employee system which record the employees and employers, the creation of employee should require a employer. One particular employer has over 1000 employee.

## Example:

Instead of calling `Employee(string name, Employer& employer)` 1000 times with different names, we can have a method `MakeEmployeeFromEmployerA(string name)` to create 1000+ different employees.

## Advantage:

We really abstract out the same part from similar creation of objects, and make a prototype to create objects based on the prototype.