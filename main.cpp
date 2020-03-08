#include<iostream>
using namespace std;
int main(){
    int a,b,line=12;
    for (a = line/2; a <= line; a = a+2) { //upper part
      for (b = 1; b < line-a; b = b+2) //space before first peak
         printf(" ");
      for (b = 1; b <= a; b++) //first peak
         printf("*");   
      for (b = 1; b <= line-a; b++) //space before second peak
         printf(" ");
      for (b = 1; b <= a-1; b++) //second peak
         printf("*");
      printf("\n");
    }
    for (a = line; a >= 0; a--) { //inverted triangle
      for (b = a; b < line; b++) //space before triangle
         printf(" ");
      for (b = 1; b <= ((a * 2) - 1); b++) //print the triangle
         printf("*");
      printf("\n");
   }
   return 0;
}

