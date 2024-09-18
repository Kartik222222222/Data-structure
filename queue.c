#include <stdio.h>
#include <stdlib.h>

int main()
{   
    printf("1. Insert the elements in Queue\n");
    printf("2. Delete the elements in Queue\n");
    printf("3. Underflow\n");
    printf("4. Overflow!!\n");
    printf("5. Peak element in Queue\n");
    printf("6. Display the elements in Queue\n");
    printf("7. EXIT!!\n");
    int queue[10],n,f=-1,r=-1,choice,x;
    printf("Enter the size of Queue:");
    scanf("%d",&n);
    while(1){
             printf("\nEnter the choice:");
            scanf("%d",&choice);
          switch(choice)
          {   
            
            case 1:
            //Enqueue
            if(r == n -1){
                printf("Overflow!!\n");
            }
            else if(f == -1 && r== -1){
                f = r =0;
                printf("Enter the element in Queue: ");
                scanf("%d",&x);
                queue[r] = x;
            }
            else{
                r++;
                printf("Enter the element in Queue: ");
                scanf("%d",&x);
                queue[r]=x;
            }
            break;
            
            
            case 2:
            //Dequeue
            if(f== -1 && r == -1){
                printf("Queue is Underflow!!\n");
            }else if(f == r){
                printf("Element Delete from Queue:%d\n",queue[f]);
                f=r=-1;
            }else{
                printf("Element Delete from Queue:%d\n",queue[f]);
                f++;
            }
            break;
            case 3:
            //Underflow
            if(f== -1 && r == -1){
                printf("Queue is Underflow !!\n");
            }
            else{
                printf("Queue is not Underflow!!\n");
            }
            break;
            case 4:
            //Overflow
            if(r == n-1){
                printf("Queue is Overflow!!\n");
            }
            else{
                printf("Queue is not Overflow!!\n");
            }
            break;
            case 5:
            //Peek in Queue
            printf("Peek Element from Queue:%d\n",queue[f]);
            break;
            case 6:
            //Display the Queue
            if(f== -1){
                printf("Queue is Empty!!\n");
            }else{
                 printf("Queue is: ");
                for(int i = f;i<=r;i++){
                    printf("%d ",queue[i]);
                }
            }
            break;
            case 7:
            exit(1);
            break;
            
        }
    }
    
    

    return 0;
}
