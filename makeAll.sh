#!/bin/bash
# script to set up links to the qmk firmware and make it

if [ ! -d qmk_firmware ]
then
  ln -s ../qmk_firmware/
fi 
cd zeal60
if [ ! -d keyboards ]
then

  ln -s ../../qmk_firmware/keyboards/ .
  ln -s ../../qmk_firmware/quantum/ .
fi
make all 
