/*
 * Program: n42.bin
 * Function: FUN_001aea34
 * Entry: 001aea34
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aea34(void)

{
  char cVar1;
  
  if ((8 < _DAT_003fc2f8) || (cVar1 = (*(code *)&SUB_00fae824)(), cVar1 != '\0')) {
    (*(code *)&SUB_00fada50)(DAT_003fc348);
    DAT_003fc34c = (undefined)((ushort)*_DAT_003fc2e4 >> 8);
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,6,0,0);
    }
    (*(code *)&SUB_00066bd4)();
    DAT_003fc33a = 1;
    _DAT_003fc2fc = 10;
    _DAT_003fc2f8 = 10;
    (*(code *)&SUB_00fb3804)();
  }
  return;
}

