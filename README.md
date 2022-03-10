# Recursive function with a simple code (TOH)

![Recursive](https://user-images.githubusercontent.com/93463121/157762454-94b92fa5-07ad-430e-b837-a7cebb4e9308.png)

### What is `RECURSIVE`?
>**Recursion (adjective: recursive) occurs when a thing is defined in terms of itself or of its type. Recursion is used in a variety of disciplines ranging from linguistics to logic. The most common application of recursion is in mathematics and computer science, where a function being defined is applied within its own definition. While this apparently defines an infinite number of instances (function values), it is often done in such a way that no infinite loop or infinite chain of references ("crock recursion") can occur.**

## Feature
- Our code will be simple.
- We can write huge code with fewer lines.
- And others ....

## Overveiw

![RE](https://user-images.githubusercontent.com/93463121/157768364-62155437-2849-4f8e-9977-d990268210c8.png)

***In programming terms, a recursive function can be defined as a routine that calls itself directly or indirectly.
Using the recursive algorithm, certain problems can be solved quite easily.***

## Hanoi Towers (TOH)
***Towers of `Hanoi (TOH)` is one such programming exercise. Try to write an iterative algorithm for TOH. Moreover, every recursive program can be written using iterative methods.
Mathematically, recursion helps to solve a few puzzles easily.
For example, a routine interview question,
In a party of N people, each person will shake her/his hand with each other person only once. 
In total how many hand-shakes would happen?***

### Solution:
> It can be solved in different ways; graphs, recursions, etc. Let us see how recursively it can be solved.
There are N persons. Each person shakes hands with each other only once. Considering N-th person, (s)he has to shake a hand with (N-1) the person. Now the problem is reduced to small instances of (N-1) persons. Assuming TN as a total shake-hands, it can be formulated recursively.
TN = (N-1) + TN-1 [T1 = 0, i.e. the last person has already shook-hand with every one]
Solving it recursively yields an arithmetic series, which can be evaluated into N(N-1)/2.

For more information click the link [RECUSIVE FUNCTION](https://www.programiz.com/c-programming/c-recursion).
