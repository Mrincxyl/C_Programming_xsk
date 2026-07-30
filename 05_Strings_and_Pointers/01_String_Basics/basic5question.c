// 1]
// char str[]= "PhysicsWallah";
// the size of the string will be 14 , 13 of physicsWallah & 1 for Null character

// char str[13]= "PhysicsWallah";
// error due to size
#include<stdio.h>
int main()
{
    char str[]="Physics Wallah";
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);


    //After Modifing
    str[0]='M';
    str[1]=97; // 97 ASCII value of a
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
//////////////////////////////////////////////////////////
//********** */ we can use *(str+i) or *(i+str) or i[str] instead of str[i]  ***********

    return 0;
}