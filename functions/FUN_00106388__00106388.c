/*
 * Program: n42.bin
 * Function: FUN_00106388
 * Entry: 00106388
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00106388(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (DAT_005b8084 == '\0') {
    uVar1 = _DAT_003fb8fc >> 0xf & 0xff;
    _DAT_003fb94c =
         (1 << ((uVar1 - (_DAT_003fb8f8 >> 0xf & 0xff)) + 1 & 0x3f)) + -1 << (0x1f - uVar1 & 0x3f);
    iVar2 = FUN_00107298(1);
    if ((iVar2 == 0) && (cVar3 = FUN_001074b0(_DAT_003fb94c), cVar3 == '\0')) {
      DAT_005b8084 = '\x02';
    }
    else {
      DAT_005b8084 = '\x01';
    }
  }
  if (DAT_005b8084 == '\x02') {
    cVar3 = FUN_001075dc();
    _();
    if (cVar3 == '\0') {
      DAT_005b8084 = '\0';
    }
    else if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      DAT_005b8084 = '\x01';
    }
  }
  if (DAT_005b8084 == '\0') {
    uVar4 = 0;
  }
  else {
    if (DAT_005b8084 == '\x02') {
      return 0x100;
    }
    DAT_005b8084 = '\0';
    uVar4 = 0x40;
  }
  FUN_00107c50();
  return uVar4;
}

