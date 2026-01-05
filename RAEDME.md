*This project has been created as part of the 42 curriculum by <yrabhi>.*

# Push_swap

## Description

**Push_swap** is a core algorithm project at 42 School that challenges students to sort
a set of integers using two stacks (**Stack A** and **Stack B**) and a restricted set of
operations.

The main objective is to write a C program that outputs the **smallest possible sequence
of instructions** to sort the integers in ascending order. This project focuses on
algorithmic optimization, computational complexity, and proper memory management.

This implementation uses a **chunk-based sorting algorithm**, which is well suited for
handling large datasets (such as 100 and 500 numbers) while keeping the number of
operations low.

---

## Project Goals

- Understand and apply algorithmic complexity (Big O notation)
- Implement and manipulate stacks in C
- Optimize sorting logic for different input sizes
- Handle errors such as invalid input, duplicates, and integer overflow

---

## Algorithm Strategy

The sorting is performed using a **chunk-based approach**:

1. **Chunking**
   Values in Stack A are divided into chunks based on their indexed order.

2. **Push to Stack B**
   Elements are pushed from Stack A to Stack B chunk by chunk, positioning values
   efficiently to reduce future operations.

3. **Push Back to Stack A**
   Elements are moved back to Stack A by selecting the maximum (or second maximum)
   element from Stack B, ensuring correct final order.

---

## Allowed Operations

Only the following operations are allowed:

- **sa / sb / ss** — Swap the first two elements of a stack
- **pa / pb** — Push the top element from one stack to the other
- **ra / rb / rr** — Rotate a stack (first element becomes last)
- **rra / rrb / rrr** — Reverse rotate a stack (last element becomes first)

---

## Instructions

### Compilation

Compile the project using the provided `Makefile`:

```bash
make
Other available commands:

bash
Copy code
make clean
make fclean
make re
Execution
Run the program by providing a list of integers:

bash
Copy code
./push_swap 2 1 3 6 5 8
Expected Behavior
Valid input: outputs a list of sorting instructions

Already sorted input: outputs nothing

Invalid input (duplicates, non-numeric values, overflow): prints Error to stderr

Testing
Verify the correctness of the output using the checker:

bash
Copy code
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker_linux $ARG
The checker will output OK if the stack is sorted correctly, or KO otherwise.

Resources
References
42 Subject PDF — Push_swap

GeeksforGeeks — Sorting Algorithms

Big O Cheat Sheet

Push_swap Visualizer (for debugging and understanding behavior)

AI Usage
AI tools were used strictly as a learning and support resource, including:

Explaining sorting concepts and algorithm comparisons

Reviewing algorithm logic and edge cases

Improving documentation clarity

All code implementation, testing, debugging, and optimization were done manually.
No AI tools were used to generate the project’s source code.

Author
<yrabhi>
42 Network
