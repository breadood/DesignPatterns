# Template Pattern

## Motivation:

To have the skeleton of algorithm of how system work, but the real implemetation would actually implement what happen.

## Use Case:

For example, a sorting system may need to define comparison operator in general, but the actual implementation of a certain sorting will implement how we sort.

## Example:

A `TurnBasedGame` is always one player `take_turn()`, check if `have_winner()`, the `change_turn()`, then repeat. Depending on the actual game we player we can actually implement how `take_turn()`, `have_winner()`, `change_turn()` works, but a `TurnBasedGame` `start_game()` is always the same. 

## Advantage:

Decoupling the actual implementation, just like type templating, this is templating a basic logic. But user needs to define what each process actually does.