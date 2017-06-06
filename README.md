## CS 320 Assignment 1 
**Description:** 
This assignment is an implemention of string tokenization. This assignment consists of _six_ programs. The programs are labeled ***prog1_1.c*** ... ***prog1_6.c*** Each program is a conituation of the pervious program but with more features and constraints.
### prog1\_1
**Description:** 
This program will read from the STDIN a string. The input string will then be parsed on spaces, after the string has been tokenized. Each token will be printed on a new line surrounded by an equal sign (=) on each end.

**Constraints:**
* The input String cannot be more than 65 characters, any extra characters will be ignored.

**How to compile/run:**
```
//Compiling
gcc prog1_1.c -o prog1_1

//Running
./prog1_1
User Input Goes Here

``` 

### prog1\_2
**Description:**
This program will prompt the user for a String with a right caret("> "). The input string will then be parsed on spaces, after the string has been tokenized. The program will either idenitify if the token is a String by printing out "STR " or an integer by printing out "INT ".
 
**Constraints:**
* The input String cannot be more than 65 characters, any extra characters will be ignored.

**How to compile/run:**
```
//Compiling
gcc prog1_2.c -o prog1_2

//Running
./prog1_2
User Enters String that should contain integers and words.

```

### prog1\_3
**Description:**
This program will prompt the user for a String with a right caret("> "). The input string will then be parsed on spaces, after the string has been tokenized. If there are more than two tokens, then the program would print out the appropriate error message and prompt the user to enter a string that contains one or two tokens. After one or two tokens are entered by the user,the program will  idenitify if the token is a String by printing out "STR " or an integer by printing out "INT ".
 
**Constraints:**
* The input String cannot be more than 65 characters, any extra characters will be ignored.
* The program should provide an error message if the user enters more than 2 tokens 

**How to compile/run:**
```
//Compiling
gcc prog1_3.c -o prog1_3

//Running
./prog1_3 
token1 token2 

```
### prog1\_4
**Description:**
This program will prompt the user for a String with a right caret("> "). The input string will then be parsed on spaces, after the string has been tokenized. If there are more than two tokens, then the program would print out the appropriate error message and will keep prompting the user to enter a string that contains one or two tokens. After one or two tokens are entered by the user,the program will  idenitify if the token is a String by printing out "STR " or an integer by printing out "INT " and the reprompt the user to enter another string of the same format until the user enters "quit" and the program will quit automatically.
 
**Constraints:**
* The input String cannot be more than 20 characters. If there are more than 20 characters, then an appropriate error message will be displayed.
* The program should provide an error message if the user enters more than 2 tokens 
* When quitting on the input of "quit". The input should be case insensitive.

**How to compile/run:**
```
//Compiling
gcc prog1_4.c -o prog1_4

//Running
./prog1_4
token1 token2

```

### prog1\_5
**Description:**
This program will prompt the user for a String with a right caret("> "). The input string will then be parsed on spaces, after the string has been tokenized. If there are more than two tokens, then the program would print out the appropriate error message and will keep prompting the user to enter a string that contains one or two tokens. If the user inputs two tokens the must be in the format of a String(STR) and an Integer(INT), and if the user inputs one token then it should be a String(STR). When the user inputs in that particular format then the program will identify the type as earlier. If the user enters anything other than that specified format then the user will recieve and error message and be asked to re-enter. The program will quit if the user inputs "quit".
 
**Constraints:**
* The input String cannot be more than 65 characters. If there are more than 65 characters, then an appropriate error message will be displayed.
* The program should provide an error message if the user enters more than 2 tokens and when it is not in the specified format.
* When quitting on the input of "quit". The input should be case insensitive.

**How to compile/run:**
```
//Compiling
gcc prog1_5.c -o prog1_5

//Running
./prog1_5
STRtoken IntToken
or 
STRtoken

```
### prog1\_6
**Description:**
This program will read in a single command line argument of N-integer, if the user inputs more than one or zero command line arguments then an appropriate error message will be printed. After the user inputs a single integer command line argument. The program will peform the same as prog1\_5.c expect this time, it will N times. The user can input "quit" to exit the program before entering data N times.

 
**Constraints:**
* The user cannot input more than one integer command line argument, if the input doesn't match this format then an appropriate error shall be displayed.
* The program should prompt the user for input N times.
* The input String cannot be more than 65 characters. If there are more than 65 characters, then an appropriate error message will be displayed.
* The program should provide an error message if the user enters more than 2 tokens and when it is not in the specified format.
* When quitting on the input of "quit". The input should be case insensitive.

**How to compile/run:**

```
//Compiling
gcc prog1_6.c -o prog1_6

//Running
./prog1_6 IntCmdLineInput
STRtoken IntToken
or 
STRtoken
```

