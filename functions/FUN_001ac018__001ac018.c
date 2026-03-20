/*
 * Program: n42.bin
 * Function: FUN_001ac018
 * Entry: 001ac018
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001ac018(uint param_1)

{
  char cVar3;
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == 0xffffffff) || (cVar3 = (*(code *)&SUB_00fabc28)(param_1), cVar3 != '\0')) {
    iVar2 = (int)DAT_003fc5ac;
    if (-1 < iVar2) {
      (&UNK_003fc454)[iVar2 * 0x70] = 0;
      *(undefined4 *)(&UNK_003fc41c + iVar2 * 0x70) = 0x672b8;
      (&UNK_003fc448)[iVar2 * 0x70] = 0;
    }
    (*(code *)&SUB_00fb2c10)();
    iVar2 = param_1 * 0x70;
    *(undefined2 *)(&UNK_003fc430 + iVar2) = 0xffff;
    (&UNK_003fc453)[iVar2] = 0xff;
    if (param_1 != 0xffffffff) {
      (&UNK_003fc454)[iVar2] = 1;
      (*(code *)&SUB_000673a4)(param_1 & 0xff);
      *(undefined4 *)(&UNK_003fc41c + iVar2) = 0x672c4;
    }
    DAT_003fc5ac = (char)param_1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

