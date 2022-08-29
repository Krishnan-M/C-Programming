//Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. 
//Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning.
//Initially Nitin has AA coins while Sobhagya has BB coins. 
//Then Ritik came and gave his CC coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his DD coins to the player who is not winning currently).
//Find the final winner of the game.

#include <stdio.h>

int main(void) 
{
    int i,a,b,c,d;
    scanf("%d",&i);
    while(i)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b)
        b+=c;
        else
        a+=c;
        if(a>=b)
        b+=d;
        else
        a+=d;
        if(a>=b)
        printf("N\n");
        else
        printf("S\n");
        --i;
    }
}

