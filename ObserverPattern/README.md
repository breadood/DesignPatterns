# Observer Pattern

## Motivation:

To implement event-triggered system. A subscriber/watcer, and a publish/event/signal. Subscriber will run a callback function when a event is triggered.

## Use Case:

Publish an event if something happens.

## Example:

An function is triggered if an event happened. An `Observable` interface in which can be a template interface, and a `Observer` interface.

## Advantage:

This allows the pub/sub functionalities. 