# Python Handler
C++ Static Class that opens a python file, runs it, and returns the output
---
Can run any python file with a main() method

Features being added soon
- [ ] Send arguments to a main() method that needs arguments
- [ ] Get access to the underlying C++'s API
---
## Usage
- You need to have python installed.
- The Makefile isn't really universal, just made for one guy's computer
### Linux
If using Python 3, run ```$ python3-config --cflags``` in the terminal and use that output in the Makefile's CXXFLAGS. Then run ```$ python3-config --ldflags``` in the terminal and use that output in the Makefile's LDFLAGS.
