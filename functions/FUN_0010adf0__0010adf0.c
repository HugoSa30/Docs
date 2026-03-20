/*
 * Program: n42.bin
 * Function: FUN_0010adf0
 * Entry: 0010adf0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010adf0(void)

{
  int iVar1;
  uint uVar2;
  code **ppcVar3;
  int local_30;
  undefined local_2c [8];
  
  uVar2 = 0;
  if (_DAT_003fbd28 != 0) {
    do {
      ppcVar3 = *(code ***)(_DAT_003fbd24 + uVar2 * 4);
      local_2c[0] = 0;
      iVar1 = (**ppcVar3)(&local_30,local_2c);
      if (iVar1 == 1) {
        DAT_003fbd38 = 1;
LAB_0010ae88:
        _DAT_003fbd34 = local_30;
        DAT_003fbd20 = local_2c[0];
        _DAT_003fbd30 = ppcVar3;
        if (*(char *)(local_30 + 0x34) != '\0') {
          return;
        }
      }
      else if (iVar1 == 2) {
        DAT_003fbd38 = 2;
        goto LAB_0010ae88;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < _DAT_003fbd28);
  }
  return;
}

