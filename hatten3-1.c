#include <stdio.h>

int main(void){

int x,y,z;

printf("3辺の長さを整数で入力してください:");
printf("1辺目:");
scanf("%d", &x);
printf("2辺目:");
scanf("%d", &y);
printf("3辺目");
scanf("%d", &z);

if(x < y){
 int  w = x;
 x = y;
 y = w;
 }
if(y < z){
 int w = y;
 y = z;
 z = w;
 }
if(x < y){
 int w = x;
 x = y;
 y = w;
 }
if(x >= y + z)
 {
  printf("3辺%d %d %d は三角形を作りません。\n",x ,y ,z);
 }
else
{
/*余弦定理を用いて鋭角,鈍角,直角の条件を判定*/
 if(x*x==y*y+z*z)
  {
   printf("3辺%d%d%dは直角三角形です。\n",x,y,z);
  } 
  else if(x*x<y*y+z*z)
  {
   printf("3辺%d%d%dは鋭角三角形です。\n",x,y,z);
  }
  else
  {
   printf("%d%d%dは鈍角三角形です。\n",x,y,z);
  }
  if(x==y && y==z)
  {
   printf("さらに正三角形です。\n");
  }
  else if(x==y || y==z || z==x)
  {
   printf("さらに二等辺三角形です。\n");
  }
}
}




