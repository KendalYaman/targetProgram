# targetProgram

This is the target program to use some new features (such as fork and insert test case in this program).
This program run on **DOSBox** emulator.
It have to be in your Dos repository and mounted to be compiled from gcc in **DOSBox** (DJGPP) or download the [executable](https://drive.google.com/file/d/1rCM8nmP3h10u2zbO3gRWfFaHXDTdFvMW/view?usp=sharing).


## system("fork") & system("forkend")

These two new system call allows to fork the target program and exit. While fork allows to fork (of course), forkend allows to parent process to continue as soon as child process finish.
For now it is harded coded but it will be generated by afl-gcc in the future.
So, you can comment or uncomment (both at the same time)

 
## system("pause")
In  the case you uncomment  *system("fork")* & *system("forkend")* the DOSBox emulator will finish execution. To see  the result you can use this (already existing) system call to check it.
