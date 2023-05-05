# ngtn-os
try mikan OS book


## run
on xquartz
```bash
xhost + 127.0.0.1
```

```bash
$ cd ~/edk2
$ source edksetup.sh
$ build
$ ~/osbook/devenv/run_qemu.sh Build/ngtnLoaderX64/DEBUG_CLANG38/X64/Loader.efi /workspaces/ngtn-os/kernel/kernel.elf
```