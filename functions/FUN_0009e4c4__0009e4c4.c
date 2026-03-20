/*
 * Program: n42.bin
 * Function: FUN_0009e4c4
 * Entry: 0009e4c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009e4c4(int param_1)

{
  char cVar1;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    cVar1 = FUN_0009e328(param_1);
    if (cVar1 == '\0') {
      FUN_000b126c(*(undefined4 *)(&DAT_003fa138 + param_1 * 0x10),0xa5a5);
      FUN_0009d00c(param_1);
    }
    else {
      FUN_000b126c(*(int *)(&DAT_003fa138 + param_1 * 0x10) + 0x12,0xa5a5);
      FUN_0009d00c(param_1);
    }
  }
  return;
}

