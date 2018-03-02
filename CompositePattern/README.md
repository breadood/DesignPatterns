# Composite Pattern

## Motivation:

Treating individual and composite as the same type of construct.

## Use Case:

`GraphicObject` has ability of `render()`, but also is responsible to draw its child. We can also have sibling relationship between `GraphicObject`.

## Example:

By creating a construct `GroupGraphicObject` which is also a `GraphicObject` and can `render()`, we can have `GraphicObject` containing `GroupGraphicObject` which can have the sibling relationship for different `GraphicObject`.

## Advantage:

We do not have to treat composite objects differently than individual object, which delegate the responsibility to the composite constructs.