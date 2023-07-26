In this project we shall be looking at Makefile.
A makefile is a special type of file used in software development to define and manage the biuld process of a program or project. It contains a set of rules that specify how the source code files should be compiled, linked and assembled to create the file executable or library.

They are commonly used in Unix-like operating systems and are primarily associated with the 'make' utility. The 'make' Utility reads the Makefile and automatically executes the defined rules to build the project efficiently. 

The basic structure of a Makefile includes rules and dependencies. Each rule consists of a target, dependencies, and commands.
- Target: The target is the name of the file that needs to be built. It represents the final output of the rule.
- Dependencies: The dependencies are the files or targets that the target depends on. If any of the dependencies are modified, the target will be considered out-of-date and will need to be rebuilt.
- Commands: The commands are the actions that need to be performed to build the target. These are shell commands that are executed by the make utility.

In this project we shall be trying to solve the following:
0. Create your first Makefile.
Requirements:
        - name of the executable: school
        - rules: all
                - The all rule builds your executable
        variables: none


1. Requirements:
        - name of the executable: school
        - rules: all
                - The all rule builds your executable
        - variables: CC, SRC
                - CC: the compiler to be used
                - SRC: the .c files


2. Create your first useful Makefile.
Requirements:
        - name of the executable: school
        - rules: all
                - The all rule builds your executable
        - variables: CC, SRC, OBJ, NAME
                - CC: the compiler to be used
                - SRC: the .c files
                - OBJ: the .o files
                - NAME: the name of the executable
        - The all rule should recompile only the updated source files
        - You are not allowed to have a list of all the .o files


3. Requirements:
        - name of the executable: school
        - rules: all, clean, oclean, fclean, re
                all: builds your executable
                clean: deletes all Emacs and Vim temporary files along with the executable
                oclean: deletes the object files
                fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
                re: forces recompilation of all source files
        - variables: CC, SRC, OBJ, NAME, RM
                CC: the compiler to be used
                SRC: the .c files
                OBJ: the .o files
                NAME: the name of the executable
                RM: the program to delete files
        - The all rule should recompile only the updated source files
        - The clean, oclean, fclean, re rules should never fail
        - You are not allowed to have a list of all the .o files


4. Requirements:
        - name of the executable: school
        - rules: all, clean, fclean, oclean, re
                all: builds your executable
                clean: deletes all Emacs and Vim temporary files along with the executable
                oclean: deletes the object files
                fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
                re: forces recompilation of all source files
        - variables: CC, SRC, OBJ, NAME, RM, CFLAGS
                CC: the compiler to be used
                SRC: the .c files
                OBJ: the .o files
                NAME: the name of the executable
                RM: the program to delete files
                CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
        - The all rule should recompile only the updated source files
        - The clean, oclean, fclean, re rules should never fail
        - You are not allowed to have a list of all the .o files
