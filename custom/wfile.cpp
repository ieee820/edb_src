#include "ossPrimitiveFileOp.hpp"



int main()
{

  ossPrimitiveFileOp testfile;
  testfile.Open("file1");
  testfile.fWrite("hello world\n");
  testfile.Close();

}

