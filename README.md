# yamlReader

## To run python file :
`python yamlReader.py`

## To run cpp file:

### First create build directory and change path:
`mkdir build`
`cd build`

### Set project path :
`cmake -S=<path>`
### Like this:
`cmake -S=/home/fateme/Desktop/test-projects`
### And make 
`make -j4n` 
### You can remove build files:
`rm -r ./*`
### Then build :
`cmake -S ..`
`cmake --build . --config Release`
### Finally run :
`cd ..`
`./bin/main.cpp`


