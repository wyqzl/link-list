//
//  main.cpp
//  link list
//
//  Created by wyq on 15/12/9.
//  Copyright (c) 2015年 wyq. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    int age;
    student *next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    student *p,*q,*head;
    head=new student;
    head->next=0;
    p=head;
    for(i=0;i<4;i++)
    {
        q=new student;
        p->next=q;
        q->next=0;
        scanf("%s %d",q->name,&(q->age));
        p=q;
    }
    p=head->next;
    while(p!=0)
    {
        printf("%s   %d\n",p->name,p->age);
        p=p->next;
    }
    return 0;
}