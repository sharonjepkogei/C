// fine
#include <stdio.h>

int main() {
 int book_id,due_date,return_date,overdue,fine;
 printf("enter book id:\n ,due date:\n ,return date:\n ");
 scanf("%d%d%d",&book_id,&due_date,&return_date);
 overdue = return_date - due_date;
 if(overdue <= 7)
 {fine=overdue * 20;}
 else if(overdue<=14)
 {fine=7*20+(overdue-7)*50;}
     else{fine=7*20+7*50+(overdue-14)*100;}
     printf("due date:%d\n",due_date);
     printf("book id:%d\n",book_id);
     printf("return date:%d\n",return_date);
     printf("overdue:%d\n",overdue);
     printf("fine:sh%d\n",fine);
 return 0;
}