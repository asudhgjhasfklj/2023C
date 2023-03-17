#include<stdio.h>
int main(){
	int a = 3, b = 4;
	printf("%d", a+b);
}

#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a+b);
}

#include<stdio.h>
int main(){
	int val[2] = {3, 4};
	int sum = val[0] + val[1];
	printf("%d", sum);
}

#include<stdio.h>
int main(){
	int a, b, c;
	c = a + b;
    FILE*fp;
    fp = fopen("my.txt", "r");
    fscanf(fp, "%d %d", &a, &b);
    fclose(fp);
    printf("%d", a+b);
}

#include<stdio.h>
struct Math{
    int a, b;
} me;
void main ()
{
    me.a = 3;
    me.b = 4;
    printf("%d", me.a+me.b);
}