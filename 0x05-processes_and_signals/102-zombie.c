#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
/**
 * infinite_while - function that brings nothing
 * Return: 0
*/
int infinite_while(void)
{
while (1)
{
sleep(1);
}
return (0);
}
/**
 * main - function that creates 5 zombie process
 * Return: 0
*/
int main(void)
{
int zombie_process = 0;
pid_t pid;
while (zombie_process < 5)
{
pid = fork();
if (!pid)
break;
printf("Zombie process created, PID: %i\n", (int)pid);
zombie_process++;
}
if (pid != 0)
infinite_while();
return (0);
}
