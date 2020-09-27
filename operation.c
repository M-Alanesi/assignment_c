
#include <stdio.h>
#include "services.c"


int main()
{
 


      running(); // this makes the whole program run and the number 1 , 2 is just to make the function dynamic


}


//this is where all the operations runs
void running() {
  int x=0, y=0;

int n;
//this section we will be adding all the matrix values using a for loop for each array
    printf("\n please enter the matrix length\n column:  ");
     // adding matrix length
    scanf("%d",&x);
    printf("\n Rows: ");
    scanf("%d",&y);
   int arr[x][y];
int    arr3[x][y]; // taking the values of the variables and initializing   the array
   int arr2[x][y];
for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){
            printf("/n enter the values of first matrix  column: %d Row: %d \n ",c,i);
 scanf("%d", &n);
 arr[c][i]=n;

    } }
//used this extra loop to fix the problem i faced with the scanf
for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

         arr3[c][i]=arr[c][i];

                }
            }

            printf("\n First Matrix  \n");

    display_matrix(x,y,arr);
int d;
    for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){
            printf("\n enter the values of the second matrix column: %d Row: %d \n",c,i);
     scanf("%d", &d);
     arr2[c][i]=d;




    } }
    printf("\n Second Matrix  \n");
    display_matrix(x,y,arr2);
        //display_matrix(x,y,arr2);

    int choice;
    do {
//here is the full program loop that will keep the program running

 display(); // called the display function to get the menu

scanf("%d", &choice); // took user choice
//switch statment to check the user choice and get the exact function
switch (choice) {

case 1:
    add(x,y,arr3,arr2);

    break;
case 2:
    subtract(x,y,arr3,arr2);
    break;
case 3:
sum_average(x,y,arr3,arr2);
    break;
case 4:
factorial(x,y,arr3,arr2);
    break;
case 5:
largest_smallest(x,y,arr3,arr2);
    break;
case 6:
delete_arr(x,y,arr3,arr2);
    break;
case 7:
return 0;
    break;
case 8:
display_everything(x,y,arr3,arr2);
break;


}


    }while(1==1);






}

