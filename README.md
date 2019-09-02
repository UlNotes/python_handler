# Python Handler
C++ Static Class that opens a python file, runs it, and returns the output
---
Features
- Can run any python file with a main() method
- Can have any number of char* arguments for the main() method
- The C++ recieves a PyObject* return value

Features being added soon
- [x] Send arguments to a main() method that needs arguments
- [x] Get access to the underlying C++'s API
- [ ] Create a better way to access the C++'s API, probably a method in PythonHandler
---
## Usage
- You need to have python installed.
- The Makefile isn't really universal, just made for one guy's computer
### Linux
If using Python 3, run ```$ python3-config --cflags``` in the terminal and use that output in the Makefile's CXXFLAGS. Then run ```$ python3-config --ldflags``` in the terminal and use that output in the Makefile's LDFLAGS.
