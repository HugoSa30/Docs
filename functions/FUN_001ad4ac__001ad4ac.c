/*
 * Program: n42.bin
 * Function: FUN_001ad4ac
 * Entry: 001ad4ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ad4ac(void)

{
  char cVar1;
  
  cVar1 = (*(code *)&SUB_00fafac4)(3);
  if (cVar1 == '\0') {
    _DAT_003fc2f8 = 1;
    _DAT_003fc2fc = 1;
  }
  else {
    _DAT_003fc2f8 = 2;
    _DAT_003fc2fc = 2;
  }
  (*(code *)&SUB_00faf170)(&DAT_00304000,0,0);
  (*(code *)&SUB_00faf214)(&DAT_00304000,0,0);
  _DAT_00304014 = _DAT_00304014 & 0xfffffffc;
  _DAT_00304018 = 0;
  _DAT_00304020 = 0xfffe;
  (*(code *)&SUB_00faf170)(&DAT_00304400,0,0);
  (*(code *)&SUB_00faf214)(&DAT_00304400,0,0);
  _DAT_00304414 = _DAT_00304414 & 0xfffffffc;
  _DAT_00304418 = 0;
  _DAT_00304420 = 0xfffe;
  return;
}

