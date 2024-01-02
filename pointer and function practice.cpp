#include<stdio.h>
struct student{
	int marks[3];
	char name[30];
};
int main(){
	struct student s={{10,20,30},"ram"};
	printf("%d %d %d",s.marks[0],s.marks[1],s.marks[2]);
	printf(" %s",s.name);
	return 0;
}








/*#include<stdio.h>
int asc(int x,int y){
	return (x>y);
}
int desc(int x,int y){
	return (x<y);
}
int bubble(int a[],int n,int (*cmp)(int,int)){
	int i,j,temp;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(cmp(a[j],a[j+1])){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[5]={6,1,9,3,5};
	bubble(a,5,asc);
	display(a,5);
	bubble(a,5,desc);
	printf("\n");
	display(a,5);
	return 0;

}*/








/*#include<stdio.h>
int sum(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}
int (*select())(int x,int y){
	int choice;
	printf("\nenter 1 to add and 2 to sub:");
	scanf("%d",&choice);
	if(choice==1){
		return sum;
	}
	else if(choice==2){
		return sub;
	}
	else{
		return NULL;
	}
	
	
}
int main(){
	int (*fptr)(int ,int)=select();
	printf("\nresult is: %d",fptr(10,20));
	return 0;
}*/








/*#include<stdio.h>
void sum(int x,int y){
	printf("\nsum is:%d",x+y);
}
void sub(int x,int y){
	printf("\nsub is:%d",x-y);
}
int main(){
	void (*ptr[])(int,int)={sum,sub};
	int choice;
	printf("\nenter 0 to add and 1 to sub:");
	scanf("%d",&choice);
	ptr[choice](10,20);
	return 0;
}*/






/*#include<stdio.h>
void sum(int x,int y){
	printf("\nsum is:%d",x+y);
}
void sub(int x,int y){
	printf("\nsub is:%d",x-y);
}
void execute(int x,int y,void (*fptr)(int,int)){
	fptr(x,y);
}
int main(){
	execute(2,3,sub);
	return 0;
}*/









/*#include<stdio.h>
void sum(int x,int y){
	printf("\nsum is:%d",x+y);
}
int main(){
	void (*fptr)(int,int)=&sum;
	fptr(2,3);
	return 0;
}*/






/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp_int(const void *x,const void *y){
	char *s1=*(char **)x;
	char *s2=*(char **)y;
	if(strcmp(s1,s2)>1){
		return 1;
	}
	else if(strcmp(s1,s2)<1){
		return -1;
	}
	else{
		return 0;
	}
}
int main(){
	char *a[3]={"pear","mango","apple"};
	int i;
	qsort(a,3,sizeof(char*),cmp_int);
	for(i=0;i<3;i++){
		printf("\n%s",a[i]);
	}
	return 0;}*/






/*#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void *x,const void *y){
	int num1=*(int *)x;
	int num2=*(int *)y;
	if(num1>num2){
		return 1;
	}
	else if(num1<num2){
		return -1;
	}
	else{
		return 0;
	}
}
int main(){
	int a[5]={7,1,3,9,6},i;
	qsort(a,5,sizeof(int),cmp_int);
	for(i=0;i<5;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}
*/




/*#include<stdio.h>
int cmp_int(int *x,int *y){
	return (*x>*y);
}
int bubble_sort(int a[],int n,int (*compare)(int *x,int *y)){
	int i,j,temp;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(compare(&a[j],&a[j+1])){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	int i;
	int a[5]={4,1,9,5,8};
	bubble_sort(a,5,cmp_int);
	for(i=0;i<5;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}*/





/*#include<stdio.h>
int sum(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
int (*select())(int x,int y){
	int choice;
	printf("\n0 for add");
	printf("\n1 for sub");
	printf("\nenter choice:");
	scanf("%d",&choice);
	if(choice==0){
		return sum;
	}
	else if(choice==1){
		return sub;
	}
	else{
		return NULL;
	}
}
int main(){
	int a=20,b=10;
	int (*fn)(int,int)=select();
	printf("\nresult is:%d",fn(a,b));
	return 0;
}*/













/*#include<stdio.h>
void sum(int x,int y){
	printf("\nsum is:%d",x+y);
}
void sub(int x,int y){
	printf("\nsubt is:%d",x-y);
}
int main(){
	int a=20,b=10,choice;
	void (*fn[])(int,int)={sum,sub};
	printf("\n0 for add");
	printf("\n1 for sub");
	printf("\nenter choice:");
	scanf("%d",&choice);
	if(choice==0||choice==1){
		fn[choice](a,b);
	}
	else{
		printf("\ninvalid input");
	}
	return 0;
}*/ 


/*#include<stdio.h>
int sum(int x,int y){
	int z;
	z=x+y;
	return z;

}
int main(){
	int a=10,b=20,c;
	int (*sptr)(int,int)=&sum;
	c=(*sptr)(a,b);
	// second method
	int (*sptr)(int,int)=sum;
	c=sptr(a,b);
	printf("%d",c);
	return 0;
}*/
/*#include<stdio.h>
void sum(int x,int y){
	printf("\n%d",x+y);
}
void max(int x,int y){
	if(x>y){
		printf("\n%d",x);
	}
	else{
		printf("\n%d",y);
	}
}
void execute(int x,int y,void (*fn)(int,int)){
	(*fn)(x,y);
}
int main(){
	execute(10,20,&sum);
	execute(10,20,&max);
	return 0;
}*/
