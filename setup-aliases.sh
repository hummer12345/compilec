#!/bin/bash

# コンパイル→テスト
echo "alias ts='g++ -fdiagnostics-color=always -g main.cpp -o a.out && oj t -c \"./a.out\" -d ./tests/'" >> ~/.bashrc

# 提出
echo "alias submit='acc submit main.cpp'" >> ~/.bashrc

# rmabcエイリアスの追加（ダブルクォーテーションをエスケープ）
echo "alias rmabc='find . -type d -name \"abc*\" -exec rm -rf {} +'" >> ~/.bashrc
