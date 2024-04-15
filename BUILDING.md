# How to Build for PlayStation 3

# Pre-requisites

* Need [ps3toolchain](https://github.com/ps3dev/PS3Toolchain) and [SDL2](https://github.com/StrawFox64/SDL2PSL1GHT) configured.
* Need a legitimate copy of Sonic Mania.

# Steps
* clone this repository recursively ```git clone --recursive https://github.com/StrawFox64/Sonic-Mania-Decompilation.git```.
* Copy your data.rsdk for ```pkgfiles/USRDIR```.
* look for the makefile in SonicMania.ps3 and run ```make pkg```.
* After finishing the build will be generated two pkg, install ```SonicMania.pkg```.