# Chain of Responsibility Pattern

## Motivation:

To process some thing is a particular order.

## Use Case:

A `Employee` has a reimbursment request, and his `Manager` is not enough to approve it. So the `VicePresident` will take a look at, and can potentially pass it to `President`.

## Example:

In a game, where each character can have `StatusModifier`, the `Creature` should have a list of `StatusModifier` accessible, and each `StatusModifier` will point to the next if there is another one. Each `StatusModifier` can even terminate the chain if needed.

## Advantage:

It is a interface of chaining similar construct together. This pattern is a good example of single responsibility principle.