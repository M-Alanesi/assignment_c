void display () {

 printf("Welcome to My application \n please enter a choice: \n 1.add two matrices \n2.subtract two matrics\n 3.Sum & Average \n 4.factorial\n 5.Largest & Smallest \n 6.Delete data\n 7.exit\n");
}
void display_matrix(int x,int y,int arr[x][y]) {

for (int c = 0; c < x; ++c) {
        printf("|");

  for (int i = 0; i < y; ++i) {
    printf("%d ",arr[c][i]);

  }
  printf("|\n");
}


}

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

