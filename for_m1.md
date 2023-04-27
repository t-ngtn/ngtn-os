# M1 macでの注意点
- tool_def.txt
  - https://github.com/sarisia/mikanos-docker/blob/master/tools_def.txt.diff
  - objcopy周りに関して以下2点を変更
    ```
    *_CLANG38_X64_OBJCOPY_PATH         = llvm-objcopy
    *_CLANG38_X64_RC_PATH              = llvm-objcopy
    ```