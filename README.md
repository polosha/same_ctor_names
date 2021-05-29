# same_ctor_names

To build run:  
`clang++ -std=c++17 -o main file1.cpp main.cpp`
 
 or   
 `g++ -std=c++17 -o main file1.cpp main.cpp`  
   
 Results are the same.  
   
 Moreover - the result changes if change the order of source files:  
`clang++ -std=c++17 -o main main.cpp file1.cpp`

You can check it on https://replit.com/
