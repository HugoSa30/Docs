/*
 * Program: n42.bin
 * Function: FUN_0009694c
 * Entry: 0009694c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009694c(void)

{
  undefined uVar3;
  ushort uVar2;
  undefined4 uVar1;
  
  if (DAT_003f9f26 == '\x01') {
    uVar2 = FUN_000955a0();
    if (uVar2 == 0) {
      *_DAT_003f9f1c = *_DAT_003f9f18;
      uVar1 = 10;
      goto LAB_000969e4;
    }
    if ((uVar2 & 0x100) == 0x100) {
      uVar3 = 0x23;
    }
    else if ((uVar2 & 4) == 4) {
      uVar3 = 0x22;
    }
    else if ((uVar2 & 0x40) == 0x40) {
      uVar3 = 0xfd;
    }
    else {
      uVar3 = 0x10;
    }
  }
  else {
    uVar3 = 0x12;
  }
  *_DAT_003f9f20 = uVar3;
  uVar1 = 0x14;
LAB_000969e4:
  FUN_00095b8c(uVar1,1);
  return;
}

