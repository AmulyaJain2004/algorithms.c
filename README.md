# algorithms.c

## Algorithms Library in C

### Overview

Welcome to the **Algorithms Library** in C! This open-source library provides implementations of various commonly used data structures. Designed with flexibility and reusability in mind, it offers generic structures that handle various data types, enabling developers to incorporate efficient data structures into their C projects with ease.

### Features

This library currently supports the following data structures:
**Linked List**: Generic implementation with basic operations. \
**Stack**: Built using a linked list for efficient LIFO operations. \
**Queue**: Built using a linked list for efficient FIFO operations. \
**Binary Search Tree (BST)**: Supports basic tree operations. \
**AVL Tree**: Self-balancing binary search tree. \
**Graph**: Implemented with an adjacency list, including BFS and DFS traversals. \
**Hash Table**: Collision resolution using chaining. \
**Priority Queue and Heaps**: Provides an efficient min-heap or max-heap implementation.

### Folder Structure

The repository structure is organized as follows:

```text
data-structures-library/
├── include/            # Header files (.h) for each data structure
│   ├── list.h
│   ├── stack.h
│   └── queue.h
├── src/                # Source files (.c) with function implementations
│   ├── list.c
│   ├── stack.c
│   └── queue.c
├── tests/              # Test cases for each data structure
│   ├── test_list.c
│   ├── test_stack.c
│   └── test_queue.c
├── README.md           # Project documentation
└── Makefile            # Build automation file
```

### Getting Started

To start using this library, clone the repository and compile the code using the provided `Makefile`.

#### Prerequisites

- **C Compiler**: Make sure you have GCC or any compatible C compiler installed.
- **Make**: To use the provided `Makefile` for building the project.

#### Installation

Clone the repository:

```bash
git clone https://github.com/yourusername/algorithms.c.git
cd algorithms.c
```

#### Building the Library

Run the following command to build the library:

```bash
make
```

This command will compile the source files and create an executable for testing.

### Usage

Each data structure is defined in its own header and source files, with function prototypes in the `include/` directory. Below is a quick guide on how to use some of the key data structures.

---

## Data Structure Documentation

### 1. Linked List

The linked list is implemented as a generic structure, allowing it to store any data type using `void*` pointers.

### 2. Stack

The stack is implemented as a linked list, allowing it to grow dynamically.

### 3. Queue

The queue is implemented using a linked list, allowing efficient insertion at the tail and removal from the head.

### Running Tests

Unit tests are included for each data structure. To run the tests, use the following command:

```bash
make test
```

This will compile and execute test cases found in the `tests/` folder.

---
