#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* create(struct node* header,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* temp;
    newnode->data=data;
    newnode->next=NULL;
        if(header==NULL)
        {
            header=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;

        }
        return (header);
}
void display(struct node* header)
{
    struct node* temp = header;
    while(temp!=NULL)
    {
      printf("\n%d\n",temp->data);
      temp=temp->next;

    }
}
/*int searchElt(struct node* header,int ele)
{
     struct node* temp = header;
         while(temp!=NULL)
    {
      if(ele==(temp->data))
      {

        return (temp->data);
       }
      temp=temp->next;
    }
    return -1;


}
int findMiddleElt(struct node* header) {
  if(header==NULL)
  {
      return -1;
  }


    struct node* slow_ptr;
    struct node* fast_ptr;

    while(slow_ptr->next!=NULL  && fast_ptr->next!=NULL)
    {
        slow_ptr=slow_ptr->next;
        fast_ptr=fast_ptr->next->next;
    }

  return slow_ptr->next;
}
struct node* reverselist(struct node* header)
{
    struct node* prenode=NULL;
    struct node* current=header;
    struct node* nextnode=NULL;


    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=prenode;
        prenode=current;
        current=nextnode;
    }
    header=prenode;
    return header;
}
void displaylength(struct node* header)
{
    struct node* temp = header;
    int length=0;
    while(temp!=NULL)
    {
      length=length+1;
      temp=temp->next;
    }
    printf("\nLength of list is %d\n",length);
}
struct node* deletenode(struct node* header,int key)
{
    struct node* temp = header;
    struct node* prev = NULL;


    if (temp != NULL && temp->data == key) {
        header = temp->next;
        free(temp);
        return header;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found in the list.\n");
        return header;
    }


    prev->next = temp->next;

    free(temp);

    return header;
}
*/
struct node* swap(struct node* header,int pos)
{
    int i=1;
    struct node* p=header;
    while(i<pos-1)
    {
        p=p->next;
        i=i+1;
    }
    struct node* q=p->next;
    struct node* r=q->next;

    q->next=r->next;
    r->next=q;
    p->next=r;
    return header;
};





int main()
{
    struct node* header=0;
    header=create(header,10);
    header=create(header,20);
    header=create(header,30);
    header=create(header,40);
    header=create(header,50);
    printf("The original list is");
    display(header);
    header=swap(header,2);
    printf("The swapped list is");
    display(header);


    return 0;
}
