/*
 * Program: n42.bin
 * Function: FUN_001e4660
 * Entry: 001e4660
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e4660(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  
  if (_DAT_00fe16cc != 0) {
    piVar3 = (int *)0xfe5bf0;
    iVar4 = _DAT_00fe16cc;
    do {
      piVar3 = piVar3 + 1;
      iVar5 = *piVar3;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      uVar2 = _DAT_00fe16c6;
      uVar1 = _DAT_00fe16c4;
      if (param_1 == 1) {
        if (_DAT_00fe16d0 != 0) {
          puVar6 = (undefined2 *)(iVar5 + 0xf0);
          iVar7 = _DAT_00fe16d0;
          do {
            puVar6[8] = uVar1;
            puVar6[9] = uVar2;
            puVar6[10] = 0xc;
            iVar7 = iVar7 + -1;
            puVar6 = puVar6 + 8;
          } while (iVar7 != 0);
        }
        *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x18) = 0x55555555;
        *(undefined4 *)(iVar5 + 0x1c) = 0xaaaaaaaa;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

