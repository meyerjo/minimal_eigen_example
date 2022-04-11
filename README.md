# Ubuntu 16.04
This works.
```
No LSB modules are available.
Distributor ID: Ubuntu
Description:    Ubuntu 16.04.7 LTS
Release:        16.04
Codename:       xenial
Using built-in specs.
COLLECT_GCC=g++
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/5/lto-wrapper
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 5.4.0-6ubuntu1~16.04.12' --with-bugurl=file:///usr/share/doc/gcc-5/README.Bugs --enable-languages=c,ada,c++,java,go,d,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-5 --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --with-system-zlib --disable-browser-plugin --enable-java-awt=gtk --enable-gtk-cairo --with-java-home=/usr/lib/jvm/java-1.5.0-gcj-5-amd64/jre --enable-java-home --with-jvm-root-dir=/usr/lib/jvm/java-1.5.0-gcj-5-amd64 --with-jvm-jar-dir=/usr/lib/jvm-exports/java-1.5.0-gcj-5-amd64 --with-arch-directory=amd64 --with-ecj-jar=/usr/share/java/eclipse-ecj.jar --enable-objc-gc --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.12) 
optimization -O0
matrix.Inverse: 0.9999524852420787, 0.003604255274427447, -0.009057405925931806, -0,      -0.003604403123952235, 0.9999935041179618, -0, -0,      0.009057347090091339, 3.264654221433209e-05, 0.9999589808576612, -0,      -0, -0, -0, 1
optimization -O1
matrix.Inverse: 0.9999524852420787, 0.003604255274427447, -0.009057405925931806, -0,      -0.003604403123952235, 0.9999935041179618, -0, -0,      0.009057347090091339, 3.264654221433209e-05, 0.9999589808576612, -0,      -0, -0, -0, 1
optimization -O2
matrix.Inverse: 0.9999524852420787, 0.003604255274427447, -0.009057405925931806, -0,      -0.003604403123952235, 0.9999935041179618, -0, -0,      0.009057347090091339, 3.264654221433209e-05, 0.9999589808576612, -0,      -0, -0, -0, 1
optimization -O3
matrix.Inverse: 0.9999524852420787, 0.003604255274427447, -0.009057405925931806, -0,      -0.003604403123952235, 0.9999935041179618, -0, -0,      0.009057347090091339, 3.264654221433209e-05, 0.9999589808576612, -0,      -0, -0, -0, 1
optimization -Os
matrix.Inverse: 0.9999524852420787, 0.003604255274427447, -0.009057405925931806, -0,      -0.003604403123952235, 0.9999935041179618, -0, -0,      0.009057347090091339, 3.264654221433209e-05, 0.9999589808576612, -0,      -0, -0, -0, 1
optimization -Ofast
matrix.Inverse: 0.9999524852420787, 0.003604255274427447, -0.009057405925931806, -0,      -0.003604403123952235, 0.9999935041179618, -0, -0,      0.009057347090091339, 3.264654221433209e-05, 0.9999589808576612, -0,      -0, -0, -0, 1

```

# Ubuntu 20.04
This causes an error with `-Ofast` flag.
```
No LSB modules are available.
Distributor ID: Ubuntu
Description:    Ubuntu 20.04.2 LTS
Release:        20.04
Codename:       focal
Using built-in specs.
COLLECT_GCC=g++
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:hsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 9.3.0-17ubuntu1~20.04' --with-bugurl=file:///usr/share/doc/gcc-9/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,gm2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-9 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-9-HskZEa/gcc-9-9.3.0/debian/tmp-nvptx/usr,hsa --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 9.3.0 (Ubuntu 9.3.0-17ubuntu1~20.04) 
optimization -O0
matrix.Inverse: 0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -O1
matrix.Inverse: 0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -O2
matrix.Inverse: 0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -O3
matrix.Inverse: 0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -Os
matrix.Inverse: 0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -Ofast
matrix.Inverse: 0.999952485242079, -0.00360425527442745, -0.00905740592593181, 0,      -0.00360440312395223, -0.999993504117962, -0, -0,      0.00905734709009134, -3.26465422143321e-05, 0.999958980857661, 0,      -0, 0, -0, -1

```

# Ubuntu 20.04 with Eigen 3.4.0
This works.
```
No LSB modules are available.
Distributor ID:        Ubuntu
Description:   Ubuntu 20.04.2 LTS
Release:       20.04
Codename:      focal
Using built-in specs.
COLLECT_GCC=g++
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:hsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 9.3.0-17ubuntu1~20.04' --with-bugurl=file:///usr/share/doc/gcc-9/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,gm2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-9 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-9-HskZEa/gcc-9-9.3.0/debian/tmp-nvptx/usr,hsa --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 9.3.0 (Ubuntu 9.3.0-17ubuntu1~20.04) 
optimization -O0
matrix.Inverse:        0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -O1
matrix.Inverse:        0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -O2
matrix.Inverse:        0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -O3
matrix.Inverse:        0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -Os
matrix.Inverse:        0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, -0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
optimization -Ofast
matrix.Inverse:        0.999952485242079, 0.00360425527442745, -0.00905740592593181, -0,      -0.00360440312395223, 0.999993504117962, -0, 0,      0.00905734709009134, 3.26465422143321e-05, 0.999958980857661, -0,      -0, -0, -0, 1
```