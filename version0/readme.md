export LD_LIBRARY_PATH=`pwd`:$LD_LIBRARY_PATH
g++ -shared my_math.o -o libmy_math.so
g++ test.cpp -o ./test -L. -lmy_math