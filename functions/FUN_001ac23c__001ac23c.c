/*
 * Program: n42.bin
 * Function: FUN_001ac23c
 * Entry: 001ac23c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001ac23c(int param_1,byte param_2)

{
  char cVar2;
  undefined4 uVar1;
  int iVar3;
  
  cVar2 = (*(code *)&SUB_00fabc28)(param_1);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    iVar3 = param_1 * 0x70;
    (&UNK_003fc450)[iVar3] = param_2;
    *(undefined4 *)(&UNK_003fc420 + iVar3) = 0x672b4;
    *(undefined4 *)(&UNK_003fc424 + iVar3) = 0x672b4;
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(&UNK_003fc420 + iVar3) = 0x6724c;
    }
    if ((param_2 & 2) != 0) {
      *(undefined4 *)(&UNK_003fc424 + iVar3) = 0x6724c;
    }
    (*(code *)&SUB_000673a4)(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

