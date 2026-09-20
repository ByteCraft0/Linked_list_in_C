# \# 🔗 Linked List Programs in C

# 

# A menu-driven \*\*C program for implementing and performing operations on Singly Linked Lists and Circular Linked Lists\*\*.

# 

# The project demonstrates linked-list concepts using \*\*structures, pointers, dynamic memory allocation, insertion, deletion, traversal, and searching\*\*.

# 

# \---

# 

# \## 🔄 Program Flow

# 

# ```text

# &#x20;                   ┌─────────────────┐

# &#x20;                   │      START      │

# &#x20;                   └────────┬────────┘

# &#x20;                            │

# &#x20;                            ▼

# &#x20;               ┌────────────────────────┐

# &#x20;               │   Linked List Menu     │

# &#x20;               └───────────┬────────────┘

# &#x20;                           │

# &#x20;             ┌─────────────┼─────────────┐

# &#x20;             ▼             ▼             ▼

# &#x20;      ┌────────────┐ ┌────────────┐ ┌──────────────┐

# &#x20;      │   Singly   │ │  Circular  │ │    Doubly    │

# &#x20;      │   Linked   │ │  Linked    │ │    Linked    │

# &#x20;      │   List     │ │   List     │ │ (Not Yet     │

# &#x20;      └─────┬──────┘ └─────┬──────┘ │ Implemented) │

# &#x20;            │              │         └──────────────┘

# &#x20;            ▼              ▼

# &#x20;     ┌──────────────┐ ┌──────────────┐

# &#x20;     │  Operation   │ │  Operation   │

# &#x20;     │    Menu      │ │    Menu      │

# &#x20;     └──────┬───────┘ └──────┬───────┘

# &#x20;            │                 │

# &#x20;      ┌─────┼─────┐     ┌─────┼─────┐

# &#x20;      ▼     ▼     ▼     ▼     ▼     ▼

# &#x20;   Insert Delete Traverse Insert Delete Traverse

# &#x20;      │     │     │     │     │     │

# &#x20;      └─────┴─────┘     └─────┴─────┘

# &#x20;            │                 │

# &#x20;            └────────┬────────┘

# &#x20;                     ▼

# &#x20;             ┌───────────────┐

# &#x20;             │    Continue?  │

# &#x20;             └───────┬───────┘

# &#x20;                     │

# &#x20;             ┌───────┴────────┐

# &#x20;             │                │

# &#x20;            YES              NO

# &#x20;             │                │

# &#x20;             └──► MENU        ▼

# &#x20;                      ┌─────────────┐

# &#x20;                      │     END     │

# &#x20;                      └─────────────┘

# ```

# 

# \---

# 

# \# 📌 Singly Linked List

# 

# ```text

# &#x20;         Singly Linked List

# &#x20;                 │

# &#x20;                 ▼

# &#x20;          ┌────────────┐

# &#x20;          │  Insertion │

# &#x20;          └─────┬──────┘

# &#x20;                │

# &#x20;      ┌─────────┼─────────┬────────────┐

# &#x20;      ▼         ▼         ▼            ▼

# &#x20;  Beginning    End      Index     After Node

# &#x20;      │         │         │            │

# &#x20;      └─────────┴─────────┴────────────┘

# &#x20;                        │

# &#x20;                        ▼

# &#x20;                   ┌─────────┐

# &#x20;                   │ Deletion│

# &#x20;                   └────┬────┘

# &#x20;                        │

# &#x20;             ┌──────────┼──────────┬──────────┐

# &#x20;             ▼          ▼          ▼          ▼

# &#x20;         Beginning     End       Index      Data

# &#x20;             │          │          │          │

# &#x20;             └──────────┴──────────┴──────────┘

# &#x20;                        │

# &#x20;                        ▼

# &#x20;                   ┌──────────┐

# &#x20;                   │Traversal │

# &#x20;                   └──────────┘

# ```

# 

# \### Supported Operations

# 

# | Category      | Operations                        |

# | ------------- | --------------------------------- |

# | \*\*Insertion\*\* | Beginning, End, Index, After Node |

# | \*\*Deletion\*\*  | Beginning, End, Index, By Data    |

# | \*\*Traversal\*\* | Display all elements              |

# 

# \---

# 

# \# 🔄 Circular Linked List

# 

# ```text

# &#x20;         Circular Linked List

# &#x20;                 │

# &#x20;                 ▼

# &#x20;          ┌────────────┐

# &#x20;          │  Insertion │

# &#x20;          └─────┬──────┘

# &#x20;                │

# &#x20;         ┌──────┼──────┐

# &#x20;         ▼      ▼      ▼

# &#x20;     Beginning  End   Index

# &#x20;         │      │      │

# &#x20;         └──────┴──────┘

# &#x20;                │

# &#x20;                ▼

# &#x20;           ┌─────────┐

# &#x20;           │ Deletion│

# &#x20;           └────┬────┘

# &#x20;                │

# &#x20;      ┌─────────┼─────────┬─────────┐

# &#x20;      ▼         ▼         ▼         ▼

# &#x20;  Beginning    End      Index      Data

# &#x20;      │         │         │          │

# &#x20;      └─────────┴─────────┴──────────┘

# &#x20;                │

# &#x20;                ▼

# &#x20;           ┌──────────┐

# &#x20;           │Traversal │

# &#x20;           └──────────┘

# ```

# 

# \### Supported Operations

# 

# | Category      | Operations                     |

# | ------------- | ------------------------------ |

# | \*\*Insertion\*\* | Beginning, End, Index          |

# | \*\*Deletion\*\*  | Beginning, End, Index, By Data |

# | \*\*Traversal\*\* | Circular traversal             |

# 

# \---

# 

# \# 🧩 Data Structure

# 

# Each node is represented using:

# 

# ```c

# struct Node

# {

# &#x20;   int data;

# &#x20;   struct Node \*next;

# };

# ```

# 

# \### Singly Linked List

# 

# ```text

# HEAD

# &#x20;│

# &#x20;▼

# ┌──────┬──────┐    ┌──────┬──────┐    ┌──────┬──────┐

# │ Data │ Next ├───►│ Data │ Next ├───►│ Data │ NULL │

# └──────┴──────┘    └──────┴──────┘    └──────┴──────┘

# ```

# 

# \### Circular Linked List

# 

# ```text

# &#x20;      ┌─────────────────────────────────────┐

# &#x20;      │                                     │

# &#x20;      ▼                                     │

# ┌──────┬──────┐    ┌──────┬──────┐    ┌─────┴┬─────┐

# │ Data │ Next ├───►│ Data │ Next ├───►│ Data │ Next│

# └──────┴──────┘    └──────┴──────┘    └──────┴─────┘

# &#x20;      ▲                                     │

# &#x20;      └─────────────────────────────────────┘

# ```

# 

# \---

# 

# \# 🛠️ Concepts Used

# 

# ```text

# C Programming

# &#x20;    │

# &#x20;    ├── Structures

# &#x20;    │

# &#x20;    ├── Pointers

# &#x20;    │

# &#x20;    ├── Pointer-to-Pointer

# &#x20;    │

# &#x20;    ├── Dynamic Memory Allocation

# &#x20;    │      ├── malloc()

# &#x20;    │      └── free()

# &#x20;    │

# &#x20;    ├── Functions

# &#x20;    │

# &#x20;    ├── Searching

# &#x20;    │

# &#x20;    ├── Insertion

# &#x20;    │

# &#x20;    ├── Deletion

# &#x20;    │

# &#x20;    └── Traversal

# ```

# 

# \---

# 

# \# ▶️ How to Run

# 

# \### 1. Clone the repository

# 

# ```bash

# git clone https://github.com/ByteCraft0/Linked\_list\_in\_C.git

# ```

# 

# \### 2. Open the project folder

# 

# ```bash

# cd Linked\_list\_in\_C

# ```

# 

# \### 3. Compile

# 

# ```bash

# gcc linked\_list/ll\_main.c -o linkedlist

# ```

# 

# \### 4. Run

# 

# \*\*Windows:\*\*

# 

# ```powershell

# .\\linkedlist.exe

# ```

# 

# \*\*Linux / macOS:\*\*

# 

# ```bash

# ./linkedlist

# ```

# 

# > Make sure GCC is installed and available in your system PATH.

# 

# \---

# 

# \# 📊 Complexity Overview

# 

# | Operation           | Singly Linked List | Circular Linked List |

# | ------------------- | -----------------: | -------------------: |

# | Insert at Beginning |               O(1) |                 O(n) |

# | Insert at End       |               O(n) |                 O(n) |

# | Insert at Index     |               O(n) |                 O(n) |

# | Delete at Beginning |               O(1) |                 O(n) |

# | Delete at End       |               O(n) |                 O(n) |

# | Delete at Index     |               O(n) |                 O(n) |

# | Delete by Data      |               O(n) |                 O(n) |

# | Traversal           |               O(n) |                 O(n) |

# 

# > \*\*Note:\*\* The circular linked-list operations are O(n) because the implementation traverses the list to locate the required node/position.

# 

# \---

# 

# \# 🚧 Current Status

# 

# ```text

# Singly Linked List      ✅ Implemented

# Circular Linked List    ✅ Implemented

# Doubly Linked List      ⏳ Planned

# ```

# 

# \### Future Improvements

# 

# \* \[ ] Implement Doubly Linked List

# \* \[ ] Implement Circular Doubly Linked List

# \* \[ ] Add linked-list reversal

# \* \[ ] Add sorting

# \* \[ ] Improve input validation

# \* \[ ] Split code into `.c` and `.h` files

# \* \[ ] Add more data-structure implementations

# 

# \---

# 

# \# 🎯 Project Objective

# 

# The objective of this project is to build a practical understanding of \*\*Linked Lists and pointer-based data structures in C\*\* by implementing their core operations from scratch.

# 

# It focuses on understanding \*\*how nodes are created, connected, inserted, deleted, traversed, and managed in memory\*\*.

# 

# \---

# 

# \# 👨‍💻 Author

# 

# \*\*Aditya Singh\*\*

# B.Tech CSE (AI/ML)

# 

# \### 📚 Purpose

# 

# This project was developed for \*\*learning and practicing C Programming and Data Structures\*\*.



