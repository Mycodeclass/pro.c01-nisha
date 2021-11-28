#include<stdio.h>
int main()
{
  Printf("pick an item from our menu:\n1. Apple juice\n2. Orange juice\n3. Mango juice\n4. Pineapple juice\n5. Pomegranate juice"); 
  int choice=0;
  Scanf("%d",&choice);
  Switch (choice)
  {
    Case 1:
          Printf("you ordered Apple juice\n Rs.35");
          break;
    Case 2:
          Printf("you ordered Orange juice\n Rs.40");
          break;
    Case 3:
          Printf("you ordered Mango juice\n Rs.30");
          break;
    Case 4:
          Printf("you ordered Pineapple juice\n Rs.45");
          break;
    Case 5:
          Printf ("you ordered Pomegranate juice\n Rs.50");
          break;
    default:
          Printf("please pick an item from our menu");
          }
}
