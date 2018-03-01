# Design Patterns

- The content here is credited to the Design Pattern course on Udemy.com, I did a lot of writing on my own, but some of ideas are from course material.

- The repo is mainly for self learning and reference purposes

- Every sub repo will also have a more detailed README file

## SOLID Principles

- Single Responsibility Principle

A construct/class should always and only have one single responsibility. A book should be responsible for its content, but not printing the book.

- Open-Closed Principle

A construct is open for extension but closed for modification. We should not touch the existing interface to match new requirement.

- Liskov Substitution Principle

Subclass should be substitable for its supertype. A square is a rectangle, so any method you can call from rectangle should be also have no problem with a square.

- Interface Segregation Principle

One interface for a single functionality, similar to single responsibility. This is to avoid the derived class to have extra unneeded functionality, and use composite inheritance for complex functionalities

- Dependency Inversion Principle

Implementation should depend on abstraction. High-level module should NOT depend on low-level module, but rather abstractions. So if low-level module changes do not alter changes in high-level modules.

Hope everyone can find this helpful in the future development career.