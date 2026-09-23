# Linked List Programs in C

A menu-driven C program implementing **Singly Linked Lists**, **Circular Linked Lists**, and **Doubly Linked Lists** with common insertion, deletion, traversal, and searching operations.

## Program Flow

```text
                         START
                           │
                           ▼
                  ┌─────────────────┐
                  │  Linked List    │
                  │      Menu       │
                  └────────┬────────┘
                           │
              ┌────────────┼────────────┐
              ▼            ▼            ▼
          Singly        Circular      Doubly
          Linked List   Linked List   Linked List
              │            │            │
              ▼            ▼            ▼
          ┌───────┐    ┌───────┐    ┌───────┐
          │Insert │    │Insert │    │Insert │
          │Delete │    │Delete │    │Delete │
          │Traverse│   │Traverse│   │Traverse│
          └───┬───┘    └───┬───┘    └───┬───┘
              │            │            │
              └────────────┼────────────┘
                           ▼
                       Continue?
                       /       \
                     Yes       No
                      │         │
                      └──► Menu ▼
                            END

```

## Singly Linked List

The program supports the following operations:

### Insertion

* Insert at beginning
* Insert at end
* Insert at a specific index
* Insert after a node

### Deletion

* Delete from beginning
* Delete from end
* Delete from a specific index
* Delete by data

### Traversal

Displays all elements starting from the head node.

```text
HEAD
 │
 ▼
[10 | •] → [20 | •] → [30 | NULL]

```

## Circular Linked List

The program supports:

### Insertion

* Insert at beginning
* Insert at end
* Insert at a specific index

### Deletion

* Delete from beginning
* Delete from end
* Delete from a specific index
* Delete by data

### Traversal

Traverses the list until it reaches the starting node again.

```text
       ┌──────────────────────────┐
       │                          │
       ▼                          │
[10 | •] → [20 | •] → [30 | •] ──┘

```

## Doubly Linked List

The program supports:

### Insertion

* Insert at beginning
* Insert at end
* Insert at a specific index
* Insert after a node

### Deletion

* Delete from beginning
* Delete from end
* Delete from a specific index
* Delete by data

### Traversal

Traverses the list from the head node using the `next` pointer.

```text
NULL ← [10 | • | •] ⇄ [20 | • | •] ⇄ [30 | • | NULL]
        HEAD

```

## Node Structure

Each linked-list node is represented using:

```c
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
```

Where:

* `data` stores the value
* `prev` stores the address of the previous node
* `next` stores the address of the next node

## Concepts Used

* Structures
* Pointers
* Pointer-to-pointer
* Dynamic memory allocation
* `malloc()` and `free()`
* Functions
* Searching
* Insertion
* Deletion
* Traversal
* Doubly linked-list pointer manipulation

## Complexity

| **Operation**       | **Singly Linked List** | **Circular Linked List** | **Doubly Linked List** |
| ------------------- | ---------------------- | ------------------------ | ---------------------- |
| Insert at Beginning | O(1)                   | O(n)                     | O(1)                   |
| Insert at End       | O(n)                   | O(n)                     | O(n)                   |
| Insert at Index     | O(n)                   | O(n)                     | O(n)                   |
| Delete at Beginning | O(1)                   | O(n)                     | O(1)                   |
| Delete at End       | O(n)                   | O(n)                     | O(n)                   |
| Delete at Index     | O(n)                   | O(n)                     | O(n)                   |
| Delete by Data      | O(n)                   | O(n)                     | O(n)                   |
| Traversal           | O(n)                   | O(n)                     | O(n)                   |

> The circular linked-list operations are O(n) because the current implementation traverses the list to locate the required position or node.

## How to Run

### Clone

```bash
git clone https://github.com/ByteCraft0/Linked_list_in_C.git
cd Linked_list_in_C
```

### Compile

```bash
gcc linked_list/ll_main.c -o linkedlist
```

### Run

**Windows:**

```bash
.\linkedlist.exe
```

**Linux / macOS:**

```bash
./linkedlist
```

## Project Structure

```text
Linked_list_in_C/
│
├── linked_list/
│   └── ll_main.c
│
└── README.md

```

## Current Status

| **Component**        | **Status**    |
| -------------------- | ------------- |
| Singly Linked List   | ✅ Implemented |
| Circular Linked List | ✅ Implemented |
| Doubly Linked List   | ✅ Implemented |

## Future Improvements

* Add linked-list reversal
* Add sorting
* Improve input validation
* Separate implementation into `.c` and `.h` files
* Add more data-structure implementations

## Objective

The objective of this project is to develop a practical understanding of **linked lists, pointers, structures, and dynamic memory allocation in C** by implementing core operations from scratch.

## Author

**Aditya Singh** B.Tech CSE (AI/ML)

---

*Developed for learning and practicing C Programming and Data Structures.*
