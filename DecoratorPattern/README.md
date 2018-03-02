# Decorator Pattern

## Motivation:

Augment the object or construct with additional features and ability.

## Use Case:

We have a construct `Shape` and want to add color feature on `Shape`.

## Example:

Instead of altering `Shape` class ti have new color feature. We create `ColoredShape` inheriting from `Shape`. 

## Advantage:
We follow the open-closed principle and not altering the existing class at all.