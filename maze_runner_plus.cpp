/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task C
I wrote a program that can evaluate multiple direction lists. Let’s use the semicolon symbol that must be used at the end of each direction in the input.
*/

#include <iostream>
#include <multiple_directions.txt>
using namespace std;
int main()

{
int maze[6][6] = 
{
1,0,1,1,1,1,
1,0,0,0,1,1,
1,0,1,0,0,1,
1,0,1,0,1,1,
1,0,0,0,0,0,
1,1,1,1,1,1
};

int i=-1,j=0,x=0;             

char f[100];                   

cin.getline(f,100); 
	
open("multiple_directions.txt");

while(f[x] != '\0')           
{

if (f[x] =='D')  
{
  i++;
}
if (f[x] == 'U')                 
{
          i--;
}
if(f[x] == 'R')                 
{
	j++;
}
if(f[x] == 'L')                 
{
	j--;
}
x++;
}

if (i == 3 && j == 4)         
cout<<"You got out of the maze.";
else
cout<<"You are stuck in the maze.";

return 0;

}
