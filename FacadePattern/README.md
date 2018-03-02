# Facade Pattern

## Motivation:

It is sometimes very complicated to work with an existing API, with some parts unnecessary. 

## Use Case:

Make an easy interface to interact with some complicated API. 

## Example:

`std::cout` is a facade for interacting with console output. Like decorator pattern, we can use both inheritance or aggregation. However, facade is different as decorator is to add functionality, and facade is to interact with a complicated construct or process.

## Advantage:
We follow the open-closed principle and not altering the existing class at all.