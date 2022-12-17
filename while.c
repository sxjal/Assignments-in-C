#include<stdio.h>
 struct emp{ 
     char m[10],*n; 
     };
      int main()
      { 
          struct emp e={"matrix", "natrix"}; 
          printf("%c %c",e.m[0],e.n); 
          return 1; }