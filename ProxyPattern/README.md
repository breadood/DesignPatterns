# Proxy Pattern

## Motivation:

To use the same interface but behave differently

## Use Case:

A construct functions as a interface to the particular resource.

## Example:

`unique_ptr` is a proxy for ordinary pointer.

## Advantage:
We use the same interface but with different implemetation details. A property for class property for example. A way to implement Liskov principle and interface segregation principle.