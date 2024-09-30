To begin with, here is an example of C code:

```c
#include <stdio.h>

int main(){
	printf("This is Chata");
	return 0;
}
``` 

Now, let's break it down:

The first part of this code is the line that begins with `#include <stdio.h>`. 
This line includes the library of standard input and output that we will be using in this code. Most notably, it includes the functions `printf` and `scanf`, two of the most commonly used functions throughout C. We will get into what libraries are and what they do later, but for now think of it as a required line for most of your C journey.

The second part you can see right after is the main function declaration, `int main(){}`.
Int main encapsulates your main code block, and executes whatever is in it. Note that in doing C programming, **main always operates first**. You can ignore the parenthesis for now, but do remember to contain your code inside the brackets `{}`.

Now, inside the brackets, there are two lines of code. 
- The first one executes the command `printf`, displaying our text to the console. In this case, it will output "This is Chata".
- The second one returns the value of 0, signaling the end of the codeblock, and exiting the main function.

With this, the code has successfully run. 

## C-ntax (Syntax)

There are a few things to keep in mind when coding in C:

- You may have noticed that in the two lines of code under main, we ended each statement with `;`. This is the symbol used to signify the end of a line. Why do we need that? it's because:
- C mostly ignores spaces.

