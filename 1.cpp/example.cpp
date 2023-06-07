/*

Before modern CPP




  i) a * symbol is either a multiplication operator OR it is used with a

     pointer

  ii) && means logical and operation in CPP




*/




#include <iostream>

void magic(int data)

{

}

void magic_reference(int &data)

{

}




void magic_pointer_arg(int *ptr)

{

}

void magic_rvalue_reference(int &&data)

{

}




int main()

{

int n1 = 10;

magic(n1);// copied of n1 into the magic function local variable data

magic_reference(n1); // reference of n1 is passed

magic_pointer_arg(&n1);

/*-----------------------------------------------------------------------------*/

magic_rvalue_reference(10); // why?

}

