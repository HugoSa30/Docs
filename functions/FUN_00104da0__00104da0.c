/*
 * Program: n42.bin
 * Function: FUN_00104da0
 * Entry: 00104da0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104da0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  (&UNK_003f9d40)[_DAT_003f9d38] = 0x80;
  _DAT_003f9d38 = _DAT_003f9d38 + 1;
  uVar3 = _DAT_003f9d3c;
  if (_DAT_003f9d38 == 0x40) {
    FUN_001049a8();
    uVar3 = _DAT_003f9d3c;
  }
  while (_DAT_003f9d3c = uVar3, _DAT_003f9d38 != 0x38) {
    (&UNK_003f9d40)[_DAT_003f9d38] = 0;
    _DAT_003f9d38 = _DAT_003f9d38 + 1;
    uVar3 = _DAT_003f9d3c;
    if (_DAT_003f9d38 == 0x40) {
      FUN_001049a8();
      uVar3 = _DAT_003f9d3c;
    }
  }
  DAT_003f9d78 = (undefined)(uVar3 << 3);
  iVar4 = 0;
  puVar2 = &DAT_003f9d78;
  _DAT_003f9d38 = 0x38;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = (char)(uVar3 >> (iVar4 * 8 + 5U & 0x3f));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  puVar2 = &UNK_003f9d7c;
  iVar4 = 3;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_001049a8();
  uVar3 = _DAT_003f9d28;
  uVar5 = 0;
  puVar2 = (undefined *)(param_1 + -1);
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = (char)(uVar3 >> ((uVar5 & 7) << 3));
    uVar1 = _DAT_003f9d2c;
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  uVar3 = 0;
  puVar2 = (undefined *)(param_1 + 3);
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = (char)(uVar1 >> ((uVar3 & 7) << 3));
    uVar5 = _DAT_003f9d30;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  uVar3 = 0;
  puVar2 = (undefined *)(param_1 + 7);
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = (char)(uVar5 >> ((uVar3 & 7) << 3));
    uVar1 = _DAT_003f9d34;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  uVar3 = 0;
  puVar2 = (undefined *)(param_1 + 0xb);
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = (char)(uVar1 >> ((uVar3 & 7) << 3));
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  return;
}

