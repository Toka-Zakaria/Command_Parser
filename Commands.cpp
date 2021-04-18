/**********************************************************************************
 * [FILE NAME]: Command.cpp
 *
 * [AUTHOR]: Toka Zakaria Mohamed Ramadan
 *
 * [DATE CREATED]: Apr 15, 2021
 *
 * [Description]:To develop a program that reads user commands from the command
 *               prompt and react upon these commands.
 ***********************************************************************************/

/*******************************************************************************
 *                               Preprocessor Hashes                           *
 *******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

/*******************************************************************************
 *                          Functions Prototypes                               *
 *******************************************************************************/

void print (char* argv);
void upper(char* argument);
long long add (int argsNum, char** args);
void middle(int argsNum, char** args);
void reverse (int argc , char** argv );
void shuffle (char word[]);
void shuffleStatement(int argsNum, char** argv);
void deleteItem(int itemsNumber, char** items);
void radm(char*sequence_length, char*minimumNumber , char*maximumNumber, char*seedValue);


/*******************************************************************************
 *                               Application                                   *
 *******************************************************************************/

int main (int argumentsNumber, char** argument)
{
	unsigned char counter;

	if ( (argumentsNumber == 0) || (argumentsNumber == 1) )
	{
		printf("Undefined Command\n");
		return 0;
	}
	/*******************************************************************************
	 *                              Print Command                                  *
	 *******************************************************************************/
	if( strcmp(argument[1], "print") == 0)
	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		for(counter=2; counter<argumentsNumber; counter++)
		{
			print(argument[counter]);
		}
	}
	/*******************************************************************************
	 *                              upper Command                                  *
	 *******************************************************************************/
	else if(strcmp(argument[1], "upper") == 0)
	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		/*send data*/
		for(counter=2; counter<argumentsNumber; counter++)
		{
			upper(argument[counter]);
		}
		printf("\n");
	}
	/*******************************************************************************
	 *                              add Command                                  *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "add") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		for (int i=2; i<argumentsNumber; i++)
		{

			if( ( (argument[i][0] == '-') || (argument[i][0] == '+') ) && ( strlen(argument[i]) != 1) )
			{
				for(unsigned int j=1; j<strlen(argument[i]); j++)
				{
					if (isdigit(argument[i][j]) == 0)
					{
						printf("Incorrect Data Type\n");
						return 0;
					}
				}

			}
			else
			{
				for(unsigned int j=0; j<strlen(argument[i]); j++)
				{
					if (isdigit(argument[i][j]) == 0)
					{
						printf("Incorrect Data Type\n");
						return 0;
					}
				}
			}

		}
		/*send data*/
		printf("%lld\n", add(argumentsNumber,  argument) );
	}
	/*******************************************************************************
	 *                              middle Command                                  *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "middle") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		middle( argumentsNumber, argument);
	}
	/*******************************************************************************
	 *                              reverse Command                                *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "reverse") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}
		reverse( argumentsNumber, argument);
	}
	/*******************************************************************************
	 *                              shuffle Command                                *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "shuffle") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}
		if(argumentsNumber == 3)
		{
			shuffle(argument[2]);
		}
		else
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

	}
	/*******************************************************************************
	 *                      shufflStatement Command                                *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "shuffleStatement") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		shuffleStatement( argumentsNumber, argument);
	}
	/*******************************************************************************
	 *                              delete Command                                  *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "delete") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		if( ( atoi( argument[2] ) > (argumentsNumber-3) ) || ( ( ( atoi( argument[2] ) ) == 0) && ((argumentsNumber-3) == 0) ) )
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		if ((argument[2][0]) == '+')
		{
			for (unsigned int i=1; i<strlen(argument[2]); i++)
			{
				if ( isdigit(argument[2][i]) == 0 )
				{
					printf("Incorrect Data Type\n");
					return 0;
				}
			}
			deleteItem(argumentsNumber, argument);

		}
		else if(  (isdigit(*argument[2]) == 0 ) || (atoi( argument[2] ) <= 0) )
		{
			printf("Incorrect Data Type\n");
			return 0;
		}

		else
		{
			deleteItem(argumentsNumber, argument);
		}

	}
	/*******************************************************************************
	 *                              random Command                                 *
	 *******************************************************************************/
	else if ( strcmp(argument[1], "random") == 0)

	{
		if (argumentsNumber < 3)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}

		if((argumentsNumber-2) != 4)
		{
			printf("Incorrect Number of Arguments\n");
			return 0;
		}
		else
		{

			for (int i=2; i<argumentsNumber; i++)
			{

				if( ( (argument[i][0] == '-') || (argument[i][0] == '+') ) && ( strlen(argument[i]) != 1) )
				{
					for(unsigned int j=1; j<strlen(argument[i]); j++)
					{
						if (isdigit(argument[i][j]) == 0)
						{
							printf("Incorrect Data Type\n");
							return 0;
						}
					}

				}
				else
				{
					for(unsigned int j=0; j<strlen(argument[i]); j++)
					{
						if (isdigit(argument[i][j]) == 0)
						{
							printf("Incorrect Data Type\n");
							return 0;
						}
					}
				}

			}

			if ( ( atoi(argument[3]) > atoi(argument[4]) ) || ((*argument[2]) == '-') || ((*argument[2]) == '0'))
			{
				printf("Incorrect Data Type\n");
				return 0;
			}


			radm( argument[2], argument[3], argument[4] , argument[5]);

		}
	}
	/*******************************************************************************
	 *                              No Command                                     *
	 *******************************************************************************/
	else
	{
		printf("Undefined Command\n");
		return 0;
	}

}/*End of main function*/


/*******************************************************************************
 *                                 Functions                                   *
 *******************************************************************************/

/******************************************************************************************
 * [Function Name]: print
 *
 * [Description]:  This command should print all the passed arguments separated
 *  by single spaces (independent of number of spaces/tabs between them).
 *
 * [Args]:         argv
 *
 * [In]            argv: Pointer to character
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/
void print (char* argv)
{
	printf("%s ",argv);
}

/******************************************************************************************
 * [Function Name]: upper
 *
 * [Description]:  This command should print all the provided
 * arguments with all characters lower case
 *
 * [Args]:         argument
 *
 * [In]            argument: Pointer to character
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/

void upper(char* argument)
{
	unsigned char i;
	unsigned char argumentLength;

	argumentLength = strlen(argument);

	for(i=0; i<argumentLength; i++)
	{
		if (  ( *(argument+i) ) >='a' && ( *(argument+i) )<='z')
		{
			printf("%c", ( *(argument+i) )-32);
		}
		else
		{
			printf("%c", ( *(argument+i) ) );
		}
	}
	printf(" ");
}
/***********************************************************************************/

/******************************************************************************************
 * [Function Name]: add
 *
 * [Description]:  This command should add all the integer numbers after add
 * and return the sum If the arguments are non-numerical integers then
 * it should print an error message
 *
 * [Args]:         argsNum, args
 *
 * [In]            argsNum: Integer
 *                 args:pointer to char
 *
 * [Out]           NONE
 *
 * [Returns]:      long long sum
 *****************************************************************************************/
long long add (int argsNum, char** args)
{
	unsigned char count;
	long long sum;
	sum =0;

	for(count=2;count<argsNum; count++)
	{
		sum= sum + atoi(args[count]);
	}
	return sum;
}
/******************************************************************************************
 * [Function Name]: middle
 *
 * [Description]:  This command should add all the integer numbers after add
 * and return the sum If the arguments are non-numerical integers then
 * it should print an error message
 *
 * [Args]:         argsNum, args
 *
 * [In]            argsNum: Integer
 *                 args:pointer to char
 *
 * [Out]           NONE
 *
 * [Returns]:      long long sum
 *****************************************************************************************/
void middle(int argsNum, char** args)
{
	int middle_item;

	if ( (argsNum+2)%2 == 1 )
	{
		middle_item = (argsNum+2)/2;
		printf("%s\n", args[middle_item]);
	}
	else if ( (argsNum-2)%2 == 0)
	{
		middle_item = (argsNum+2)/2;

		printf("%s ", args[middle_item-1]);
		printf("%s\n", args[middle_item]);
	}
}
/******************************************************************************************
 * [Function Name]: reverse
 *
 * [Description]:  This command should print the provided arguments in a reverse order
 *  separated by single spaces
 *
 * [Args]:         argv, argc
 *
 * [In]            argv: Pointer to character
 *                 argc: integer
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/

void reverse (int argc , char** argv )
{
	char *tempString = NULL;
	for (unsigned char count=2; count<argc; count++)
	{
		tempString = argv[argc-count+1];
		printf("%s ", tempString);
	}/*End of reverse function*/
	printf("\n");
}
/******************************************************************************************
 * [Function Name]: shuffle
 *
 * [Description]:  This command should shuffle the characters of a provided word
 *  by swapping every pair of characters

 *
 * [Args]:         word[]
 *
 * [In]            word array of characters
 *
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/
void shuffle (char word[])
{
	int length;
	length = strlen(word);
	char tempWord[length];

	for (int i=0; i<length; i++)
	{
		if(i%2==0)
		{
			tempWord[i] = word[i+1];
		}
		else if (i%2==1)
		{
			tempWord[i] = word[i-1];
		}

		/*
		 * to print the last character
		 */
		if(length %2 ==1)
		{
			tempWord[length-1] = word[length-1];
		}

	}/*End of for loop*/

	for (int i=0; i<length; i++)
	{
		printf("%c", tempWord[i]);
	}

	printf("\n");
}/*End of shuffle word*/
/****************************************************************************/
/******************************************************************************************
 * [Function Name]: shuffleStatement
 *
 * [Description]:  This command should shuffle the words of the provided statements
 *
 * [Args]:         argv, argc
 *
 * [In]            argv: Pointer to character
 *                 argc: integer
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/

void shuffleStatement(int argsNum, char** argv)
{
	char *temp[argsNum-2];

	for (int i=2; i<argsNum; i++)
	{
		if(i%2==0)
		{
			temp[i-2] = argv[i+3-2];
		}
		else if (i%2==1)
		{
			temp[i-2] = argv[i+1-2];
		}

		//still to be modified
		if( (argsNum-2) %2 == 1)
		{
			temp[(argsNum-2)-1] = argv[argsNum-1];
		}

	}

	for(int i=0; i<argsNum-2; i++)
	{
		printf("%s ", temp[i]);
	}
	printf("\n");

}
/**************************************************************************/
/******************************************************************************************
 * [Function Name]: deleteItem
 *
 * [Description]:  This command should delete one of the provided arguments and
 *                 print the remaining arguments.The argument to be deleted is
 *                 identified by the first parameter given after delete.
 *
 * [Args]:         itemsNumber, items
 *
 * [In]            items: Pointer to pointer to character
 *                 itemsNumber: integer
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/
void deleteItem(int itemsNumber, char** items)
{
	int deletedItem;
	deletedItem = atoi( items[2] ) ;

	for (int i=deletedItem+2; i< itemsNumber-1 ; i++)
	{
		items[i] = items[i+1];
	}

	for (int i=3; i<itemsNumber-1; i++)
	{
		printf("%s ", items[i]);
	}
	printf("\n");
}
/******************************************************************************************
 * [Function Name]: radm
 *
 * [Description]:  This command should generate a sequence of random numbers give a speicial;
                   range (min and max numbers) and a seed value. The length of the sequence
                   is passed as a parameter.

 * [Args]:         sequence_length, minimumNumber ,
 *                 maximumNumber, seedValue
 *
 * [In]            items: Pointer to pointer to character
 *                 itemsNumber: integer
 *
 * [Out]           NONE
 *
 * [Returns]:      NONE
 *****************************************************************************************/

void radm(char*sequence_length, char*minimumNumber , char*maximumNumber, char*seedValue)
{
	unsigned int seedVal = atoi(seedValue);

	srand( (seedVal) );

	int  generatedNum;

	for(int i=1; i<= atoi(sequence_length) ; i++)
	{

		generatedNum =  ( rand() %  ( ( atoi(maximumNumber) )  - ( atoi(minimumNumber) ) +1 ) ) + atoi(minimumNumber);
		printf("%d ", generatedNum);

	}

	printf("\n");
}
/******************************************************************************************/





