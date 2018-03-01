# Builder Pattern

## Motivation:

For construction of complicated object, we wanted an easier API for construction.

## Use Case:

For a complicated piecewise object, we want to have a pattern to create objects.

## Example:

We have a `LunchCombo` object, we can choose a `Burger`, a `Drink`, and a `Side`. Instead of have a constructor like `LunchCombo(Burger, Drink, Side)`, we would rather have a separate construct we can call to create such a object. For example `LunchComboMaker` would have `add_drink()`, `add_burger()`, and `add_side()`, then a method call `create_combo()` to return a `LunchCombo`

## Advantage:

We avoid using complicated constructor, and we also do not take the responsibility of initialization of objects. 