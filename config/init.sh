#!/bin/bash

# acc config-dir コマンドからパスを取得
CONFIG_DIR=$(acc config-dir)

# 取得したパスに cpp フォルダを作成
mkdir -p "${CONFIG_DIR}/cpp"

# main.cpp を cpp フォルダにコピー
cp ../main.cpp "${CONFIG_DIR}/cpp/"

cp template.json "${CONFIG_DIR}/cpp/"

cp config.json "${CONFIG_DIR}/"

