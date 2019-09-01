#include "python_handler.h"

int main(int argc, char *args[])
{
  PythonHandler::init();

  PythonHandler::runFile("hello", "./");

  PythonHandler::close();

  return 0;
}
