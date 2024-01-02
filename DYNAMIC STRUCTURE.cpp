



/*#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int rollno;
	char name[20];
} stud;
int main(){
	stud *s,temp;
	int n,i,j;
	printf("\nenter number records:");
	scanf("%d",&n);
	s=(stud *)malloc(n*sizeof(stud));
	for(i=0;i<n;i++){
		printf("\nenter rollno and name:");
		fflush(stdin);
		scanf("%d %s",&(s+i)->rollno,(s+i)->name);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if((s+j)->rollno<(s+(j+1))->rollno){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("\nin descending order:");
	for(i=0;i<n;i++){
		printf("\nroll no:%d",(s+i)->rollno);
		printf("\nname:%s",(s+i)->name);
	}
	return 0;
}*/








/*#include<stdio.h>
#include<stdlib.h>
typedef struct employee{
	char name[20];
	float salary;
} emp;
int main(){
	emp *e;
	int n,i;
	float large=0;
	printf("\nentr the number of records:");
	scanf("%d",&n);
	e=(emp *)malloc(n*sizeof(emp));
	for(i=0;i<n;i++){
		printf("\nenter the name and salary:");
		scanf("%s %f",(e+i)->name,&(e+i)->salary);
	}
	for(i=0;i<n;i++){
		if((e+i)->salary>large){
			large=(e+i)->salary;
		}
	}
	printf("\nemployee with highest salary is:");
	for(i=0;i<n;i++){
		if((e+i)->salary==large){
			printf("\nname:%s",(e+i)->name);
			printf("\nsalary:%.2f",(e+i)->salary);
		}
	}
	return 0;
	
}*/















/*#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int marks;
	char name[20];
} stud;
int main(){
	stud *ptr;
	int n,i;
	printf("\nenter no of students:");
	scanf("%d",&n);
	ptr=(stud *)malloc(n*sizeof(stud));
	for(i=0;i<n;i++){
		printf("\nenter marks and name:");
		fflush(stdin);
		scanf("%d %s",&(ptr+i)->marks,(ptr+i)->name);
	}
	printf("\ndisplay");
	for(i=0;i<n;i++){
		printf("\nmarks:%d",(ptr+i)->marks);
		printf("\nname:%s",(ptr+i)->name);
	}
	return 0;
}*/