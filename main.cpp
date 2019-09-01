#include "python_handler.h"

int main(int argc, char *args[])
{
  PythonHandler::init();

  PythonHandler::runFile("hello", "./");

  PythonHandler::runFile("talk", "./", 3, "Woah", "Two arguments!", "Even three arguments!");

  PythonHandler::close();

  return 0;
}
