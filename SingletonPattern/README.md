# Singleton Pattern

## Motivation:

To create a single instance throughout the program execution, to make sure only one instance exists.

## Use Case:

For complicated constructs, sometimes only one instances is enough and is needed. For example database connection, logger, some record, etc. 

## Example:

Instead of having many database connection, we make a `SingletonDatabase` object, and delete its copy functionality, and make construction non public. Use static method as the only we to get the instance. Make sure to check the existence of the instance in the get method and initilize it if not existing.

The simplest example of singleton is a static object.

## Advantage:

We can make sure only one instance exists.