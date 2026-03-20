/*
 * Program: n42.bin
 * Function: FUN_001aed80
 * Entry: 001aed80
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001aed80(void)

{
  bool bVar1;
  
  bVar1 = 1 < _DAT_003fc35c;
  if (bVar1) {
    _DAT_003fc35c = 3;
    (*(code *)&SUB_00faf214)(*_DAT_003fc354,*(undefined *)(_DAT_003fc354 + 2),0);
  }
  else {
    (*(code *)&SUB_00faed08)(0x34,0);
  }
  return bVar1;
}

