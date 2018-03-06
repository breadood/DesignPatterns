# Mediator Pattern

## Motivation:

The interaction and communication between objects can be difficult to manage. This pattern uses a mediator as the central manager for communications between each object.

## Use Case:

When there are a lot of interaction between constructs, and the responsibility of communication is delegated to another construct.

## Example:

`GameRoom` or `ChatRoom` can be the best example. Each `Participant` is a construct in a `ChatRoom`, by taking a reference of it. The broadcasting, private messaging functionalities are all managed by `ChatRoom`, and each `Participant` only simply uses the API `ChatRoom` offers.

## Advantage:

This pattern not only prevent complication of communication between objects, it also delegate the reponsibility to a mediator.