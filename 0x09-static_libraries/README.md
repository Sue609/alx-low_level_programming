                             C libraries
A library is a file containing several object files, that can be used as a single entity in the linking phase of a program. We must index the library to make it easy to find symbols in them.

We shall be looking at two libraries:
a)Static library - collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.

b)Dynamic library -  (also called dynamic libraries) are linked into the program in two stages. First, during compile time, the linker verifies that all the symbols (again, functions, variables and the like) required by the program, are either linked into the program, or in one of its shared libraries. 
