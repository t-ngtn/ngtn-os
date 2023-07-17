# ngtn-os
try mikan OS book


## run
on xquartz
```bash
xhost + 127.0.0.1
```

build前
```bash
$ source ~/osbook/devenv/buildenv.sh 
```

kernel build
```bash
$ cd /workspaces/ngtn-os/kernel/
$ make
```

qemu起動
```bash
$ cd ~/edk2
$ source edksetup.sh
$ build
$ ~/osbook/devenv/run_qemu.sh Build/ngtnLoaderX64/DEBUG_CLANG38/X64/Loader.efi /workspaces/ngtn-os/kernel/kernel.elf
```

containerをrebuildなどした場合、edksetup.sh後に以下をする必要がある。
- for_m1.mdにある二つの変更をtools_def.txtに行う
- target.txtを以下の内容に変更
    | 項目 | 設定値 |
    | - | - |
    | ACTIVE_PLATFORM | ngtnLoaderPkg/ngtnLoaderPkg.dsc |
    | TARGET_ARCH | X64 |
    | TOOL_CHAIN_TAG | CLANG38 |
