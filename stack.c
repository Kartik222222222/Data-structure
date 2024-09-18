#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Top = -1 , Stack[10] , x , n , i , choice ;
   printf("\n Enter size of stack :");
   scanf("%d", &n);
//   for(i=0;i<=n;i++)
//   {
//       if(Top==n-1)
//       {
//           printf("\n Overflow!!");
//       }
//       else
//       {
//           printf("\n Enter elment of stack : ");
//           scanf("%d", &x);
//           Top++;
//           Stack[Top]=x;
//       }
//   }
      while(1)
      {
          printf("\n 1.Push : Insertion of element in stack");
          printf("\n 2.Pop : Deletion of element in stack");
          printf("\n 3. Peek : Show top most Element");
          printf("\n 4.Underflow : Check whether the stack is empty");
          printf("\n 5.Overflow : Check whether the stack in full");
          printf("\n 6.Display : Show the element in stack");
          printf("\n 7.Exit");
          
          printf("\n Enter the choice : ");
          scanf("%d",&choice);
          switch(choice)
          {
              case 1:
              // Push : Insertion of stack
              if(Top==n-1)
                {
                  printf("\n Overflow!!");
                }
              else
                {
                  printf("\n Enter elment of stack : ");
                  scanf("%d", &x);
                  Top++;
                  Stack[Top]=x;
                }
              break;
              
              case 2:
              //Pop : Deletion of stack
              if(Top==-1)
              {
                printf("\n Underflow!! : The Stack is empty"); 
              }
              else
              {
                printf("The deleted element is %d",Stack[Top]);
                Top--;
              }
              break;
              
              case 3:
              //Display Top most element
              if(Top==-1)
              {
                  printf("Underflow!!");
              }
              else
              {
                  printf("Show the top element : %d", Stack[Top]);
              }
              break;
              
              case 4:
              //Show Underflow or not Underflow
              if(Top==-1)
              {
                printf("\n Underflow!!"); 
              }
              else
              {
                printf("\n Not Underflow!!");
              }
              break;
              
              case 5:
              //Check the condition for Overflow 
               if(Top==n-1)
              {
                printf("\n Overflow!!"); 
              }
              else
              {
                printf("\n Not Overflow!!");
              }
              break;
              
              case 6:
              //Display the Stack
              for(i=Top;i>=0;i--)
              {
                  printf("\t\n%d",Stack[i]);
              }
              if(Top==-1)
              {
                printf("\n Underflow!!"); 
              }
              break;
             
              case 7:
              exit(0);
              default : printf("\n Invalid choice!");
              break;
          }
        }
        return 0;
}
