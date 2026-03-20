/*
 * Program: n42.bin
 * Function: FUN_0010aed0
 * Entry: 0010aed0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010aed0(void)

{
  int iVar1;
  uint uVar2;
  code **ppcVar3;
  int local_20;
  undefined local_1c [4];
  
  uVar2 = 0;
  if (_DAT_003fbd28 != 0) {
    do {
      ppcVar3 = *(code ***)(_DAT_003fbd24 + uVar2 * 4);
      local_1c[0] = 0;
      if (_DAT_003fbd30 != ppcVar3) {
        iVar1 = (**ppcVar3)(&local_20,local_1c);
        if (iVar1 == 1) {
          DAT_003fbd38 = 1;
        }
        else {
          if (iVar1 != 2) goto LAB_0010af8c;
          DAT_003fbd38 = 2;
        }
        _DAT_003fbd34 = local_20;
        DAT_003fbd20 = local_1c[0];
        _DAT_003fbd30 = ppcVar3;
        if (*(char *)(local_20 + 0x34) != '\0') {
          return;
        }
      }
LAB_0010af8c:
      uVar2 = uVar2 + 1;
    } while (uVar2 < _DAT_003fbd28);
  }
  return;
}

