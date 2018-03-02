# Prototype Pattern

## Motivation:

Prevent cartesian design/architecture, decouple interface from implementation.

## Use Case:

If we have `Rectangle`, `Circle`, both as `Shape`, and some different types of `Renderer`. The we may need different types of `Renderer` for each `Shape`, as `CircleVectorRenderer`, `CircleRasterRenderer`. This obviously does not scale well as the system gets more complicated. 

## Example:

Instead of having cartesian design, we want to decouple interface from implementation. We will have `RasterRenderer`, and `VectorRenderer` as `Renderer`, which are capable of rendering different `Shape`. The rendering of `Shape` will take a `Renderer` or more, and the rendering would take the respective `Renderer` based on the call.

## Advantage:

Prevent cartesian design, and instead of creating different constrcut, the responsibility of dealing with different shapes is delegated to different type of renderer.