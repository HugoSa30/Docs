/*
 * Program: n42.bin
 * Function: FUN_001a7b0c
 * Entry: 001a7b0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a7b0c(void)

{
  int iVar1;
  
  iVar1 = _DAT_003fba04;
  if ((*(ushort *)(*(int *)(_DAT_003fba04 + 4) + 0x32) & 0xff) == (ushort)DAT_003fb9e7) {
    (&DAT_003fb9e9)[DAT_003fb9e8] = DAT_003fb9e7;
    DAT_003fb9e8 = DAT_003fb9e8 + 1;
    DAT_003fb9e7 = 0;
    _DAT_003fb9f0 = _DAT_003fb9f4;
    if (_DAT_003fb9f4 != 8) {
      FUN_00109630(iVar1,&DAT_003fb9e6,1);
    }
  }
  else {
    _DAT_003fba08 = 0;
  }
  return;
}

