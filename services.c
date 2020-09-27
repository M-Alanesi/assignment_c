void display () {

 printf("Welcome to My application \n please enter a choice: \n 1.add two matrices \n2.subtract two matrics\n 3.Sum & Average \n 4.factorial\n 5.Largest & Smallest \n 6.Delete data\n 7.exit\n");
}
//this functions displayes any given array
void display_matrix(int x,int y,int arr[x][y]) {

for (int c = 0; c < x; ++c) {
        printf("|");

  for (int i = 0; i < y; ++i) {
    printf("%d ",arr[c][i]);

  }
  printf("|\n");
}


}

//this functions add any two dimentional arrays
void add(int x,int y,int arr[x][y],int arr2[x][y]){
    // for (int c = 0;  c < x; ++c) {
    // for (int i = 0; i <y; ++i){
    //         printf("/n display matrix %d ",arr[c][i]);




    // } }
   // display_matrix(x,y,arr);
  //  display_matrix(x,y,arr2);


    int arr3[x][y];
   for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

  arr3[c][i]  =arr[c][i] + arr2 [c][i];
    } }

    display_matrix(x,y,arr3);




}
//this functions subtracts any two dimentional arrays
void subtract(int x,int y,int arr[x][y],int arr2[x][y]) {
      int arr3[x][y];
   for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

  arr3[c][i]  =arr[c][i] - arr2 [c][i];
    } }

    display_matrix(x,y,arr3);

}
// this functions displayes the sum & average of an array
void sum_average(int x,int y,int arr[x][y],int arr2[x][y])
{
    int average;
    int total = 0;
       for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

            total += arr[c][i] + arr2[c][i];


    }
             } printf("Sum: %d \n",total);
             average=total/(x+y);
             printf("Average: %d \n",average);


}
//functions that shows the factorial of all array elements
void factorial(int x,int y,int arr[x][y],int arr2[x][y])
{
  int fact=1;
  //  for(i=1;i<=number;i++){
  //     fact=fact*i;
  // }
      for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

      for(int d=1; d<=arr[c][i]; d++) {
        fact=fact*d;

      }
      printf("\nfactorial of %d : %d \n",arr[c][i],fact);fact=1; } }
      for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

      for(int d=1; d<=arr2[c][i]; d++) {
        fact=fact*d;

      }
      printf("\nfactorial of %d : %d \n",arr2[c][i],fact);fact=1; } }


}
//this functions displayes largest & smallest elements in an array
void largest_smallest (int x,int y,int arr[x][y],int arr2[x][y])
 {int largest=0 , smallest=0;
          for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

      if(largest<arr[c][i]) {
largest=arr[c][i];
      }
      if(largest<arr2[c][i]){
        largest=arr2[c][i];
      }

    }}
    printf("\n The Largest varaible : %d \n",largest);
smallest=largest; // make the comparing start from the largest number we have in our matrix

 for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){

      if(smallest >arr[c][i]) {
        smallest =arr[c][i];

      }
      if(smallest > arr2[c][i]){
        smallest=arr2[c][i];
      }

    }}
    printf("\n The Smallest varaible : %d \n",smallest);


 }
//this functions nullify all array integer to 0
void delete_arr(int x,int y,int arr[x][y],int arr2[x][y]) {
   for (int c = 0;  c < x; ++c) {
    for (int i = 0; i <y; ++i){
      arr[c][i]=0; arr2[c][i]=0;
    }}
}

void display_everything(int x,int y,int arr[x][y],int arr2[x][y]) {
printf("\n result for adding\n ");
    add(x,y,arr,arr2);
    printf("\n result for subtracting\n");
    subtract(x,y,arr,arr2);
    printf("\n Sum & Average \n");
    sum_average(x,y,arr,arr2);
    printf("\n factorial \n");
    factorial(x,y,arr,arr2);
    printf("\n Largest & Smallest \n");
    largest_smallest(x,y,arr,arr2);




}


