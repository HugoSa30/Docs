/*
 * Program: n42.bin
 * Function: FUN_00097504
 * Entry: 00097504
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097504(void)

{
  byte bVar1;
  undefined4 in_TBLr;
  
  if (((_DAT_003f9f28 & 0x40) != 0) && (DAT_003fa0f2 != '\0')) {
    if (DAT_003fa0f8 == '\x01') {
      if (*(uint *)(_DAT_003f9e38 + 0xc) == (uint)DAT_003fa0fa) {
        _DAT_003fa0f3 = in_TBLr;
        FUN_00097484();
        DAT_003fa0f7 = 1;
        DAT_003fa0f8 = '\x02';
      }
    }
    else if ((DAT_003fa0f8 == '\x02') && (DAT_003fa0f9 != '\0')) {
      DAT_003fa0f9 = '\0';
      DAT_003fa0f8 = '\x01';
      DAT_003fa0f7 = 0;
      *(uint *)(_DAT_003f9e3c + 0x10) = (uint)DAT_003fa0fa;
      bVar1 = DAT_003fa0fa + 1;
      if ((byte)(DAT_003fa0fa + 1) == 0) {
        bVar1 = DAT_003fa0fa + 2;
      }
      DAT_003fa0fa = bVar1;
      if (_DAT_003f9ef0 != 0) {
        FUN_00092534();
      }
    }
  }
  return;
}

