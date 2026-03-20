/*
 * Program: n42.bin
 * Function: FUN_001ac124
 * Entry: 001ac124
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001ac124(int param_1,byte param_2)

{
  char cVar2;
  undefined4 uVar1;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  cVar2 = (*(code *)&SUB_00fabc28)(param_1);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    iVar3 = param_1 * 0x70;
    (&UNK_003fc451)[iVar3] = param_2;
    *(undefined4 *)(&UNK_003fc428 + iVar3) = 0x672b4;
    *(undefined4 *)(&UNK_003fc42c + iVar3) = 0x672b4;
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(&UNK_003fc428 + iVar3) = 0x670c0;
    }
    if ((param_2 & 2) != 0) {
      *(undefined4 *)(&UNK_003fc42c + iVar3) = 0x670c0;
    }
    puVar4 = (undefined2 *)(&UNK_003fc434 + iVar3);
    iVar5 = 4;
    do {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    (&UNK_003fc448)[iVar3] = 0;
    (&UNK_003fc44a)[iVar3] = 0;
    *(undefined2 *)(&UNK_003fc446 + iVar3) = 7;
    (&UNK_003fc455)[iVar3] = 0;
    *(undefined2 *)(&UNK_003fc434 + iVar3) = 0;
    *(undefined4 *)(&UNK_003fc3e8 + iVar3) = 0;
    *(undefined4 *)(&UNK_003fc3ec + iVar3) = 0;
    (*(code *)&SUB_000673a4)(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

