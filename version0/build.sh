export LD_LIBRARY_PATH="/home/kwin/workspace/myself/CppPluginBasedFileAnalysis/version0":$LD_LIBRARY_PATH
# g++ -c my_math.cpp -o my_math.o
# g++ -shared my_math.o -o libmy_math.so
g++ test.cpp -o ./test -L. -lmy_math -lpthread -ldl
./test
