CXX      = clang++
CXXFLAGS = -I/usr/include/python3.6m -I/usr/include/python3.6m  -Wno-unused-result -Wsign-compare -g -fdebug-prefix-map=/build/python3.6-PEMn0O/python3.6-3.6.8=. -fstack-protector -Wformat -Werror=format-security  -DNDEBUG -g -fwrapv -O3 -Wall
LDFLAGS  = -L/usr/lib/python3.6/config-3.6m-x86_64-linux-gnu -L/usr/lib -lpython3.6m -lpthread -ldl  -lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions

SRCS     = main.cpp python_handler.cpp

main:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(SRCS) -o main
