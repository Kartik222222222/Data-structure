#include <stdio.h>
#include <stdlib.h>
int n , a[10] ;
int main()
{
   int choice , x , pos ;
   printf("Enter the size of array : ");
   scanf("%d",&n);
   //Creation of an array
   for(int i=0;i<n;i++)
   {
       printf("Enter the elements : ");
       scanf("%d",&a[i]);
   }
   while(1)
   {
       printf("\n1.Insertion of element at 1st position");
       printf("\n2.Insertion of element at any position");
       printf("\n3.Insertion of element at end position");
       printf("\n4.Deletion of element at 1st position");
       printf("\n5.Deletion of element at any position");
       printf("\n6.Deletion of element at end position");
       printf("\n7.Replace the element the array");
       printf("\n8.Display the array");
       printf("\n Enter the choice : ");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1 :
           //Insertion of element at 1st position
           for(int i=n;i>0;i--)
           {
               a[i]=a[i-1];
           }
           printf("Enter the number : ");
           scanf("%d",&x);
           a[0]=x;
           break;
           case 2:
           //Insertion of element at any position
           printf("Enter the number : ");
           scanf("%d",&x);
           printf("Enter the position : ");
           scanf("%d",&pos);
           if(pos>n)
           {
               printf("Invalid position");
           }
           else
           {for(int i=n;i>=pos;i--)
           {
               a[i]=a[i-1];
           }
           a[pos-1]=x;
           n++;
           }
           break ;
           case 3:
           //Insertion of element at end position
           printf("Enter the number : ");
           scanf("%d",&x);
           a[n]=x;
           n++;
           break ;
           case 4:
           //Deletion of element at 1st position
           for(int i=0;i<n;i++)
           {
               a[i]=a[i+1];
           }
           n--;
           break ;
           case 5:
           //Deletion of element at any position
           printf("Enter the position : ");
           scanf("%d",&pos);
           if(pos>n)
           {
               printf("Invalid position");
           }
           else
           {
               for(int i=pos-1;i<n;i++)
           {
               a[i]=a[i+1];
           }
           n--;
           }
           break ;
           case 6:
           //Deletion of element at end position
           printf("Displaying the element from end : ");
           n--;
           break ;
           case 7:
           //Replacing the element
           printf("Enter the number : ");
           scanf("%d",&x);
           printf("Enter the position : ");
           scanf("%d",&pos);
           a[pos-1]=x;
           break ;
           case 8:
           //Display the array
           printf("Dsiplaying the elemnts : ");
           for(int i=0;i<n;i++)
           {
               printf("%d\n",a[i]);
           }
           break ;
           case 9:
           exit(0);
           default : printf("\n Invalid choice!");
           break;
       }
   }
   return 0;
}
