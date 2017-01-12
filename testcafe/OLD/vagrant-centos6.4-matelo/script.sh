echo "Upgrade all system packages using following commands"
yum clean all
yum update

echo "Now install required packages for Wine using yum package manager using following commands."
sudo yum groupinstall 'Development Tools'
sudo yum install libX11-devel freetype-devel zlib-devel libxcb-devel

echo "Install Wine"
cd /usr/src
sudo wget http://dl.winehq.org/wine/source/1.9/wine-1.9.19.tar.bz2
sudo tar xjf wine-1.9.19.tar.bz2
cd wine-1.9.19

echo "Configure wine using one of following command based on your system architecture."
# For 64-Bit Systems:
sudo ./configure  --enable-win64

echo "Finally compile wine source with make command"
sudo make
sudo make install

echo "Install GUI Desktop"
sudo yum -y groupinstall "Desktop" "Desktop Platform" "X Window System" "Fonts"
sudo yum -y install tigervnc-server xorg-x11-fonts-Type1 firefox
sudo chkconfig vncserver on
vncserver
startx