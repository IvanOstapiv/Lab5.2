#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int col,ma,mi,d,w,t;
    int a[col];
    printf("Введіть кількість елементів масиву\n"); 
    scanf("%d", &col);
for(int i = 0; i < col; i++) //введення данних
{
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
}
int min = -1; //Змінна 1-го нуля
for(int i = 0; i < col; i++) //обчислення першого нуля
{
 if(a[i] == 0)
 {
 min = a[i];
 }
}
for(int i = 0; i < col; i++) //обчислення індекса 1 нуля
{
 if(min==a[i])
 {
 mi = i;
 }
}
int max = -1; //Змінна 2-го нуля
for(int i = col; i  >= 0; i--) //обчислення останнього нуля
{
 if(a[i] == 0)
 {
 max = a[i];
 }
}
for(int i = col; i >= 0; i--) //обчислення індекса останнього нуля
{
 if(max==a[i])
 {
 ma = i;
 }
}
for(int i = ma; i < mi; i++)//обчислення
{
 if(ma<mi)
 {
   d+=a[i];
 }
}
if(max==-1 && min==-1)
{
  printf("У масиві немає нулів\n\n");
}
printf("Сума --- %d\n\n",d);
printf("%d Перший нуль\n",min);
printf("%d ID першого нуля\n\n",mi);
printf("%d Останній нуль\n",max);
printf("%d ID2 останній нуль\n",ma);
    return 0;
}