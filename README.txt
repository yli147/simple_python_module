1. Build the module in openEuler
sudo chroot ./openEuler_rootfs
yum install python3-devel
yum install gcc
gcc -shared -o mymodule.so -fPIC -I/usr/include/python3.8 mymodule.c

2. Copy the mymodule.so to site-pacakges
/usr/lib64/python3.11/site-packages/
/usr/lib/python3.11/site-packages/

3. Execution
Python3
Python 3.11.6 (main, May 23 2024, 21:04:46) [GCC 12.3.1 (openEuler 12.3.1-30.oe2403)] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import mymodule
>>> print(mymodule.hello())
Hello, World!
>>> from mymodule import hello as hh
>>> hh()
Hello, World!
