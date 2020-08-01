
//Yibo Zhu, July 29th, summer semester, CSCI6033, cpp file for hangman

#include <stdio.h>
#include <stdbool.h>
#include <iostream>
using namespace std;

int main()
{
    char answer[8] = {'W', 'A', 'R', 'H', 'A', 'W', 'K', 'S'};
    char array[8] = {'?', '?', '?', '?', '?', '?', '?', '?'};
    
    int chance = 3;
    while (chance > 0)
    {
        //make character c as a symbolic sign
        char c;
        printf("\nPlease enter a letter: ");
        cin >> c;
        c = toupper(c);
        
        //check whether c in array[]
        for(int i = 0; i < 8; i++)
        {
            if(c == array[i])
            {
                chance--;
                printf("\nGuess wrong! Repeat guess!\n");
                break;
            }
        }
        //check whether c in answer[]
        bool result = false;
        for(int i = 0; i < 8; i++)
        {
            if(c == answer[i])
            {
                result = true;
                break;
            }
        }

        if(result)
        {
            //to replace the '?' character to correct one
            for(int i = 0; i < 8; i++)
            {
                if(c == answer[i])
                {
                    array[i] = c;
                }
            }
        }
        else
        {
            //c is not in answer[]
            printf("\nGuess wrong!\n");
            chance--;
        }
        
        //print out the current state
        for(int i = 0; i < 8; i++)
        {
            printf("-%c-",array[i]);
        }
        printf("\n");
        
        //compare two array is equal or not?
        bool win = true;
        for(int i = 0; i < 8; i++)
        {
            if(array[i] != answer[i])
            {
                win = false;
            }
        }
        
        if (win == true)
        {
            printf("Congratulation! You Win!\n");
            break;
        }
        
    }
    if(chance == 0){
       printf("You lose the game!\n");
    }
    
    return 0;
}
