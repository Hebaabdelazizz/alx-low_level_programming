It ain't what they call you, it's what you answer to : A program that prints its name, followed by a new line.
If you rename the program, it will print the new name, without having to compile it again.
You should not remove the path before the name of the program.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
Silence is argument carried out by other means : A program that prints the number of arguments passed into it.
Your program should print a number, followed by a new line.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
The best argument against democracy is a five-minute conversation with the average voter : A program that prints all the arguments it receives.
All arguments should be printed, including the first one.
Only print one argument per line, ending with a new line.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
Neither irony nor sarcasm is argument : A program that multiplies two numbers.
Your program should print the result of the multiplication, followed by a new line.
You can assume that the two numbers and result of the multiplication can be stored in an integer.
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
To infinity and beyond : A program that adds positive numbers.
Print the result, followed by a new line.
If no number is passed to the program, print 0, followed by a new line.
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1.
You can assume that numbers and the addition of all the numbers can be stored in an int.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
Minimal Number of Coins for Change : A program that prints the minimum number of coins to make change for an amount of money.
Usage: ./change cents
Where cents is the amount of cents you need to give back.
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1.
You should use atoi to parse the parameter passed to your program.
If the number passed as the argument is negative, print 0, followed by a new line.
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
