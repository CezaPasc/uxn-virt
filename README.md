# Virtualization Winter 2023/24

## The uxn virtual machine

Uxn is a small and simple virtual machine implementing a stack architecture.

Its bytecodes are a bit unusual at first, but there are only a few and they are pretty regular. The instruction set is documented at https://wiki.xxiivv.com/site/uxntal_opcodes.html

In addition to the virtual CPU, uxn also implements a number of I/O devices as specified at https://wiki.xxiivv.com/site/varvara.html

We provide a simple command-line implementation of the uxn VM here first which you should be able to compile on Linux, macOS, and Windows with WSL. I would expect that it also compiles with a gcc-based compiler on (native) Windows systems, but I didn't try.

Fork and check out the code in this repository as the basis for the programming exercises for the virtualization course.

You can build uxn using the "build.sh" shellscript. This should result in two executable programs in the bin/ subdirectory, uxncli (the VM) and uxnasm (the assembler that translates human-readable mnemonics into uxn bytecode).

There's a simple "Hello world" example included in example/helloworld.tal

You can assemble this (the generated bytecode is written to helloworld.rom) using

```./bin/uxnasm example/helloworld.tal example/helloworld.rom```

and then test your program using

```./bin/uxncli example/helloworld.rom```

