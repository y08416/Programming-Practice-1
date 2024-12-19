#include <stdio.h>

int add(int a, int b, int c){
	a = b + c;
	
}
int main(){
	int a = 3;
	int b = 4;
	int c = 5;
	a = add(a, b, c);
	printf("%d", a);

}