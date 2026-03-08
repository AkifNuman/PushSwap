# push_swap

An algorithmic sorting project written in **C**, developed as part of the **42 curriculum**.

The goal of this project is to sort a stack of integers using a **very limited set of operations**, while minimizing the number of moves required.

This project focuses heavily on **algorithm design, optimization, and efficient data manipulation**.

---

## The Challenge

You are given a stack of integers (**stack A**) and an empty stack (**stack B**).

The objective is simple:

**Sort the numbers in ascending order.**

The catch is that you **cannot use traditional sorting functions** and must rely only on a small set of predefined stack operations.

The difficulty lies in designing an algorithm that sorts the numbers using **as few operations as possible**.

---

## Allowed Operations

### Swap

```
sa  swap the first two elements of stack A
sb  swap the first two elements of stack B
ss  sa and sb at the same time
```

### Push

```
pa  push the top element from B to A
pb  push the top element from A to B
```

### Rotate

```
ra  shift up all elements of stack A
rb  shift up all elements of stack B
rr  ra and rb at the same time
```

### Reverse Rotate

```
rra  shift down all elements of stack A
rrb  shift down all elements of stack B
rrr  rra and rrb at the same time
```

---

## Algorithm Approach

Different strategies are used depending on the number of elements.

### Small stacks (3–5 numbers)

Handled with **hardcoded optimal move sequences** to minimize the number of operations.

### Larger stacks

For larger inputs, the program:

* Assigns **indexes** to values
* Splits numbers into **chunks**
* Pushes chunks to **stack B**
* Rebuilds **stack A** in sorted order

This approach significantly reduces the number of operations compared to naive methods.

---

## Example

Input:

```
./push_swap 4 2 3 1
```

Output:

```
pb
sa
ra
pa
```

Each line represents one operation applied to the stacks.

---

## Build

Compile the project using:

```
make
```

This will generate the executable:

```
push_swap
```

---

## Usage

Run the program with a list of integers:

```
./push_swap 3 2 1
```

The program will output the sequence of operations required to sort the numbers.

---

## What This Project Demonstrates

* Algorithm design under constraints
* Optimization of operation count
* Data structure manipulation
* Efficient memory management in C
* Problem solving and debugging skills

---

## Notes

This project was implemented as part of the **42 School curriculum**, which focuses on low-level programming, algorithmic thinking, and building strong problem-solving skills.
