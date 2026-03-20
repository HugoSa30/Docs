/*
 * Program: n42.bin
 * Function: FUN_0010b5d8
 * Entry: 0010b5d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010b5d8(void)

{
  int iVar1;
  
  iVar1 = _DAT_003fbdd0;
  if (DAT_003fbd5c != '\0') {
    *(undefined *)(*(int *)(_DAT_003fbdd0 + 8) + 0xb) = 0;
    if (*(char *)(iVar1 + 0xd) == '\0') {
      (**_DAT_003fbd60)(0,0,*_DAT_003fbddc,*(undefined2 *)(_DAT_003fbddc + 1),0);
      _DAT_003fbdd8 = 0xf0b36c;
    }
    else {
      _DAT_003fbdd8 = 0xf0b4b4;
    }
  }
  return;
}

