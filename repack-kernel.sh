#!/bin/bash
#thx _that for the script
~/Android-Kitchen/tools/mkboot/mkbootfs blob.LNX-ramdisk | gzip > ramdisk.gz
~/Android-Kitchen/tools/mkboot/mkbootimg --kernel zImage --ramdisk ramdisk.gz -o blob.LNX
blobpack blobtmp LNX blob.LNX
echo -n "-SIGNED-BY-SIGNBLOB-" > blob
dd if=/dev/zero bs=1 count=8 >> blob
cat blobtmp >> blob
