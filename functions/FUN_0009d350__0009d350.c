/*
 * Program: n42.bin
 * Function: FUN_0009d350
 * Entry: 0009d350
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009d350(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xc;
  iVar2 = 4;
  do {
    iVar1 = *(int *)(&DAT_003fa158 + iVar3);
    if (iVar1 < 5) {
      if (iVar1 == 4) {
        return;
      }
      if (iVar1 == 1) {
LAB_0009d3cc:
        FUN_0009d0b0(param_1);
        if (*(int *)(&DAT_003fa158 + iVar3) != 2) goto LAB_0009d40c;
      }
      else if (iVar1 != 2) {
        if (iVar1 == 3) {
          return;
        }
        goto LAB_0009d3f8;
      }
      FUN_0009d1e8(param_1);
      if (*(int *)(&DAT_003fa158 + iVar3) == 3) {
        return;
      }
    }
    else {
      if (iVar1 == 5) {
        return;
      }
      if (iVar1 == 6) goto LAB_0009d3cc;
LAB_0009d3f8:
      (*(code *)&SUB_00faca3c)(0x15e);
    }
LAB_0009d40c:
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

