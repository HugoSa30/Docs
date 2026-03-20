/*
 * Program: n42.bin
 * Function: FUN_000fbbb0
 * Entry: 000fbbb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbbb0(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int iStack_14;
  
  iVar2 = _DAT_003fbcbc;
  piVar5 = *(int **)(_DAT_003fbcbc + 0x30);
  piVar3 = &iStack_14;
  piVar6 = piVar3;
  if (piVar3 != piVar5) {
    do {
      while (piVar3 = piVar5 + ((int)piVar6 - (int)piVar5 >> 3), *piVar3 == -0x69ac3c5b) {
        iVar7 = piVar3[-1];
        while (iVar7 == -0x69ac3c5b) {
          piVar5 = piVar3 + 1;
          if (piVar6 == piVar5) goto LAB_000fbc60;
          piVar3 = piVar5 + ((int)piVar6 - (int)piVar5 >> 3);
          if (*piVar3 != -0x69ac3c5b) goto LAB_000fbc54;
          iVar7 = piVar3[-1];
        }
        piVar6 = piVar3;
        if (piVar3 == piVar5) goto LAB_000fbc60;
      }
LAB_000fbc54:
      piVar6 = piVar3;
    } while (piVar3 != piVar5);
  }
LAB_000fbc60:
  puVar8 = *(uint **)(_DAT_003fbcf8 + 0x10);
  puVar8[1] = (*(int *)(_DAT_003fbcbc + 0x2c) - (int)piVar5 >> 2) - 1;
  if (piVar3 < (int *)(*(int *)(iVar2 + 0x30) +
                      ((uint)(*(int *)(iVar2 + 0x2c) - *(int *)(iVar2 + 0x30)) >> 2))) {
    *puVar8 = *puVar8 | 2;
  }
  piVar5 = (int *)(*(int *)(iVar2 + 0x38) + *(int *)(iVar2 + 0x3c));
  piVar3 = piVar5;
  piVar6 = _DAT_003fbcb8;
  if (piVar5 != _DAT_003fbcb8) {
    do {
      while (piVar3 = piVar5, piVar4 = piVar6 + ((int)piVar3 - (int)piVar6 >> 3),
            *piVar4 == -0x69ac3c5b) {
        iVar7 = piVar4[1];
        piVar5 = piVar3;
        while (piVar3 = piVar4, iVar7 == -0x69ac3c5b) {
          if (piVar3 == piVar6) goto LAB_000fbd48;
          piVar4 = piVar6 + ((int)piVar3 - (int)piVar6 >> 3);
          if (*piVar4 != -0x69ac3c5b) goto LAB_000fbd3c;
          iVar7 = piVar4[1];
          piVar5 = piVar3;
        }
        piVar6 = piVar3 + 1;
        if (piVar5 == piVar6) goto LAB_000fbd48;
      }
LAB_000fbd3c:
      piVar6 = piVar4 + 1;
      bVar1 = piVar3 != piVar6;
      piVar5 = piVar3;
      piVar3 = piVar4;
    } while (bVar1);
  }
LAB_000fbd48:
  puVar8[2] = ((int)piVar6 - *(int *)(iVar2 + 0x38) >> 2) - 1;
  if ((int *)(*(int *)(iVar2 + 0x38) + (*(uint *)(iVar2 + 0x3c) >> 2)) < piVar3) {
    *puVar8 = *puVar8 | 0x200;
  }
  return;
}

