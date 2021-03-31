# Readme

- [Readme](#readme)
  - [Build](#build)
    - [windows](#windows)
    - [Linux](#linux)
  - [tags](#tags)
    - [tree](#tree)
## Build

### windows

    md build-win32
    cd build-win32
    pushd
    Launch-VsDevShell.ps1
    popd
    cmake -G "Visual Studio 14 2015 Win64" ..
    cmake --build . --config debug

### Linux

    mkdir build
    cd build
    cmake ..
    make -j

## tags

### [tree](https://leetcode-cn.com/tag/tree/)

- [110. 平衡二叉树](https://leetcode-cn.com/problems/balanced-binary-tree/)

[面试题 04.03. 特定深度节点链表](https://leetcode-cn.com/problems/list-of-depth-lcci/)
