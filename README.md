# Test readme

### How to run c++ tests
Apply the commands sequentially
```
- sudo apt-get install libgtest-dev
- sudo apt-get install cmake
- cd /usr/src/googletest/
- sudo mkdir build
- cd build
- sudo cmake ..
- sudo make
```

If everything goes well, a new lib directory will be created, which will contain 4 files:
libgmock.a libgmock_main.a libgtest.a libgtest_main.a

```
- sudo cp lib/* /usr/lib
- g++ tests.cpp -o tests -lgtest 
- ./tests
```

### How to run java tests
Apply the commands sequentially
```
- curl https://repo1.maven.org/maven2/org/junit/platform/junit-platform-console-standalone/1.8.2/junit-platform-console-standalone-1.8.2.jar --output junit-platform-console-standalone-1.8.2.jar
```
```
- javac -cp "junit-platform-console-standalone-1.8.2.jar:." Primer.java PrimerTest.java
```
```
- java -jar junit-platform-console-standalone-1.8.2.jar --class-path . --scan-class-path --include-classname PrimerTest
```