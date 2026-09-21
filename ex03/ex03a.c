#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct Stack{
int arr[MAX];
int top;
};
void initializeStack(struct Stack*stack){
stack->top=-1;
}
void push(struct Stack*stack,int element){
if(stack->top==(MAX-1)){
printf("error:stack overflow.cannot push element.\n");
return;
}
stack->arr[++stack->top]=element;
printf("element pushed:%d\n",element);
}
int pop(struct Stack*stack){
if(stack->top==-1){
printf("error:stack underflow.cannot pop element.\n");
return-1;
}
else{
int poppedElement=stack->arr[stack->top--];
printf("\n Popped element:%d\n",poppedElement);
return poppedElement;
}
}
void displayStack(struct Stack*stack){
int i;
if(stack->top==-1){
printf("Stack is empty.\n");
return;
}
printf("Stack elements:");
for(i=stack->top;i>=0;i--){
printf("%d",stack->arr[i]);
}
printf("\n");
}
int main(){
struct Stack stack;
int choice,element;
initializeStack(&stack);
while(1){
printf("\stack operations menu:\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter element to push:");
scanf("%d",&element);
push(&stack,element);
break;
case 2:
pop(&stack);
break;
case 3:
displayStack(&stack);
break;
case 4:
exit(0);
default:
printf("invalid choice!please enter a valid option.\n");
}
}
return 0;
}


