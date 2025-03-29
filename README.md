<h1 align="center"> 
  🔄 Push_swap 
</h1> 

<p align="center"> 
  <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/jose5556/push_swap?color=lightblue" /> 
  <img alt="Code language count" src="https://img.shields.io/github/languages/count/jose5556/push_swap?color=yellow" /> 
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/jose5556/push_swap?color=blue" /> 
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/jose5556/push_swap?color=green" /> 
</p>

# 💡 About the project

Push_swap is a project completed during my studies at School 42. 
The goal of this project is to sort a stack of integers using a minimal set of operations. 
The challenge lies in implementing efficient sorting algorithms and strategies that minimize the number of moves required to achieve a sorted order.

# 🔍 Overview

In this project, I implemented a sorting algorithm for stacks with restricted operations. 
The program is composed of two stacks (A and B) and a set of operations 
(sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) to sort the stack. 
It is essential to create a solution that sorts the stack with the fewest operations possible, 
optimizing for both small and large data sets.

### Key Features

    Efficient algorithm that can sort 500 numbers under 5500 operations
    Testing the input to only accept real numbers
    Support for both small and very large data sets of numbers
    Clear and organized operation output for easy verification


# 🛠️ Usage

### Requirements

The project is written in C and requires the cc compiler. No additional libraries are needed.

### Instructions

1. Compiling the program

To compile the push_swap program, run the following command in the project directory:

```shell
$ make
```

2. Running the program

To use push_swap, run the executable with a series of integers as arguments, example:

```shell
$ ./push_swap <list_of_integers>
```

The program will output a sequence of operations that will sort the integers in ascending order in stack A.

If you enter, for example, 3 2 5 1 4, the output might look like:

```shell
pb
sa
ra
pb
```

Each operation in the sequence manipulates the stack to achieve a sorted order.

# 📌 Note

- Make sure to test various input sizes to verify that the program performs efficiently under different conditions.
- Check out the 42 push_swap subject guide for specific requirements and grading criteria.
- In this project i also did a checker to test if the intructions given actually sort a stack properly, just type:

```shell
$ make bonus
$ ./checker <list_of_integers>
<instructions>
<instructions>
<instructions>
```
<h4> 
  Each instruction need to have a \n after (just press enter for the next intruction).
  When you type all the instructions you want to check, press "ctrl d"(End-of-input) and it will print OK
  if the instructions succefully sort the stack or KO if doesn't.
</h4>
