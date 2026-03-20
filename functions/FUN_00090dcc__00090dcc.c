/*
 * Program: n42.bin
 * Function: FUN_00090dcc
 * Entry: 00090dcc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090dcc(void)

{
  undefined uVar2;
  short sVar1;
  
  if ((1 << (DAT_003fa0dc & 0x3f) & 0x18U) == 0) {
    uVar2 = 0x11;
  }
  else if (DAT_003f9f26 == '\0') {
    if (DAT_003fa0b0 == '\0') {
      uVar2 = 0x22;
    }
    else {
      DAT_003fa0b0 = '\0';
      sVar1 = FUN_00092d0c(&DAT_003fa0d0);
      if (sVar1 == 0) {
        FUN_00095b8c(10,0);
        return;
      }
      uVar2 = 0xfe;
    }
  }
  else {
    uVar2 = 0x12;
  }
  *_DAT_003f9f20 = uVar2;
  FUN_00095b8c(0x14,1);
  return;
}

