# ベースイメージにDebianを使用
FROM mcr.microsoft.com/devcontainers/base:bullseye

# # ユーザーとグループを追加
# ARG USERNAME=vscode
# ARG USER_UID=1000
# ARG USER_GID=1000

# 必要なツールをインストール
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    git \
    wget \
    && rm -rf /var/lib/apt/lists/*

# Unityのテストフレームワークをクローン
RUN git clone https://github.com/ThrowTheSwitch/Unity.git /usr/local/unity

# # 権限の設定
# RUN groupadd --gid $USER_GID $USERNAME \
#     && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
#     && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" > /etc/sudoers.d/$USERNAME \
#     && chmod 0440 /etc/sudoers.d/$USERNAME

# 作業ディレクトリを設定
WORKDIR /workspaces
# USER $USERNAME
