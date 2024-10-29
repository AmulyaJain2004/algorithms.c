# dsa.c
Here’s a comprehensive `README.md` template for your **Data Structures Library** in C:

---

# Data Structures Library in C

### Overview
Welcome to the **Data Structures Library** in C! This open-source library provides implementations of various commonly used data structures. Designed with flexibility and reusability in mind, it offers generic structures that handle various data types, enabling developers to incorporate efficient data structures into their C projects with ease.

### Features
This library currently supports the following data structures:
- **Linked List**: Generic implementation with basic operations.
- **Stack**: Built using a linked list for efficient LIFO operations.
- **Queue**: Built using a linked list for efficient FIFO operations.
- **Binary Search Tree (BST)**: Supports basic tree operations.
- **AVL Tree**: Self-balancing binary search tree.
- **Graph**: Implemented with an adjacency list, including BFS and DFS traversals.
- **Hash Table**: Collision resolution using chaining.
- **Priority Queue and Heaps**: Provides an efficient min-heap or max-heap implementation.

### Folder Structure
The repository structure is organized as follows:

```
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
git clone https://github.com/yourusername/data-structures-library.git
cd data-structures-library
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

#### Available Functions
- `Node* create_node(void* data)`: Creates a new node with the specified data.
- `void insert_at_beginning(Node** head, void* data)`: Inserts a node at the beginning of the list.
- `void insert_at_end(Node** head, void* data)`: Inserts a node at the end of the list.
- `void delete_node(Node** head, void* data, int (*compare)(void*, void*))`: Deletes the node containing the specified data.
- `Node* search(Node* head, void* data, int (*compare)(void*, void*))`: Searches for a node with the specified data.
- `void print_list(Node* head, void (*print_data)(void*))`: Prints the data in each node.

#### Example Usage

```c
#include "include/list.h"

// Comparison function for integers
int compare_ints(void* a, void* b) {
    return (*(int*)a - *(int*)b);
}

// Print function for integers
void print_int(void* data) {
    printf("%d ", *(int*)data);
}

int main() {
    Node* head = NULL;
    int a = 10, b = 20, c = 30;

    insert_at_beginning(&head, &a);
    insert_at_end(&head, &b);
    insert_at_end(&head, &c);

    print_list(head, print_int); // Output: 10 20 30

    delete_node(&head, &b, compare_ints);
    print_list(head, print_int); // Output: 10 30

    return 0;
}
```

---

### 2. Stack
The stack is implemented as a linked list, allowing it to grow dynamically.

#### Available Functions
- `void push(Stack* stack, void* data)`: Pushes data onto the stack.
- `void* pop(Stack* stack)`: Removes and returns the top element from the stack.
- `void* peek(Stack* stack)`: Returns the top element without removing it.
- `int is_empty(Stack* stack)`: Checks if the stack is empty.

---

### 3. Queue
The queue is implemented using a linked list, allowing efficient insertion at the tail and removal from the head.

#### Available Functions
- `void enqueue(Queue* queue, void* data)`: Adds data to the queue.
- `void* dequeue(Queue* queue)`: Removes and returns the front element from the queue.
- `int is_empty(Queue* queue)`: Checks if the queue is empty.

---

### Running Tests
Unit tests are included for each data structure. To run the tests, use the following command:

```bash
make test
```

This will compile and execute test cases found in the `tests/` folder.

---

## Contributing
We welcome contributions! If you’d like to contribute:
1. Fork the repository.
2. Create a new branch for your feature (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a pull request.

---


This README template should give potential users and contributors everything they need to understand, use, and contribute to your library!