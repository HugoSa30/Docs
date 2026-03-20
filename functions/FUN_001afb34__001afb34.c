/*
 * Program: n42.bin
 * Function: FUN_001afb34
 * Entry: 001afb34
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001afb34(void)

{
  int iVar1;
  
  if (_DAT_0001ff28 == 0) {
    _DAT_003fc5e0 = 0;
  }
  else {
    _DAT_003fc5e0 = 1;
    (*(code *)&SUB_00faf170)(_DAT_0001ff28,DAT_0001ff35,0);
    (*(code *)&SUB_00faf214)(_DAT_0001ff28,DAT_0001ff35,0);
    iVar1 = _DAT_0001ff28;
    *(ushort *)(_DAT_0001ff28 + 0x20) = ~(ushort)(1 << (DAT_0001ff35 & 0x3f));
    (*(code *)&SUB_00faf170)(iVar1,DAT_0001ff34,0);
    (*(code *)&SUB_00faf2d0)(_DAT_0001ff28,DAT_0001ff34,0xb);
    iVar1 = _DAT_0001ff28;
    *(int *)(_DAT_0001ff28 + 0x18) = 1 << ((uint)DAT_0001ff35 * 2 & 0x3f);
    (*(code *)&SUB_00faf214)(iVar1,DAT_0001ff34,1);
  }
  (*(code *)&SUB_00faf9a8)(9);
  return;
}

