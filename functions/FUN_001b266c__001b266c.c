/*
 * Program: n42.bin
 * Function: FUN_001b266c
 * Entry: 001b266c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b266c(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < '\b') && (-1 < param_1)) {
    iVar1 = param_1 * 8;
    if (*(int *)(&DAT_003fc8cc + iVar1) == 0) {
      (*(code *)&SUB_00fac71c)(0x28,4,(short)param_1,0);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(&DAT_003fc8cc + iVar1) = 0;
      *(undefined4 *)(&DAT_003fc8d0 + iVar1) = 0;
      DAT_003fc910 = DAT_003fc910 + -1;
      if (DAT_003fc910 == '\0') {
        _DAT_003fc90c = 1;
        (*(code *)&SUB_00fafb34)();
      }
      uVar2 = 1;
    }
  }
  else {
    (*(code *)&SUB_00fac71c)(0x28,3,(short)param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}

