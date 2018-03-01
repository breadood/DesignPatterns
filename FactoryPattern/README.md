# Factory Pattern

## Motivation:

Constrcutor logic may be difficult, or simply want to delegate construction responsibility to a different construct.

This is different from Builder, as Builder is more for piecewise, and this is for the wholesale.

## Use Case:

We have `Coffee`, `Tea`, `Coke` all inherited from `Drink`, `HotDrink`, or `ColdDrink`

## Example:

We will create constructs `HotDrinkFactory`, and `ColdDrinkFactory` from `DrinkFactoryInterface`, and `CoffeeFactory`, `TeaFactory`, and `CokeFactory` which respectively take responsibility of making all subtype of `Drink`. A `DrinkFactory`, which contains a `map<string, DrinkFactoryInterface*>`, and use a method to decide which factory to use in the map upon which `Drink` we want.

## Advantage:

Factory pattern is mainly dependency inversion, the method is not dependent on the construction of certain low-level module, and the factory is responsible for creation of constructs.