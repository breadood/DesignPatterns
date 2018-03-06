# Strategy Pattern

## Motivation:

To enable the behavior of a system at run time.

## Use Case:

A formatter can both format texts with HTML format, or markdown format with run-time user input.

## Example:

A `ListFormatter` has access to call 2 different `ListStrategy`, `HtmlStrategy`, or `MarkdownStrategy`. Depending on user input, the user can choose to set the `ListFormatter` to user the strategy to process text of the choice.

## Advantage:

We decoupled the dependency of `ListFormatter` on a certain `ListStrategy`.