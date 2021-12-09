# Simple_Shell


## Synopsis :thought_balloon:
This is a humble and simple implementation of a UNIX command line interpreter.

## Description :speech_balloon:
Custom version UNIX command language interpreter built as a project for Holberton School. This mini shell reads commands from either interactive  mode and non-interactive mode.


## Requeriments :bookmark_tabs:

* Allowed editors: ```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall``` ```-Werror``` ```-Wextra``` ```-pedantic``` ```-std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style\
.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to
* Authorized functions and system calls:
  * ```access``` (man 2 access)
  * ```chdir``` (man 2 chdir)
  * ```close``` (man 2 close)
  * ```closedir``` (man 3 closedir)
  * ```execve``` (man 2 execve)
  * ```exit``` (man 3 exit)
  * ```_exit``` (man 2 _exit)
  * ```fflush``` (man 3 fflush)
  * ```fork``` (man 2 fork)
  * ```free``` (man 3 free)
  * ```getcwd``` (man 3 getcwd)
  * ```getline``` (man 3 getline)
  * ```getpid``` (man 2 getpid)
  * ```isatty``` (man 3 isatty)
  * ```kill``` (man 2 kill)
  * ```malloc``` (man 3 malloc)
  * ```open``` (man 2 open)
  * ```opendir``` (man 3 opendir)
  * ```perror``` (man 3 perror)
  * ```read``` (man 2 read)
  * ```readdir``` (man 3 readdir)
  * ```signal``` (man 2 signal)
  * ```stat``` (__xstat)(man 2 stat)
  * ```lstat``` (__lxstat) (man 2 lstat)
  * ```fstat``` (__fxstat) (man 2 fstat)
  * ```strtok``` (man 3 strtok)
  * ```wait``` (man 2 wait)
  * ```waitpid``` (man 2 waitpid)
  * ```wait3``` (man 2 wait3)
  * ```wait4``` (man 2 wait4)
  * ```write``` (man 2 write)
## Quick start :runner:
Git clone the repository:
```
git clone https://github.com/marcosozhol/simple_shell.git 
```
## Usage :computer:
All the files are to be compiled on an Ubuntu 20.04 LTS machine with:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
Once compiled, to start the program, run:
```./hsh```
  
To exit the program, run:
```$ exit```
  
# List of functions :page_facing_up:
| Function Name | Description |
|---------------- | -----------|
|```func_exit```     | Exit the shell.|
|```func_printenv``` | Prints the current environment.|
|```read_input``` | Stores whatever is passed to it as standard input. |
|```sparse_str``` | Devides a string into and array of strings. |
|```execute``` | Executes a command that is passed to it as the first aguement. |
|```prompt```  | Prints '$' and waits for a user's input. |
|```_getenv``` | Provides the value of the environment passed to it as arguement. |
|```_which``` | Identifies the path of the command(\*args) that is being passed. |
|```child_process``` | Executes a command if the path of it is an executable file. |
|```search_func``` | Search directory. |
|```_realloc``` | Reallocates a space in memory. |
|```_count_point```  | Memory buffer. |
|```handle_signal``` | Prints new line and prompt when CTRL + C is passed as input. |
|```_stat``` | Displays file or file system status. |
|```_strstr``` | Locates a substring. |
|```_strlen``` | Returns a string. |
|```_strcpy``` | Copies a string pointed to by src to dest. |
|```_strcat``` | Concatenates two strings. |
|```_strcmp``` | Compare two strings. |
|```_strdup``` | Copies a string to another. |
## Syntax :notebook_with_decorative_cover:
**Simple_Shell** the user can have the experience in an interactive and non-interactive way. On the one hand, if it is invoked with a standard input that is not connected to the terminal, *Simple_Shell* reads and executes the received commands in order.
In interactive mode, you can type commands from the keyboard:
Example:
```
$ ./hsh
$ /bin/ls
```
In non-interactive mode, you can pipe commands into the program using echo or cat:
Non-interactive:
Example:
```
$ echo "/bin/ls" | ./hsh
$ cat file_name | ./hsh
```
The following built-ins are supported by the *Simple_Shell*:
  
+ ```env``` - Print the current environment
+ ```exit``` - exit program sucessfully
## Return :clap:
**Simple_Shell** returns zero indicating success and non-zero indicanting failure.
## Annotations :loudspeaker:
We have written an [**article**](https://www.linkedin.com/pulse/what-happens-when-you-type-ls-l-c-shell-agustin-guarteche) in which we deepen the internal processes within the shell by typing the command "ls -l". We talk about fundamental elements such as the PATH, and conclude with the permission structure with some examples. 
## Authors :black_nib:
* **Agustin Guarteche** [Github](https://github.com/ElWecho)
* **Marco Sozaro** [Github](https://github.com/marcosozhol)
## Acknowledgements :pray:
Thanks to all the software engineers, peers from different cohorts of the Holberton School, for all the learning that we have been able to acquire in this academic period culminating in this shell emulation. 
For more information about Holberton, visit this [link](https://www.holbertonschool.com/).
<p align="center">
<img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School logo">
</p
