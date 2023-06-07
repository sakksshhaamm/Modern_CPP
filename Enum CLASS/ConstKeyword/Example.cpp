#include<iostream>

/*
    Rule 1: Const gets applied to whatever is on the left of it.
            If there is nothing on the left,apply it to the token on the right
    Rule 2: If the statement/ expression has a * symbol,breakdown the statement on * then apply rule 1

*/

int main(){
    int data =1000;
    const int * ptr = &data; // ptr is a pointer to a constant integer

    // *ptr = 999;




    const int n1 =10;
    // n1 =100;this will not work

    int const n1 =10; //n1 is a constant integer

int v1 =1;
int v2 =2;

int * const ptr2  = &v1; // ptr is a constant ptr to an integer


*ptr2 = 100; // modifies  value of v1 to 100
// ptr2 = &v2;// this will not work

////////////////


int value =999;
const int * const ptr3 =&value; // ptr is a constant integer pointer to constant integer


//*ptr3 = 1000; // won't work

// ptr3 = &v1; // not work 





}



