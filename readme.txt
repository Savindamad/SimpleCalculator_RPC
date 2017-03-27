Group Index Numbers: 14001543
                     14000652

The files in this folder contains a program for Remote Procedure Calls.

Program : A simple calculator using RPC
Available functions : Addition (+), Substraction (-), Multiplication (*), Division (/), Percentage (%)

Process we followed:
  1. The IDL to define the structure was written (sCal.x).
  2. sCal.x was complied using rpcgen
        rpcgen -C -a sCal.x
  3. Next the client (sCal_client.c) code and server code (sCal_server.c) was modified with
  function we implemented.
  4. Afterwards the following command was run.
        make -f Makefile.sCal
  5. Next the server was run using ./sCal_server and client was run using ./sCal_client localhost
  6. The function can be checked by first entering an operator and two floats respectively
  when the prompt is received to add the inputs.
  7. The result will be printed at both server side and client side according to the function
  we have implemented. 


Note: When the program is run, sometimes an error is occurred. "sudo apt-get install portmap" solves the issue in such situations. Once the update is done, the RPC runs as expected.
