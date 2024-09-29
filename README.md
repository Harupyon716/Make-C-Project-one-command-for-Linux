# Make-C-Project-one-command-for-Linux
## プログラム概要
1つのコマンドでC言語のテンプレートプロジェクトを作成するプログラム
## 前提
* gcc(自動でインストール可能)
## 環境構築
```build```フォルダに移動し、build.shを実行。  
gccが無い場合は自動でインストール。
```shell
cd build
source build.sh
```
bashrcの末尾にmbinフォルダの環境変数を追加して終了。
```
export PATH=$PATH:/usr/mbin
```
## 使い方
```shell
mkprjc <任意のプロジェクト名>
```
