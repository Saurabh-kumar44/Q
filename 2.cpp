#include<iostream>
using namespace std;
int main() {
   //Check the matrix is magic matrix or not
   int product[10][10], r1=4, c1=4, i, j;
   int a[4][4] = { {1, 1, 2, 1},
                   {2, 1, 1, 1},
                   {2, 1, 2, 1},
                   {1, 2, 1, 1}};
      cout<<"The first matrix is:"<<endl;
      for(i=0; i<r1; i++) {
         for(j=0; j<c1; j++)
         cout<<a[i][j]<<" ";
         cout<<endl;
      }

      int principle_Dia=0;
      int secondary_Dia=0;
      //One way to sum diagonal
    //   for(i=0; i<r1; i++){
    //       for(j=0; j<c1; j++){
    //           if(i==j){
    //               principle_Dia += a[i][i];
    //           }
    //           else if((i+j)==(r1-1)){
    //               secondary_Dia += a[i][j];
    //           }
    //     }
    //   }
    int row, col=0;
    for(i=0; i<r1; i++){
        principle_Dia += a[i][i];
        secondary_Dia += a[i][r1-i-1];
    }
    for(i=0; i<r1; i++){
        row=0;
        col=0;
        for(j=0; j<c1; j++){
            row += a[i][j];
            col += a[j][i];
        }
        cout <<"The sum of row"<<i<<" is: "<<row<<endl;
        cout <<"The sum of col"<<i<<" is: "<<col<<endl;
    }
      cout<<"The sum of priciple_Dia is: "<<principle_Dia<<endl;
      cout<<"The sum of secondary_Dia is: "<<secondary_Dia<<endl;

   return 0;
}