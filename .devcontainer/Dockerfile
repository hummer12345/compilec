FROM ubuntu:20.04

# 環境変数の設定で対話的な設定を無効化
ENV DEBIAN_FRONTEND=noninteractive

# 必要なパッケージのインストール
RUN apt-get update && apt-get install -y \
    g++ \
    gdb \
    python3 \
    python3-pip \
    curl \
    && curl -sL https://deb.nodesource.com/setup_16.x | bash - \
    && apt-get install -y nodejs \
    && rm -rf /var/lib/apt/lists/*

# online-judge-toolsのインストール
RUN pip3 install online-judge-tools

# atcoder-cliのインストール
RUN npm install -g atcoder-cli

# ワークディレクトリの設定
WORKDIR /usr/src/app
