/*
 * Program: n42.bin
 * Function: FUN_001e8ae8
 * Entry: 001e8ae8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8ae8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined auStack_20 [20];
  
  uVar1 = _DAT_00fe16a0;
  if (_DAT_00fe16d8 != 0) {
    puVar2 = (undefined4 *)&DAT_003fb848;
    iVar4 = _DAT_00fe16d8;
    do {
      puVar2[9] = uVar1;
      puVar2 = puVar2 + 6;
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  _pm_akt = 0;
  FUN_001e8444();
  FUN_001e4660(1);
  FUN_001e485c(auStack_20);
  FUN_001e4660(2);
  if (_DAT_00fe16d8 == 0) {
    _pm_akt = 2;
    _DAT_003fb890 = 0;
  }
  if (_pm_akt == 1) {
    iVar4 = 0x80;
  }
  else if (_pm_akt == 2) {
    if (_DAT_00fe16d8 < _DAT_003fb890) {
      iVar4 = 2;
      DAT_003fb8c8 = 0xb0;
    }
    else {
      iVar4 = 1;
    }
  }
  else if (_pm_akt == 3) {
    iVar4 = 2;
  }
  else {
    iVar4 = 0x80;
  }
  if (_DAT_00fe16cc != 0) {
    puVar2 = (undefined4 *)0xfe5bf0;
    iVar3 = _DAT_00fe16cc;
    do {
      puVar2 = puVar2 + 1;
      FUN_001e83fc(*puVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  _DAT_00300000 = _DAT_00300000 & 0xfdff;
  if (iVar4 == 1) {
    FUN_001e8a50();
  }
  return;
}

