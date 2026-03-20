/*
 * Program: n42.bin
 * Function: FUN_0009e560
 * Entry: 0009e560
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009e560(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xc;
  iVar2 = 4;
  do {
    iVar1 = *(int *)(&DAT_003fa158 + iVar3);
    if (iVar1 < 5) {
      if (iVar1 != 4) {
        if (iVar1 == 1) goto LAB_0009e5d0;
        if (iVar1 == 2) goto LAB_0009e5e4;
        if (iVar1 != 3) goto LAB_0009e658;
LAB_0009e5f8:
        if ((param_1 == 0) || (param_1 == 1)) {
          FUN_000b126c(*(int *)(&DAT_003fa138 + param_1 * 0x10) + 0x10,0xa5a5);
          FUN_0009d00c(param_1);
        }
        if (*(int *)(&DAT_003fa158 + iVar3) != 4) goto LAB_0009e66c;
      }
      FUN_0009e4c4(param_1);
      if (*(int *)(&DAT_003fa158 + iVar3) == 5) {
        return 1;
      }
    }
    else {
      if (iVar1 == 5) {
        return 1;
      }
      if (iVar1 == 6) {
LAB_0009e5d0:
        FUN_0009d0b0(param_1);
        if (*(int *)(&DAT_003fa158 + iVar3) == 2) {
LAB_0009e5e4:
          FUN_0009d1e8(param_1);
          if (*(int *)(&DAT_003fa158 + iVar3) == 3) goto LAB_0009e5f8;
        }
      }
      else {
LAB_0009e658:
        (*(code *)&SUB_00faca3c)(0x15e);
      }
    }
LAB_0009e66c:
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

