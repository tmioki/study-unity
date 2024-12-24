cmake_minimum_required(VERSION 3.10)
project(UnityExample C)

# C標準の設定
set(CMAKE_C_STANDARD 99)

# Unityのディレクトリを定義
set(UNITY_DIR /usr/local/unity)

# ソースファイル
set(SRC src/main.c src/mylib.c)

# テストファイル
set(TEST_SRC test/test_main.c)

# 実行ファイルを作成
add_executable(main ${SRC})

# テスト用実行ファイルを作成
include_directories(include ${UNITY_DIR}/src)
add_executable(test_runner ${TEST_SRC} src/mylib.c ${UNITY_DIR}/src/unity.c)

# テストターゲットを追加
enable_testing()
add_test(NAME test_runner COMMAND test_runner)
