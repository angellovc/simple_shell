# SIMPLE SHELL

A simple shell is a program that takes input from you in the form of commands, processes it, and then gives an output. It is the interface through which a user works on the programs and commands. A shell is accessed by a terminal which runs it.
When you run the terminal, you can type your input, which is then executed when you hit the Enter key. The output or the result is thereafter displayed on the terminal.

###This simple shell can:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* If an executable cannot be found, print an error message and display the prompt again.
* Execute command lines with arguments.

#INSTALACION

To run this simple shell you have to download the repository and then compilate the files whit gcc 4.8.4. 

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

```

#HOW TO WORK:

for use this simple shell can work in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c

```

or in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2

```

#HOW TO CONTRIBUTE

you can contribute by requesting a pull request.
