//PROGRAM TO OVERLOAD BINARY OPERATOR USING FRIEND FUNCTION
#include<iostream>
using namespace std;
class Complex
{
public: int rp,ip;
Complex(int rp,int ip){
this->rp=rp; this->ip=ip;
}
void disp(){
cout<<rp<<"+i"<<ip;
}
friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
return Complex(c1.rp+c2.rp,c1.ip+c2.ip);
}
int main()
{
Complex c1(10,20),c2(20,30); c1.disp(); c2.disp();
Complex sum=c1+c2;
sum.disp(); return 0;
}




//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//    vector<int> a;
//    int n;
//    cin>>n;
//    for(int j=0;j<n;j++){
//    	int x;
//        cin>>x;
//        a.push_back(x);
//    
//    }
//    sort(a.begin(),a.end());
//    for(int j=0;j<n;j++){
//        cout<<a[j]<<" ";
//    
//    }
//    return 0;
//}




//#include <bits/stdc++.h> 
//using namespace std;
//
//void checkPalindrome(string s)
//{
//
//    string s1;
//    int i=0;
//     for (char c : s) {
//         Check if the character is alphanumeric (a letter or digit)
//        if (isalnum(c)) {
//            s1=s1+(char)tolower(c);
//        }
//    }
//    cout<<s1;
    
    
    
/*string s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2){
        return true;
    }
    else{
        return false;
    }*/
//}
//int main(){
//	string s1="A1b22Ba";
//	checkPalindrome(s1);
	/*if(b){
		cout<<"yes";
	}
	else{
		cout<<'no';
	}*/
//}






///*#include<stdio.h>
//#include<string.h>
//struct student {
//	char name[20];
//	int age;
//};
//int main(){
//	struct student s[3],temp;
//	int i,j;
//	for(i=0;i<3;i++){
//		printf("\nenter name and age:");
//		scanf("%s %d",s[i].name,&s[i].age);
//	}
//	
//	for(i=1;i<3;i++){
//		for(j=0;j<3-i;j++){
//			if(s[j].age>s[j+1].age){
//				temp=s[j];
//				s[j]=s[j+1];
//				s[j+1]=temp;
//			}
//		}
//	}
//	for(i=0;i<3;i++){
//		printf("\nname:%s",s[i].name);
//		printf("%age:%d",s[i].age);
//	}
//	return 0;
//	
//}
//*/
//
//
//
//
//
//
//
//
//
///*#include <iostream>
//int main() {
//   int arr[] = {1, 2, 3, 4, 5};
//   int* ptr = arr;
//   
//   std::cout << ptr[3] << std::endl;
//   
//   return 0;
//}*/
//
//
//
//
//
//
//
//
//
//
///*#include<stdio.h>
//char stack[20];
//int top=-1;
//void push(char x){
//	stack[++top]=x;
//}
//char pop(){
//	if(top==-1){
//		return ' ';
//	}
//	return stack[top--];
//}
//int main(){
//	char s[20],s1;
//	printf("\nenter teh exp:");
//	scanf("%s",s);
//	for(int i=0;s[i]!='\0';i++){
//		if(s[i]=='(' || s[i]=='['|| s[i]=='{'){
//			push(s[i]);
//		}
//		else{
//			s1=pop();
//			if(s1==' '){
//				printf("\nleft missing");
//				return 0;
//			}
//			else if(!((s1=='[' && s[i]==']')||(s1=='(' && s[i]==')')||(s1=='{' && s[i]=='}'))){
//				printf("\nnot well fromed");
//				return 0;
//			}
//		}
//	}
//	if(top!=-1){
//		printf("\nright missing");
//		return 0;
//	}
//	printf("\nwell formed");
//	return 0;
//}
//
//
//*/
//
//
//
//
//
///*#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//char stack[100];
//int top=-1;
//void push(char x){
//	stack[++top]=x;
//}
//char pop(){
//	return stack[top--];
//}
//int priority(char x){
//	if(x=='('){
//		return 0;
//	}
//	else if(x=='+'||x=='-'){
//		return 1;
//	}
//	else if(x=='*'||x=='/'){
//		return 2;
//	}
//	else if(x=='^'){
//		return 3;
//	}
//}
//int main(){
//	char exp[100],*e,x;
//	printf("\nenter the expp:");
//	gets(exp);
//	e=exp;
//	while(*e!='\0'){
//		if(isalnum(*e)){
//			printf("%c",*e);
//		}
//		
//		else if(*e=='('){
//			push(*e);
//		}
//		else if(*e==')'){
//			while((x=pop())!='('){
//				printf("%c",x);
//			}
//		}
//		else {
//			while(priority(stack[top])>=priority(*e)){
//				printf("%c",pop());
//			}
//			push(*e);
//		}++;
//	}
//	while(top!=-1){
//		printf("%c",pop());
//	}
//	return 0;
//}*/
//
//
//
//
//
//
//
//
//
//
///*#include<stdio.h>
//#define n 20
//char stack[20];
//int top=-1;
//void push(char x){
//	if(top==n-1){
//		printf("\noverflow");
//	}
//	stack[++top]=x;
//}
//char pop(){
//	
//	if(top==-1){
//		printf("\nunderflow");
//	}
//	return  stack[top--];
//}
//void seek(){
//	int i;
//	for(i=top;i>=0;i--){
//	printf("%c",stack[i]);		
//	}
//}
//int main(){
//	char a[20]={"shiven"};
//	int i;
//	for(i=0;a[i]!='\0';i++){
//		push(a[i]);
//	}
//	seek();
//	
////	push(1);
////	push(2);
////	push(3);
////	push(4);
////	push(5);
////	seek();
////	printf("\n");
////	pop();
////	pop();
////	seek();
//	return 0;
//}*/
//
//
//
//
//
///*#include<stdio.h>
//#define n 20
//int items[20];
//int front=-1,rear=-1;
//int isFull(){
//	if((front==0 && rear==n-1)||front==rear+1){
//		return 1;
//	}	
//	return 0;
//}
//int isEmpty(){
//	if(front==-1){
//		return 1;
//	}
//	return 0;
//}
//void enqueue(int x){
//	if(isFull()){
//		printf("\nqueue is full");
//	}
//	else if(front==-1){
//		front=0;
//		rear=0;
//	}
//	else{
//		rear=(rear+1)%n;
//	}
//	items[rear]=x;
//}
//void dequeue(){
//	if(isEmpty()){
//		printf("\nqueue is empty");
//	}
//	else{
//		int x=items[front];
//		if(front==rear){
//			front=-1;
//			rear=-1;
//		}
//		else{
//			front=(front+1)%n;
//		}
//	}
//}
//void display(){
//	int i;
//	for(i=front;i!=rear;i++){
//		printf(" %d ",items[i]);
//	}
//	printf(" %d ",items[i]);
//}
//int main(){
//	enqueue(1);
//	enqueue(2);
//	enqueue(3);
//	enqueue(4);
//	enqueue(5);
//	display();
//	dequeue();
//	dequeue();
//	display();
//	return 0;
//}*/
//
//
//
//
//
//
//
//
//
//
//
//
//
///*#include<stdio.h>
//#include<stdarg.h>
//int sum(int n,...){
//	int s=0,num;
//	va_list list;
//	va_start(list,n);
//	for(int i=0;i<n;i++){
//		num=va_arg(list,int);
//		s=s+num;
//	}
//	return s;
//}
//int main(){
//	int c=sum(5,1,2,3,4,5);
//	printf("%d",c);
//	return 0;
//}*/
//	
//
//
//
//
//
///*#include<stdio.h>
//int asc(int x,int y){
//	return x>y;
//}
//int desc(int x,int y){
//	return x<y;
//}
//void bubb(int a[],int n,int (*cmp)(int,int)){
//	int i,j,temp;
//	for(i=1;i<n;i++){
//		for(j=0;j<n-i;j++){
//			if(cmp(a[j],a[j+1])){
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//	for(i=0;i<n;i++){
//		printf(" %d ",a[i]);
//	}
//}
//
//int main(){
//	int a[5]={5,1,8,9,3};
//	bubb(a,5,asc);
//	printf("\n");
//	bubb(a,5,desc);
//	return 0;
//}*/
//
//
//
//
//
//
//
//
//
///*#include<stdio.h>
//void add(int x,int y){
//	printf("\nsum is:%d",x+y);
//}
//void sub(int x,int y){
//	printf("\nsub is:%d",x-y);
//}
//int main(){
//	void (*fn[])(int,int)={add,sub};
//	fn[0](10,20);
//	return 0;
//}*/
//
//
///*#include<stdio.h>
//void add(int x,int y){
//	printf("\nsum is:%d",x+y);
//}
//void sub(int x,int y){
//	printf("\nsub is:%d",x-y);
//}
//void fun(int x,int y,void (*fptr)(int,int)){
//	fptr(x,y);
//}
//int main(){
//	fun(10,20,add);
//	return 0;
//}*/
//
//
//
//
//
///*#include<stdio.h>
//void sum(int x,int y){
//	printf("\nsum is:%d",x+y);
//}
//int main(){
//	
//	void (*fptr)(int,int)=sum;
//	fptr(10,20);
//	return 0;
//}*/
//
//
//
//
//
//
///*#include<stdio.h>
//#include<ctype.h>
//char stack[100];
//int top=-1;
//void push(char x){
//	stack[++top]=x;
//}
//char pop(){
//	return stack[top--];
//}
//int priority(char x){
//	if(x=='('){
//		return 0;
//	}
//	else if(x=='+'||x=='-'){
//		return 1;
//	}
//	else if(x=='*'||x=='/'){
//		return 2;
//	}
//	else if(x=='^'){
//		return 3;
//	}
//}
//int main(){
//	char exp[100],*e,x;
//	printf("\nenter expression:");
//	scanf("%s",exp);
//	e=exp;
//	while(*e!='\0'){
//		if(isalnum(*e)){
//			printf("%c",*e);
//		}
//		else if(*e=='('){
//			push(*e);
//		}
//		else if(*e==')'){
//			while((x=pop())!='('){
//				printf("%c",x);
//			}
//		}
//		else{
//			while(priority(stack[top])>priority(*e)){
//				printf("%c",pop());
//			}
//			push(*e);
//		
//		}
//		e++;
//		 
//			
//		}
//		while(top!=-1){
//			printf("%c",pop());
//		}
//		return 0;
//		
//	}
//	
//
//*/
//
//
///*#include<stdio.h>
//union student{
//	int roll;
//	int fee;
//	
//};
//int main(){
//	union student u;
//	scanf("%d",&u.roll);
//	scanf("%d",&u.fee);
//	printf("%d %d",u.roll,u.fee);
//	return 0;
//}*/
//
//
//
//
///*#include<stdio.h>
//struct student{
//	char name[20];	
//};
//int main(){
//	struct student s;
//	
//}*/
//
//
//
//
//
//
//
//
///*#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c,i;
//	a=0;
//	b=1;
//	for(i=0;i<10;i++){
//		cout<<"\n"<<a;
//		c=a+b;
//		a=b;
//		b=c;
//		
//	}
//	return 0;
//	
//}*/
//
//
//
//
//
///*#include<stdio.h>
//char stack[100];
//int top=-1;
//void push(char x){
//	stack[++top]=x;
//	
//}
//char pop(){
//	if(top==-1){
//		return ' ';
//	}
//	return stack[top--];
//}
//int main(){
//	char e[100],c;
//	printf("enter the exp:");
//	scanf("%s",e);
//	int i;
//	for(i=0;e[i]!='\0';i++){
//		if(e[i]=='[' || e[i]=='{' || e[i]=='('){
//			push(e[i]);
//		}
//		else{
//			c=pop();
//			if(c==' '){
//				printf("\nnot well formed");
//				return 0;
//			}
//			else if(!(c=='['&&e[i]==']'||c=='{'&&e[i]=='}'||c=='('&&e[i]==')')){
//				printf("\nnot well formed");
//				return 0;
//			}
//			
//		}
//		
//	}
//	if(top!=-1){
//		printf("\nnot well formed");
//		return 0;
//	}
//	printf("\nwell formed");
//	return 0;
//}*/
//
//
//
//
//
//
///*#include<stdio.h>
//int stack[20];
//int top = -1;
//
//void push(int x)
//{
//    stack[++top] = x;
//}
//
//int pop()
//{
//    return stack[top--];
//}
//
//int main()
//{
//    char exp[20];
//    char *e;
//    int n1,n2,n3,num;
//    printf("Enter the expression :: ");
//    scanf("%s",exp);
//    e = exp;
//    while(*e != '\0')
//    {
//        if(isdigit(*e))
//        {
//            num = *e - 48;
//            push(num);
//        }
//        else
//        {
//            n1 = pop();
//            n2 = pop();
//            switch(*e)
//            {
//            case '+':
//            {
//                n3 = n1 + n2;
//                break;
//            }
//            case '-':
//            {
//                n3 = n2 - n1;
//                break;
//            }
//            case '*':
//            {
//                n3 = n1 * n2;
//                break;
//            }
//            case '/':
//            {
//                n3 = n2 / n1;
//                break;
//            }
//            }
//            push(n3);
//        }
//        e++;
//    }
//    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
//    return 0;
//}*/
//
//
//
//
//
///*#include<stdio.h>
//#define size 5
//int items[100];
//int rear=-1,front=-1;
//int isFull(){
//	if((front==0 && rear==size-1) || (front==rear+1)){
//		return 1;
//	}
//	return 0;
//}
//int isEmpty(){
//	if(front==-1){
//		return 1;
//	}
//	return 0;
//}
//void enqueue(int x){
//	if(isFull()){
//		printf("\nqueue is full");
//	}
//	else if(front==-1){
//		front=0;
//		rear=0;
//	}
//	else{
//		rear=(rear+1)%size;
//	}
//	items[rear]=x;
//}
//void dequeue(){
//	int x;
//	x=items[front];
//	if(isEmpty()){
//		printf("\nqueue is empty");
//		
//	}
//	else if(front==rear){
//		front=-1;
//		rear=-1;
//	}
//	else{
//		front=(front+1)%size;
//	}
//}
//void display(){
//	int i;
//	for(i=front;i!=rear;i++){
//		printf("%d ",items[i]);
//	}
//	printf("%d ",items[i]);
//}
//int main(){
//	enqueue(1);
//	enqueue(2);
//	enqueue(3);
//	enqueue(4);
//	enqueue(5);
//	display();
//	dequeue();
//	printf("\n");
//	display();
//	return 0;
//}*/
//
//
//
//
//
//
//
//
//
//
//
//
//
///*#include<stdio.h>
//char stack[100];
//int top=-1;
//void push(char x){
//	stack[++top]=x;
//}
//char pop(){
//	return stack[top--];
//}
//int main(){
//	char exp[100];
//	printf("\nenter string to reverse:");
//	scanf("%s",exp);
//	int i;
//	for(i=0;exp[i]!='\0';i++){
//		push(exp[i]);
//	}
//	printf("\nreverse of string:");
//	for(i=top;i>=0;i--){
//		printf("%c",pop());
//	}
//	return 0;
//	
//}*/