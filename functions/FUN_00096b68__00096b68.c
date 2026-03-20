/*
 * Program: n42.bin
 * Function: FUN_00096b68
 * Entry: 00096b68
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096b68(void)

{
  char cVar2;
  undefined2 *puVar1;
  
  cVar2 = FUN_00096b2c();
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)&DAT_00f03184;
  }
  else {
    puVar1 = (undefined2 *)&DAT_00f04184;
  }
  *puVar1 = 0x1200;
  *puVar1 = 10;
  _DAT_002fc110 = _DAT_002fc110 & 0xfffffffd;
  DAT_003f9e65 = 1;
  return;
}

