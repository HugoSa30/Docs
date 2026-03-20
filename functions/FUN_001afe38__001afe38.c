/*
 * Program: n42.bin
 * Function: FUN_001afe38
 * Entry: 001afe38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001afe38(void)

{
  bool bVar1;
  
  bVar1 = 1 < _DAT_003fc5e0;
  if (bVar1) {
    _DAT_003fc5e0 = 2;
    *(int *)(*_DAT_003fc5dc + 0x18) = 1 << ((uint)*(byte *)(_DAT_003fc5dc + 3) * 2 & 0x3f);
  }
  else {
    (*(code *)&SUB_00fafd30)(0x34,_DAT_003fc5e0,0,0);
  }
  return bVar1;
}

