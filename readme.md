# Build

## windows

    md build-win32
    cd build-win32
    pushd
    Launch-VsDevShell.ps1
    popd
    cmake -G "Visual Studio 14 2015 Win64" ..
    cmake --build . --config debug

## Linux

    mkdir build
    cd build
    cmake ..
    make -j
