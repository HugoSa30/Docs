/*
 * Program: n42.bin
 * Function: FUN_00131618
 * Entry: 00131618
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0013189c) */
/* WARNING: Removing unreachable block (ram,0x00131908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00131618(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  
  B_pwf = '\0';
  B_hwpwf = (*(code *)&SUB_00fac8d0)(1);
  if (DAT_001cb636 == '\0') {
    if ((B_hwpwf == 0) && (DAT_003fe950 == '\0')) {
      DAT_005b8d36 = true;
    }
    else {
      DAT_005b8d36 = false;
    }
    if (((B_hwpwf != 0) || (DAT_003fe950 != '\0')) || (DAT_001cb348 != '\0')) {
      B_pwf = '\x01';
      B_eepwf = '\x01';
    }
  }
  else {
    if (((B_hwpwf == 0) && (DAT_003fe950 == '\0')) || (DAT_001cb348 != '\0')) {
      DAT_005b8d35 = '\0';
    }
    else {
      DAT_005b8d35 = '\x01';
    }
    FUN_0012a328(DAT_005b8d35,0);
    uVar1 = FUN_001239a4(0);
    if (((uVar1 & 2) == 0) || ((uVar1 & 4) != 0)) {
      DAT_005b8d36 = false;
    }
    else {
      DAT_005b8d36 = true;
    }
    if (DAT_001cb348 == '\0') {
      if ((!(bool)DAT_005b8d36) && (DAT_005b8d35 != '\0')) {
        B_pwf = '\x01';
      }
      if ((B_hwpwf != 0) || (DAT_003fe950 != '\0')) {
        B_eepwf = '\x01';
      }
    }
    else {
      B_pwf = '\x01';
      B_eepwf = '\x01';
    }
  }
  DAT_005b8d34 = _DAT_003fff80 == -0x554004ef;
  if (((B_hwpwf == 0) && (DAT_003fe950 == '\0')) && ((bool)DAT_005b8d34)) {
    B_eepwf = '\x01';
    B_pwf = '\x01';
  }
  pcVar2 = (char *)0xf00207;
  pcVar5 = &UNK_003fce2f;
  iVar4 = 0xc;
  do {
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
    if (*pcVar2 != *pcVar5) {
      B_eepwf = '\x01';
      B_pwf = '\x01';
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (B_pwf != '\0') {
    puVar3 = (undefined4 *)&UNK_003fce2c;
    iVar4 = 0x24b;
    do {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_00123db8();
  }
  if (B_eepwf != '\0') {
    puVar3 = (undefined4 *)&UNK_003fe72c;
    iVar4 = 0x49;
    do {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

