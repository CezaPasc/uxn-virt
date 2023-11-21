# How to assemble/build
```
uxnasm [source] [output]
```

# How to execute 
```
uxncli [rom file]
```

# How does uxntal work
- assembly language
- postfix notation (stack based)
- numbers are expressed in hexadecimal

## Comments
Comments are written in ( brackets )
indentations are not necessary, but can help making the code more readable


## Modes
- *2*: operates on shorts, instead of bytes
    - shorts: 2 bytes
    - LIT2 02 30  -> LIT 02 LIT 30
- *k*: operates without consuming items
- *r*: operates on the return stack


## Runes
- *|*
- *#* shorthand for LIT (1-2 bytes)
- *"* raw character ("h -> 68)
- *;* refers to literal address in main memory (pushes it into the stack)
- *?* jump if top of stack is not zero

# How does fib work:

GTH2k compares if stack is greater than 1
if yes, discard top item and continue
otherwise jump to the end of the method

SUB: subtracts c from b: a b-c
STH:
INC: increases c by one
ADD: adds b + c : a b+c
JMP2r

DEO: Device Output
DEI: Device Input