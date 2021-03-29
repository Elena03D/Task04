#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
using namespace std;
//функция для вывода символов на экран
void vyvod(char c)
{
	write(1, &c, 1);
}