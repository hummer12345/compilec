#!/bin/bash

# コンパイル→テスト
echo "alias ojtest='g++ -fdiagnostics-color=always -g main.cpp -o a.out && oj t -c \"./a.out\" -d ./tests/'" >> ~/.bashrc

# 提出
echo "alias submit='acc submit main.cpp'" >> ~/.bashrc
