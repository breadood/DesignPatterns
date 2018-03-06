# Command Pattern

## Motivation:

To perform operation with object. So each operation can execute, recall, etc.

## Use Case:

A bank can use deposit, withdraw all these actions as construct and execute them with the correct initialization of them,

## Example:

A `Command` interface should have `call()` and `recall()` methods implemented, and a specific command should be constructed for this interface. So a construct like `BankAccount` can use command like `Deposit` or `Withdraw`. A `Command` can takes the construct it is running for, so more of a functional programming paradigm.

## Advantage:

This pattern help programmer with single reponsibility principle, and dependency injection. It also allows us to think with an operation being an object.