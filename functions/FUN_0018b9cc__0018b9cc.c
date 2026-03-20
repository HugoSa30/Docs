/*
 * Program: n42.bin
 * Function: FUN_0018b9cc
 * Entry: 0018b9cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018b9cc(void)

{
  int iVar1;
  
  if (_DAT_003f9f40 == 2) {
    kryptoCounter = 0;
    iVar1 = _DAT_003f9f48;
    if (_DAT_003f9f48 == 5) {
      iVar1 = 4;
    }
    _DAT_003f9f44 =
         FUN_00104560(&DAT_003f9f50,&DAT_003f9f4c,0xffe029,iVar1,&DAT_003f9f7c,&DAT_003f9f58);
    if (_DAT_003f9f44 != 1) {
      _DAT_003f9f40 = 4;
    }
  }
  return;
}

