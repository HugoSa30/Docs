/*
 * Program: n42.bin
 * Function: FUN_0009d0b0
 * Entry: 0009d0b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009d0b0(int param_1)

{
  char cVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    bVar2 = 0;
    do {
      cVar1 = FUN_000b12f0((&DAT_0000ebf0)[bVar2]);
      if (cVar1 == '\0') {
        FUN_0009d00c(0);
        return;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < 2);
  }
  else {
    if (param_1 != 1) {
      return;
    }
    bVar2 = 0;
    do {
      cVar1 = FUN_000b12f0((&DAT_0000ebf4)[bVar2]);
      if (cVar1 == '\0') {
        FUN_0009d00c(1);
        return;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < 2);
  }
  cVar1 = FUN_0009c8a0(param_1,1);
  if (cVar1 == '\0') {
    FUN_000b126c(*(undefined4 *)(&DAT_003fa138 + param_1 * 0x10),0xa5a5);
    FUN_0009d00c(param_1);
  }
  else {
    FUN_000b126c(*(int *)(&DAT_003fa138 + param_1 * 0x10) + 2,0xa5a5);
    FUN_0009d00c(param_1);
  }
  return;
}

