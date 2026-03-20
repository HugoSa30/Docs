/*
 * Program: n42.bin
 * Function: FUN_001e86d4
 * Entry: 001e86d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e86d4(int param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  FUN_001e2e0c();
  if ((((*(char *)(param_1 + 2) == '\0') && (DAT_003fb996 != '\x02')) &&
      (_DAT_00ffe5fc != (int **)0x0)) && (_DAT_00ffe5fc != (int **)&DAT_ffffffff)) {
    piVar5 = *_DAT_00ffe5fc;
    iVar3 = piVar5[1];
    if (*piVar5 == 0) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar4 = piVar5[3];
        if (iVar4 != 0) {
          puVar2 = (undefined *)(piVar5[2] + -1);
          do {
            bVar1 = *(byte *)(param_2 + 1);
            puVar2 = puVar2 + 1;
            *(undefined *)(param_2 + (uint)bVar1 + 0x16) = *puVar2;
            *(byte *)(param_2 + 1) = bVar1 + 1;
            *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + '\x01';
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        bVar1 = *(byte *)(param_2 + 1);
        *(undefined *)(param_2 + (uint)bVar1 + 0x16) = 0x23;
        *(byte *)(param_2 + 1) = bVar1 + 1;
        *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + '\x01';
        piVar5 = piVar5 + 2;
      }
      uVar6 = 1;
    }
  }
  FUN_001e2e0c();
  return uVar6;
}

