/*
 * Program: n42.bin
 * Function: FUN_001e77ac
 * Entry: 001e77ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e77ac(void)

{
  char cVar2;
  undefined4 uVar1;
  undefined auStack_18 [4];
  ushort local_14;
  ushort local_e;
  byte local_a [10];
  
  cVar2 = FUN_001e7724(DAT_00fe16e1,local_a,0);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    do {
    } while ((short)_DAT_0030501a < 0);
    _DAT_0030501a = _DAT_0030501a & 0x7fff;
    FUN_001e7524((uint)local_a[0] * 0xf + 0xfe16e6);
    FUN_001e75cc(0xfe175c,7,auStack_18,1);
    if (((local_14 & 2) == 0) && ((local_e & 2) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

