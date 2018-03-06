# Visitor Pattern

## Motivation:

Instead of modifying every single class in the hierachy for a new concern/feature, we create a external visitor to acheive new features

## Use Case:

We need to address new concerns and add new features.

## Example:

Instead of creating a `print()` for any `Expression`, `AdditionExpression`, `DoubleExpression`. `MinusExpression`. Each `Expression` have a `accept(ExpressionVisitor)` method which takes a `ExpressionVisitor` and call its `visit(Expression)` method. So to add print functionality we only need to make `PrintExpressionVisitor`, to have calculation functionality, we only need to create `CalculateExpressionVisitor`. 

## Advantage:

Do not break open-close principle, or single-responsibility principle by adding new features.