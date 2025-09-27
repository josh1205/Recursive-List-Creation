# Recursive Linked List Traversal

A C++ program demonstrating recursive linked list traversal with a unique pattern-printing algorithm.

## Overview

This project implements a singly linked list and features a recursive function that traverses the list in a specific pattern, printing node values during both the downward and upward phases of recursion.

## Features

- **Linked List Implementation**: Manual node-based singly linked list
- **Recursive Traversal**: Non-standard traversal pattern using recursion
- **Dynamic Memory**: Creates and manages nodes dynamically

## Core Components

### Node Structure
```cpp
struct node {
    int data;
    node* next;
};
```

### Key Functions

**`add_back(node*& front, node*& back, int x)`**
- Adds nodes to the end of the linked list
- Maintains both front and back pointers for O(1) insertion

**`fun(node* start)`**
- Recursive function that prints nodes in a unique pattern
- Skips every other node on the way down
- Prints all visited nodes on the way back up

## Algorithm Behavior

For a list: `1 -> 2 -> 3 -> 4 -> 5 -> 6`

The recursive pattern:
1. Visits nodes 1, 3, 5 (skipping alternates)
2. Returns back printing: 5, 3, 1
3. Final output: `135531`

## Technical Skills

- Linked list implementation from scratch
- Recursive algorithms and call stack understanding
- Pointer manipulation and reference parameters
- Dynamic memory management

## Compilation & Usage

```bash
g++ -std=c++11 linkedlist.cpp -o linked_list
./linked_list
```

**Output**: `135531`

## Learning Outcomes

- Understanding recursion with data structures
- Pointer-based data structure implementation
- Call stack behavior visualization
- Non-trivial traversal patterns

---

*Data Structures coursework project*
