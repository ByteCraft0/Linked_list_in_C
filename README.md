# Linked List Programs in C

[svg](https://github.com/ByteCraft0/Linked_list_in_C#linked-list-programs-in-c)

A menu-driven C program implementing **Singly Linked Lists**, **Circular Linked Lists**, and **Doubly Linked Lists** with common insertion, deletion, traversal, and searching operations.

## Program Flow

[svg](https://github.com/ByteCraft0/Linked_list_in_C#program-flow)

```
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

**svg**

## Singly Linked List

[svg](https://github.com/ByteCraft0/Linked_list_in_C#singly-linked-list)

The program supports the following operations:

### Insertion

[svg](https://github.com/ByteCraft0/Linked_list_in_C#insertion)

* Insert at beginning
* Insert at end
* Insert at a specific index
* Insert after a node

### Deletion

[svg](https://github.com/ByteCraft0/Linked_list_in_C#deletion)

* Delete from beginning
* Delete from end
* Delete from a specific index
* Delete by data

### Traversal

[svg](https://github.com/ByteCraft0/Linked_list_in_C#traversal)

Displays all elements starting from the head node.

```
HEAD
 │
 ▼
[10 | •] → [20 | •] → [30 | NULL]

```

**svg**

## Circular Linked List

[svg](https://github.com/ByteCraft0/Linked_list_in_C#circular-linked-list)

The program supports:

### Insertion

[svg](https://github.com/ByteCraft0/Linked_list_in_C#insertion-1)

* Insert at beginning
* Insert at end
* Insert at a specific index

### Deletion

[svg](https://github.com/ByteCraft0/Linked_list_in_C#deletion-1)

* Delete from beginning
* Delete from end
* Delete from a specific index
* Delete by data

### Traversal

[svg](https://github.com/ByteCraft0/Linked_list_in_C#traversal-1)

Traverses the list until it reaches the starting node again.

```
       ┌──────────────────────────┐
       │                          │
       ▼                          │
[10 | •] → [20 | •] → [30 | •] ──┘

```

**svg**

## Doubly Linked List

[svg](https://github.com/ByteCraft0/Linked_list_in_C#doubly-linked-list)

The program supports:

### Insertion

[svg](https://github.com/ByteCraft0/Linked_list_in_C#insertion-2)

* Insert at beginning
* Insert at end
* Insert at a specific index
* Insert after a node

### Deletion

[svg](https://github.com/ByteCraft0/Linked_list_in_C#deletion-2)

* Delete from beginning
* Delete from end
* Delete from a specific index
* Delete by data

### Traversal

[svg](https://github.com/ByteCraft0/Linked_list_in_C#traversal-2)

Traverses the list from the head node using the `next` pointer.

```
NULL ← [10 | • | •] ⇄ [20 | • | •] ⇄ [30 | • | NULL]
        HEAD

```

**svg**

## Node Structure

[svg](https://github.com/ByteCraft0/Linked_list_in_C#node-structure)

Each linked-list node is represented using:

```
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
```

**svg**

Where:

* `data` stores the value
* `prev` stores the address of the previous node
* `next` stores the address of the next node

## Concepts Used

[svg](https://github.com/ByteCraft0/Linked_list_in_C#concepts-used)

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

[svg](https://github.com/ByteCraft0/Linked_list_in_C#complexity)

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

[svg](https://github.com/ByteCraft0/Linked_list_in_C#how-to-run)

### Clone

[svg](https://github.com/ByteCraft0/Linked_list_in_C#clone)

```
git clone https://github.com/ByteCraft0/Linked_list_in_C.git
cd Linked_list_in_C
```

**svg**

### Compile

[svg](https://github.com/ByteCraft0/Linked_list_in_C#compile)

```
gcc linked_list/ll_main.c -o linkedlist
```

**svg**

### Run

[svg](https://github.com/ByteCraft0/Linked_list_in_C#run)

**Windows:**

```
.\linkedlist.exe
```

**svg**

**Linux / macOS:**

```
./linkedlist
```

**svg**

## Project Structure

[svg](https://github.com/ByteCraft0/Linked_list_in_C#project-structure)

```
Linked_list_in_C/
│
├── linked_list/
│   └── ll_main.c
│
└── README.md

```

**svg**

## Current Status

[svg](https://github.com/ByteCraft0/Linked_list_in_C#current-status)

| **Component**        | **Status**    |
| -------------------- | ------------- |
| Singly Linked List   | ✅ Implemented |
| Circular Linked List | ✅ Implemented |
| Doubly Linked List   | ✅ Implemented |

## Future Improvements

[svg](https://github.com/ByteCraft0/Linked_list_in_C#future-improvements)

* Add linked-list reversal
* Add sorting
* Improve input validation
* Separate implementation into `.c` and `.h` files
* Add more data-structure implementations

## Objective

[svg](https://github.com/ByteCraft0/Linked_list_in_C#objective)

The objective of this project is to develop a practical understanding of **linked lists, pointers, structures, and dynamic memory allocation in C** by implementing core operations from scratch.

## Author

[svg](https://github.com/ByteCraft0/Linked_list_in_C#author)

**Aditya Singh** B.Tech CSE (AI/ML)

---

*Developed for learning and practicing C Programming and Data Structures.*
