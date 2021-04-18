# Command_Parser

A small program using C and C++ languages to read user commands from the command prompt and react upon these commands, the program has the following commands: print, reverse, shuffle, shuffleStatement, upper, add, delete, random, and middle, the program is provided by error handing to check if there is, undefined command, Incorrect Data Type, or Incorrect number of arguments.

•	Print command
 This command should print all the passed arguments separated by single spaces (indpendent of number of spaces/tabs between them). 
Command Line: a1.exe print third year students are honest and clever
Expected output: third year students are honest and clever
•	reverse command
 This command should print the provided arguments in a reverse order separated by single spaces
Command Line: a1.exe reverse Cats love rabbits but rabbits hate cats
Expected output: cats hate rabbits but rabbits love Cats
•	upper command
This command should print all the provided arguments with all characters lower case
Command Line: a1.exe upper cairo university
Expected output: CAIRO UNIVERSITY
•	shuffl¬eWord command
This command should shu¬ffle the characters of a provided word by swapping every pair of
Characters
Command Line: a1.exe shu¬e structure
Expected output: tsurtrue
•	shu¬ffleStatement
This command should shuffl¬e the words of the provided statements
Command Line: a1.exe shu¬ffleeStatement Egypt has goodies
Expected output: has Egypt goodies
•	delete command
This command should delete one of the provided arguments and print the remaining arguments.
The argument to be deleted is identified by the frst parameter given after delete
Command Line: a1.exe delete 3 12 5 good 3 nice
Expected output: 12 5 3 nice
Which  3 represent an index for the third element in the list and the list starts at 12, and the list may contain any data type
•	middle command
This command finds and prints the middle element(s) in a list of arguments. If the number is arguments after the command is even, then there are two middles.
 Command Line: a1.exe middle 3 12 5 good 3 nice
Expected output: 5 good
•	add command
This command should add all the integer numbers after add and return the sum If the arguments are non-numeric integers then it should print an error message as described below in error handling
 Command Line: a1.exe add 4 5 6 2
Expected output: 17
•	 random command
This command should generate a sequence of random numbers give a special range (min and max numbers) and a seed value. The length of the sequence is passed as a parameter
Command Line: a1.exe random 10 1 10 4
a1.exe random sequenceLength minNumber maxNumber seedValue
Expected output: 8 2 10 3 10 1 7 8 7 1
•	ERROR Handling
To check for all commands if there is:
“Undefined Command”
“Incoorect number of Arguments”
“Incorrect Data Type”
