# bitcpy

## Overview

This is a variant of the C memcpy function named “bitcpy”. The function should behave the same as the memcpy function, except the third parameter specifies the number of bits (not bytes) to copy. Included is a test.c source file (containing a main() method which demonstrates usage).

### Building from command line:

Compile all c files and specify 
```gcc -o runme *.c```

```./runme```

### Technical Specifications

* Written in CLang:

```
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 11.0.3 (clang-1103.0.32.29)
Target: x86_64-apple-darwin19.4.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

* Tested on MacOs Catalina (10.15.4).