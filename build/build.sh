#!bin/bash
gcc_dir=`which gcc`
if [ "$gcc_dir" = "" ];then
    echo "gccが見当たらないためインストールします"
    sudo apt install gcc
fi    
mkdir /usr/mbin
sudo gcc -o /usr/mbin/mkprjc ../source/main.c
export PATH=$PATH:/usr/mbin
echo "構築が完了しました。bashrcに/usr/mbinのパスを追加してください。"