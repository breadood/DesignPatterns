# Memento Pattern

## Motivation:

Saves what happened, so we can go back to any state. It is like savings in a game. Allowing system to roll back.

## Use Case:

A system is required to be able to rollback, and restored. 

## Example:

A `BankAccount` can take a vector of `Token`. Any operation will add a `Token` in the system, and we have a `restore(Token)` method to restore the `BankAccount` in any history state.

## Advantage:

A system can be restored back to a previous state, and each memento only saves the record, another construct or the system itself have the responsibility to restore based on give record.