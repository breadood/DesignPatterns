# Adapter Pattern

## Motivation:

Without changing the existing interface to match the required interface

## Use Case:

Given interface X to conform the required interface Y, without changing interface X, we can create a construct/adapter to deal with the situation.

## Example:

We have a square, but we want to have `Square` behave as a `Rectangle`.
As a result, we created an `SquareToRectangleAdapter` which constructs a `Rectangle` from given `Square`

## Advantage:

We followed Open-Closed Principle without changing the existing interface, to match the required interface.

