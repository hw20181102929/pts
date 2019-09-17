#include <stdio.h>
#include <stdlib.h>
struct find{
    int data;
    struct find *next;
};
struct find * create()
{
    struct find *head,*ptr,*p;
    ptr=(struct find *)malloc(sizeof(struct find));
    p=(struct find *)malloc(sizeof(struct find));
    head=(struct find *)malloc(sizeof(struct find));
    p=NULL;
    int x;
    scanf("%d",&x);
    while(x!=-1)
    {
        ptr->data=x;
        ptr->next=p;
        p=ptr;
        ptr=(struct find *)malloc(sizeof(struct find));
        scanf("%d",&x);
    }
    return p;
}
int delete(struct find *L,int n)
{
    int i=1;
    while(L!=NULL&&i<)
    {
        L=L->next
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    struct find *head,*L;
    head=create();
    L= delete(head,n);
}
