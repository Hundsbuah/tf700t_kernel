#!/bin/bash
#thx _that for the script
blobunpack blob
extract-kernel.pl blob.LNX
extract-ramdisk.pl blob.LNX
