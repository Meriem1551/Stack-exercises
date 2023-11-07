## Task 5

<h2>Descritpion:</h2>

In this task we are going to createa stack p3 from 2
given sorted stacks p1 and p2 such as p3 contains items existe in p2 and not in p1
and items existe in p1 and not in p2. (p3 must be sorted).

So first we'll create two stacks, transform them to arrays,
check that each number existe in p1 and not in p2 and vise-versa, if it doesnt we will push it inside a new stack, sorting and printing it.

<h2>Files:</h2>

**main.h**:header contains funcs prototype.

**main.c**: contains main func which checks our code.

**create-stack.c**:contains func that create a stack.

**create-array.c**:contains func that change a stack to an array.

**is-existe.c**: contains a func that checks if a number from stack p1 existe in second stack p2.

**fill-stack.c**: contains a func that fill the new stack p3 from p1 and P2.

**sorting-stack.c**: contains a func that sort the created array from a stack nd then transform it to the original stack.

**print.c**: contains func that print a stack
