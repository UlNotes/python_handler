#include "python_handler.h"
#include <cstring>
using std::strlen;
using std::strcpy;
using std::strcat;
#include <iostream>
using std::cout;

void PythonHandler::init()
{
  Py_Initialize();
}

void PythonHandler::close()
{
  Py_Finalize();
}

// No arguments
PyObject* PythonHandler::runFile(const char *module, const char *location)
{
  PyObject *pName, *pModule, *pFunc;
  PyObject *pValue = NULL;

  // Allow it to find the file
  int locLen = 17 + strlen(location);
  char pyLoc[locLen];
  strcpy(pyLoc, "sys.path.append(\"");
  strcat(pyLoc, location);
  strcat(pyLoc, "\")");

  PyRun_SimpleString("import sys");
  PyRun_SimpleString(pyLoc);

  pName = PyUnicode_FromString(module);

  // Load the module
  pModule = PyImport_Import(pName);
  if (pModule != NULL)
  {
    // Find the main function
    pFunc = PyObject_GetAttrString(pModule, "main");
    if (pFunc != NULL)
      // Make sure that function is callable
      if (PyCallable_Check(pFunc))
        pValue = PyObject_CallObject(pFunc, NULL);
      else
       cout << "PyObject_CallObject() failed:\nModule- " << module << "\nLocation- " << location << "\n\n";
    else
      cout << "PyObject_GetAttrString() failed:\nModule- " << module << "\nLocation- " << location << "\n\n";
  }
  else
    cout << "PyImport_Import() failed:\nModule- " << module << "\nLocation- " << location << "\n\n";

  // Free everything from memory
  Py_XDECREF(pName);
  Py_XDECREF(pModule);
  Py_XDECREF(pFunc);

  return pValue;
}

// Argument overload
PyObject* PythonHandler::runFile(const char *module, const char *location, const int argc, const char *args[])
{

}
